#include <mavsdk/mavsdk.h>
#include <mavsdk/plugins/action/action.h>
#include <chrono>
#include <future>
#include <iostream>
#include <memory>
#include <thread>
#include <atomic>

using namespace mavsdk;
using std::this_thread::sleep_for;
using std::chrono::seconds;


void usage(const std::string& bin_name)
{
    std::cerr << "Usage : " << bin_name << " <connection_url>\n"
              << "Connection URL format should be :\n"
              << " For TCP : tcp://[server_host][:server_port]\n"
              << " For UDP : udp://[bind_host][:bind_port]\n"
              << " For Serial : serial:///path/to/serial/dev[:baudrate]\n"
              << "For example, to connect to the simulator use URL: udp://:14540\n";
}

std::shared_ptr<System> get_system(Mavsdk& mavsdk)
{
    std::cout << "Waiting to discover system...\n";
    auto prom = std::promise<std::shared_ptr<System>>{};
    auto fut = prom.get_future();

    // We wait for new systems to be discovered, once we find one that has an
    // autopilot, we decide to use it.
    mavsdk.subscribe_on_new_system([&mavsdk, &prom]() {
        auto system = mavsdk.systems().back();

        if (system->has_autopilot()) {
            std::cout << "Discovered autopilot\n";

            // Unsubscribe again as we only want to find one system.
            mavsdk.subscribe_on_new_system(nullptr);
            prom.set_value(system);
        }
    });

    // We usually receive heartbeats at 1Hz, therefore we should find a
    // system after around 3 seconds max, surely.
    if (fut.wait_for(seconds(3)) == std::future_status::timeout) {
        std::cerr << "No autopilot found.\n";
        return {};
    }

    // Get discovered system now.
    return fut.get();
}

int main(int argc, char** argv)
{
    if (argc != 2) {
        usage(argv[0]);
        return 1;
    }

    Mavsdk mavsdk;
    ConnectionResult connection_result = mavsdk.add_any_connection(argv[1]);

    if (connection_result != ConnectionResult::Success) {
        std::cerr << "Connection failed: " << connection_result << '\n';
        return 1;
    }

    auto system = get_system(mavsdk);
    if (!system) {
        return 1;
    }

    // Instantiate plugins.
    auto action = Action{system};
    
    while (true) {
        if (input1 == 1){
            std::cout << "Position control.\n";
            const Action::Result mode_position_control_result = action.mode_position_control();
            if (mode_position_control_result != Action::Result::Success) {
                std::cerr << "Position control failed: " << mode_position_control_result << '\n';
                return 1;
            }
        } 
        else if (input2 == 1){
            std::cout << "Altitude control.\n";
            const Action::Result mode_altitude_control_result = action.mode_altitude_control();
            if (mode_altitude_control_result != Action::Result::Success) {
                std::cerr << "Altitude control failed: " << mode_altitude_control_result << '\n';
                return 1;
            }
        }
        else if (input3 == 1){
            std::cout << "Stabilized.\n";
            const Action::Result mode_stabilized_result = action.mode_stabilized();
            if (mode_stabilized_result != Action::Result::Success) {
                std::cerr << "Stabilized failed: " << mode_stabilized_result << '\n';
                return 1;
            }
        }
        else if (input4 == 1){
            std::cout << "Manual.\n";
            const Action::Result mode_manual_result = action.mode_manual();
            if (mode_manual_result != Action::Result::Success) {
                std::cerr << "Manual failed: " << mode_manual_result << '\n';
                return 1;
            }
        }
        else if (input5 == 1){
            std::cout << "Acro.\n";
            const Action::Result mode_acro_result = action.mode_acro();
            if (mode_acro_result != Action::Result::Success) {
                std::cerr << "Acro failed: " << mode_acro_result << '\n';
                return 1;
            }
        }
        else if (input6 == 1){
            std::cout << "Hold.\n";
            const Action::Result mode_hold_result = action.mode_hold();
            if (mode_hold_result != Action::Result::Success) {
                std::cerr << "Hold failed: " << mode_hold_result << '\n';
                return 1;
            }
        }
        else if (input7 == 1){
            std::cout << "Return to launch.\n";
            const Action::Result mode_return_to_launch_result = action.mode_return_to_launch();
            if (mode_return_to_launch_result != Action::Result::Success) {
                std::cerr << "Return to launch failed: " << mode_return_to_launch_result << '\n';
                return 1;
            }
        }
        else if (input8 == 1){
            std::cout << "Mission.\n";
            const Action::Result mode_mission_result = action.mode_mission();
            if (mode_mission_result != Action::Result::Success) {
                std::cerr << "Mission failed: " << mode_mission_result << '\n';
                return 1;
            }
        }
        else if (input9 == 1){
            std::cout << "Takeoff.\n";
            const Action::Result mode_takeoff_result = action.mode_takeoff();
            if (mode_takeoff_result != Action::Result::Success) {
                std::cerr << "Takeoff failed: " << mode_takeoff_result << '\n';
                return 1;
            }
        }
        else if (input10 == 1){
            std::cout << "Land.\n";
            const Action::Result mode_land_result = action.mode_land();
            if (mode_land_result != Action::Result::Success) {
                std::cerr << "Land failed: " << mode_land_result << '\n';
                return 1;
            }
        }
        else if (input11 == 1){
            std::cout << "Offboard.\n";
            const Action::Result mode_offboard_result = action.mode_offboard();
            if (mode_offboard_result != Action::Result::Success) {
                std::cerr << "Offboard failed: " << mode_offboard_result << '\n';
                return 1;
            }
        }
        else if (input12 == 1){
            std::cout << "Follow me.\n";
            const Action::Result mode_follow_me_result = action.mode_follow_me();
            if (mode_follow_me_result != Action::Result::Success) {
                std::cerr << "Follow me failed: " << mode_follow_me_result << '\n';
                return 1;
            }
        }
    }

    return 0;
}