//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                    SensorFuseOS Navigation System                                //
//////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                  // 
// Author:      Parker Barrett                                                                      //
//              The SensorFuseOS executable main entry point which sets up the ROS2 publishers      //
//              and subscrbers and kicks off the state machine.                                     //
//                                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////////////////////

// Standard Includes
#include <iostream>
#include <fstream>
#include <thread>
#include <queue>

// SensorFuseOS Include Headers


// ROS2 Include Headers
#include "rclcpp/rclcpp.hpp"

// Main Run Loop
int main(int argc, char **argv) {

    // Initialize ROS2 Node
    rclcpp::init(argc, argv);

    // Unpack Inputs Arguments
    if (argc != 2) {
        std::cout << "[main] Invalid arguments - expected ./SensorFuseOS <master config>" << std::endl;
        return 1;
    } else {
        std::cout << "[main] Master Configuration File: " << argv[1] << std::endl;
    }
    const std::string masterConfig = argv[1];

    // Verify Master Configuration File Exists
    std::ifstream mc;
    mc.open(masterConfig);
    if (!mc) {
        std::cout << "[main] Master Configuration File Specified does not exist" << std::endl;
        return 1;
    } 

    // Parse Master Configuration File
    //jsonUtilities ju;
    //masterConfig_t config;
    //ju.parseMasterConfig(masterConfig, config);

    // Create State Machine
    
    // Run State Machine

    // Shutdown ROS2 Node
    rclcpp::shutdown();
    
    // Successful Return
    return 0;

}
