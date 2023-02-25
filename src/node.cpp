/*
 * OpenVMP, 2022
 *
 * Author: Roman Kuzmenko
 * Created: 2022-09-24
 *
 * Licensed under Apache License, Version 2.0.
 */

#include "stepper_driver_terminal/node.hpp"

namespace stepper_driver_terminal {

Node::Node() : rclcpp::Node::Node("stepper_driver_terminal") {
  this->declare_parameter("prefix", "/stepper/");
  this->get_parameter("prefix", prefix_);

  // TODO(clairbee): enumerate services here and print an error
  //                  or instantiate the UI
  // TODO(clairbee): clone this into a modbus terminal, use get_metadata for
  //                 configured registers
}

}  // namespace stepper_driver_terminal
