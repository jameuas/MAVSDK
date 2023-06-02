cmake_minimum_required(VERSION 3.10.2)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(gcs_cmd_flight_mode)

add_executable(gcs_cmd_flight_mode
    gcs_cmd_flight_mode.cpp
)

find_package(MAVSDK REQUIRED)

target_link_libraries(gcs_cmd_flight_mode
    MAVSDK::mavsdk
)

if(NOT MSVC)
    add_compile_options(gcs_cmd_flight_mode PRIVATE -Wall -Wextra)
else()
    add_compile_options(gcs_cmd_flight_mode PRIVATE -WX -W2)
endif()