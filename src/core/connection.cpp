#include "connection.h"
#include "mavsdk_impl.h"
#include "mavlink_channels.h"
#include "global_include.h"

namespace mavsdk {

Connection::Connection(receiver_callback_t receiver_callback) :
    _receiver_callback(receiver_callback),
    _mavlink_receiver()
{
    // Insert system ID 0 in all connections for broadcast.
    _system_ids.insert(0);
}

Connection::~Connection()
{
    // Just in case a specific connection didn't call it already.
    stop_mavlink_receiver();
    _receiver_callback = {};
}

bool Connection::start_mavlink_receiver()
{
    uint8_t channel;
    if (!MAVLinkChannels::Instance().checkout_free_channel(channel)) {
        return false;
    }

    _mavlink_receiver.reset(new MAVLinkReceiver(channel));
    return true;
}

void Connection::stop_mavlink_receiver()
{
    if (_mavlink_receiver) {
        uint8_t used_channel = _mavlink_receiver->get_channel();
        // Destroy receiver before giving the channel back.
        _mavlink_receiver.reset();
        MAVLinkChannels::Instance().checkin_used_channel(used_channel);
    }
}

void Connection::receive_message(mavlink_message_t& message)
{
    if (_system_ids.find(message.sysid) == _system_ids.end()) {
        _system_ids.insert(message.sysid);
    }
    _receiver_callback(message);
}

bool Connection::has_system_id(uint8_t system_id)
{
    return _system_ids.find(system_id) != _system_ids.end();
}

} // namespace mavsdk
