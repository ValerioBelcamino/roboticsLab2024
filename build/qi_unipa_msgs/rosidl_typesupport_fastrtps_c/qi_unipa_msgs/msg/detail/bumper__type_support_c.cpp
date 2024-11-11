// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from qi_unipa_msgs:msg/Bumper.idl
// generated code does not contain a copyright notice
#include "qi_unipa_msgs/msg/detail/bumper__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "qi_unipa_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "qi_unipa_msgs/msg/detail/bumper__struct.h"
#include "qi_unipa_msgs/msg/detail/bumper__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Bumper__ros_msg_type = qi_unipa_msgs__msg__Bumper;

static bool _Bumper__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Bumper__ros_msg_type * ros_message = static_cast<const _Bumper__ros_msg_type *>(untyped_ros_message);
  // Field name: left
  {
    cdr << ros_message->left;
  }

  // Field name: right
  {
    cdr << ros_message->right;
  }

  // Field name: back
  {
    cdr << ros_message->back;
  }

  return true;
}

static bool _Bumper__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Bumper__ros_msg_type * ros_message = static_cast<_Bumper__ros_msg_type *>(untyped_ros_message);
  // Field name: left
  {
    cdr >> ros_message->left;
  }

  // Field name: right
  {
    cdr >> ros_message->right;
  }

  // Field name: back
  {
    cdr >> ros_message->back;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qi_unipa_msgs
size_t get_serialized_size_qi_unipa_msgs__msg__Bumper(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Bumper__ros_msg_type * ros_message = static_cast<const _Bumper__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name left
  {
    size_t item_size = sizeof(ros_message->left);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name right
  {
    size_t item_size = sizeof(ros_message->right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back
  {
    size_t item_size = sizeof(ros_message->back);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Bumper__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_qi_unipa_msgs__msg__Bumper(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_qi_unipa_msgs
size_t max_serialized_size_qi_unipa_msgs__msg__Bumper(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: left
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: right
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: back
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = qi_unipa_msgs__msg__Bumper;
    is_plain =
      (
      offsetof(DataType, back) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Bumper__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_qi_unipa_msgs__msg__Bumper(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Bumper = {
  "qi_unipa_msgs::msg",
  "Bumper",
  _Bumper__cdr_serialize,
  _Bumper__cdr_deserialize,
  _Bumper__get_serialized_size,
  _Bumper__max_serialized_size
};

static rosidl_message_type_support_t _Bumper__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Bumper,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, qi_unipa_msgs, msg, Bumper)() {
  return &_Bumper__type_support;
}

#if defined(__cplusplus)
}
#endif
