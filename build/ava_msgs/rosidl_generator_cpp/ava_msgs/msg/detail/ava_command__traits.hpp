// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ava_msgs:msg/AvaCommand.idl
// generated code does not contain a copyright notice

#ifndef AVA_MSGS__MSG__DETAIL__AVA_COMMAND__TRAITS_HPP_
#define AVA_MSGS__MSG__DETAIL__AVA_COMMAND__TRAITS_HPP_

#include "ava_msgs/msg/detail/ava_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'velocity'
#include "ava_msgs/msg/detail/velocity__traits.hpp"
// Member 'pose'
#include "ava_msgs/msg/detail/ava_pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ava_msgs::msg::AvaCommand>()
{
  return "ava_msgs::msg::AvaCommand";
}

template<>
inline const char * name<ava_msgs::msg::AvaCommand>()
{
  return "ava_msgs/msg/AvaCommand";
}

template<>
struct has_fixed_size<ava_msgs::msg::AvaCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ava_msgs::msg::AvaCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ava_msgs::msg::AvaCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AVA_MSGS__MSG__DETAIL__AVA_COMMAND__TRAITS_HPP_
