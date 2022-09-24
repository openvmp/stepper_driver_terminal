/*
 * OpenVMP, 2022
 *
 * Author: Roman Kuzmenko
 * Created: 2022-09-24
 *
 * Licensed under Apache License, Version 2.0.
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
