/*
 * Copyright 2022 OpenVMP Authors
 *
 * Licensed under HIPPOCRATIC LICENSE Version 3.0.
 * Generated using
 * https://firstdonoharm.dev/version/3/0/bds-bod-cl-eco-ffd-media-mil-soc-sup-sv.md
 * See https://github.com/openvmp/openvmp/blob/main/docs/License.md for more
 * details.
 *
 */

#include "stepper_driver_terminal/node.hpp"

namespace stepper_driver_terminal {

Node::Node() : rclcpp::Node::Node("stepper_driver_terminal") {
  this->declare_parameter("prefix", "/stepper_driver/");
  this->get_parameter("prefix", prefix_);

  // TODO(clairbee): enumerate services here and print an error
  //                  or instantiate the UI
}

}  // namespace stepper_driver_terminal
