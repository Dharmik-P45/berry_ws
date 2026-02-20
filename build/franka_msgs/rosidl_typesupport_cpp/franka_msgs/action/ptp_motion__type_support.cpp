// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from franka_msgs:action/PTPMotion.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "franka_msgs/action/detail/ptp_motion__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_Goal_type_support_ids_t;

static const _PTPMotion_Goal_type_support_ids_t _PTPMotion_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_Goal_type_support_symbol_names_t _PTPMotion_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_Goal)),
  }
};

typedef struct _PTPMotion_Goal_type_support_data_t
{
  void * data[2];
} _PTPMotion_Goal_type_support_data_t;

static _PTPMotion_Goal_type_support_data_t _PTPMotion_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_Goal_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_Goal>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_Goal)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_Result_type_support_ids_t;

static const _PTPMotion_Result_type_support_ids_t _PTPMotion_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_Result_type_support_symbol_names_t _PTPMotion_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_Result)),
  }
};

typedef struct _PTPMotion_Result_type_support_data_t
{
  void * data[2];
} _PTPMotion_Result_type_support_data_t;

static _PTPMotion_Result_type_support_data_t _PTPMotion_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_Result_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_Result_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_Result_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_Result>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_Result)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_Feedback_type_support_ids_t;

static const _PTPMotion_Feedback_type_support_ids_t _PTPMotion_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_Feedback_type_support_symbol_names_t _PTPMotion_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_Feedback)),
  }
};

typedef struct _PTPMotion_Feedback_type_support_data_t
{
  void * data[2];
} _PTPMotion_Feedback_type_support_data_t;

static _PTPMotion_Feedback_type_support_data_t _PTPMotion_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_Feedback_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_Feedback>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_Feedback)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_SendGoal_Request_type_support_ids_t;

static const _PTPMotion_SendGoal_Request_type_support_ids_t _PTPMotion_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_SendGoal_Request_type_support_symbol_names_t _PTPMotion_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_SendGoal_Request)),
  }
};

typedef struct _PTPMotion_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _PTPMotion_SendGoal_Request_type_support_data_t;

static _PTPMotion_SendGoal_Request_type_support_data_t _PTPMotion_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_SendGoal_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_SendGoal_Request>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_SendGoal_Request)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_SendGoal_Response_type_support_ids_t;

static const _PTPMotion_SendGoal_Response_type_support_ids_t _PTPMotion_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_SendGoal_Response_type_support_symbol_names_t _PTPMotion_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_SendGoal_Response)),
  }
};

typedef struct _PTPMotion_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _PTPMotion_SendGoal_Response_type_support_data_t;

static _PTPMotion_SendGoal_Response_type_support_data_t _PTPMotion_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_SendGoal_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_SendGoal_Response>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_SendGoal_Response)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_SendGoal_type_support_ids_t;

static const _PTPMotion_SendGoal_type_support_ids_t _PTPMotion_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_SendGoal_type_support_symbol_names_t _PTPMotion_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_SendGoal)),
  }
};

typedef struct _PTPMotion_SendGoal_type_support_data_t
{
  void * data[2];
} _PTPMotion_SendGoal_type_support_data_t;

static _PTPMotion_SendGoal_type_support_data_t _PTPMotion_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_SendGoal_service_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PTPMotion_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::action::PTPMotion_SendGoal>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<franka_msgs::action::PTPMotion_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_GetResult_Request_type_support_ids_t;

static const _PTPMotion_GetResult_Request_type_support_ids_t _PTPMotion_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_GetResult_Request_type_support_symbol_names_t _PTPMotion_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_GetResult_Request)),
  }
};

typedef struct _PTPMotion_GetResult_Request_type_support_data_t
{
  void * data[2];
} _PTPMotion_GetResult_Request_type_support_data_t;

static _PTPMotion_GetResult_Request_type_support_data_t _PTPMotion_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_GetResult_Request_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_GetResult_Request>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_GetResult_Request)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_GetResult_Response_type_support_ids_t;

static const _PTPMotion_GetResult_Response_type_support_ids_t _PTPMotion_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_GetResult_Response_type_support_symbol_names_t _PTPMotion_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_GetResult_Response)),
  }
};

typedef struct _PTPMotion_GetResult_Response_type_support_data_t
{
  void * data[2];
} _PTPMotion_GetResult_Response_type_support_data_t;

static _PTPMotion_GetResult_Response_type_support_data_t _PTPMotion_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_GetResult_Response_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_GetResult_Response>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_GetResult_Response)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_GetResult_type_support_ids_t;

static const _PTPMotion_GetResult_type_support_ids_t _PTPMotion_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_GetResult_type_support_symbol_names_t _PTPMotion_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_GetResult)),
  }
};

typedef struct _PTPMotion_GetResult_type_support_data_t
{
  void * data[2];
} _PTPMotion_GetResult_type_support_data_t;

static _PTPMotion_GetResult_type_support_data_t _PTPMotion_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_GetResult_service_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t PTPMotion_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<franka_msgs::action::PTPMotion_GetResult>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<franka_msgs::action::PTPMotion_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _PTPMotion_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PTPMotion_FeedbackMessage_type_support_ids_t;

static const _PTPMotion_FeedbackMessage_type_support_ids_t _PTPMotion_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PTPMotion_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PTPMotion_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PTPMotion_FeedbackMessage_type_support_symbol_names_t _PTPMotion_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, franka_msgs, action, PTPMotion_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, franka_msgs, action, PTPMotion_FeedbackMessage)),
  }
};

typedef struct _PTPMotion_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _PTPMotion_FeedbackMessage_type_support_data_t;

static _PTPMotion_FeedbackMessage_type_support_data_t _PTPMotion_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PTPMotion_FeedbackMessage_message_typesupport_map = {
  2,
  "franka_msgs",
  &_PTPMotion_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_PTPMotion_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_PTPMotion_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PTPMotion_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PTPMotion_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<franka_msgs::action::PTPMotion_FeedbackMessage>()
{
  return &::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion_FeedbackMessage)() {
  return get_message_type_support_handle<franka_msgs::action::PTPMotion_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "franka_msgs/action/detail/ptp_motion__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace franka_msgs
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t PTPMotion_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace franka_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<franka_msgs::action::PTPMotion>()
{
  using ::franka_msgs::action::rosidl_typesupport_cpp::PTPMotion_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  PTPMotion_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::franka_msgs::action::PTPMotion::Impl::SendGoalService>();
  PTPMotion_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::franka_msgs::action::PTPMotion::Impl::GetResultService>();
  PTPMotion_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::franka_msgs::action::PTPMotion::Impl::CancelGoalService>();
  PTPMotion_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::franka_msgs::action::PTPMotion::Impl::FeedbackMessage>();
  PTPMotion_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::franka_msgs::action::PTPMotion::Impl::GoalStatusMessage>();
  return &PTPMotion_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, franka_msgs, action, PTPMotion)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<franka_msgs::action::PTPMotion>();
}

#ifdef __cplusplus
}
#endif
