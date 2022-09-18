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

#ifndef OPENVMP_SDT_NODE_H
#define OPENVMP_SDT_NODE_H

#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"

namespace stepper_driver_terminal {

class Node : public rclcpp::Node {
 public:
  Node();

 private:
  // node parameters
  rclcpp::Parameter prefix_;
};

}  // namespace stepper_driver_terminal

#endif  // OPENVMP_SDT_NODE_H
