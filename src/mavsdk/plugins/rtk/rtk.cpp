// WARNING: THIS FILE IS AUTOGENERATED! As such, it should not be edited.
// Edits need to be made to the proto files
// (see https://github.com/mavlink/MAVSDK-Proto/blob/master/protos/rtk/rtk.proto)

#include <iomanip>

#include "rtk_impl.h"
#include "plugins/rtk/rtk.h"

namespace mavsdk {

using RtcmData = Rtk::RtcmData;



Rtk::Rtk(System& system) : PluginBase(), _impl{std::make_unique<RtkImpl>(system)} {}

Rtk::Rtk(std::shared_ptr<System> system) : PluginBase(), _impl{std::make_unique<RtkImpl>(system)} {}

Rtk::~Rtk() {}





Rtk::Result Rtk::send_rtcm_data(RtcmData rtcm_data) const
{
    return _impl->send_rtcm_data(rtcm_data);
}



bool operator==(const Rtk::RtcmData& lhs, const Rtk::RtcmData& rhs)
{
    return
        (rhs.data == lhs.data);
}

std::ostream& operator<<(std::ostream& str, Rtk::RtcmData const& rtcm_data)
{
    str << std::setprecision(15);
    str << "rtcm_data:" << '\n'
        << "{\n";
    str << "    data: " << rtcm_data.data << '\n';
    str << '}';
    return str;
}



std::ostream& operator<<(std::ostream& str, Rtk::Result const& result)
{
    switch (result) {
        case Rtk::Result::Unknown:
            return str << "Unknown";
        case Rtk::Result::Success:
            return str << "Success";
        case Rtk::Result::TooLong:
            return str << "Too Long";
        case Rtk::Result::NoSystem:
            return str << "No System";
        case Rtk::Result::ConnectionError:
            return str << "Connection Error";
        default:
            return str << "Unknown";
    }
}




} // namespace mavsdk