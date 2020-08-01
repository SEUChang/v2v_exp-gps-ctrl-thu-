// Generated by gencpp from file little_ant_msgs/State4.msg
// DO NOT EDIT!


#ifndef LITTLE_ANT_MSGS_MESSAGE_STATE4_H
#define LITTLE_ANT_MSGS_MESSAGE_STATE4_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace little_ant_msgs
{
template <class ContainerAllocator>
struct State4_
{
  typedef State4_<ContainerAllocator> Type;

  State4_()
    : header()
    , driverless_mode(false)
    , steeringAngle(0.0)
    , roadwheelAngle(0.0)
    , steeringAngle_valid(false)
    , steeringAngle_speed(0.0)  {
    }
  State4_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , driverless_mode(false)
    , steeringAngle(0.0)
    , roadwheelAngle(0.0)
    , steeringAngle_valid(false)
    , steeringAngle_speed(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _driverless_mode_type;
  _driverless_mode_type driverless_mode;

   typedef float _steeringAngle_type;
  _steeringAngle_type steeringAngle;

   typedef float _roadwheelAngle_type;
  _roadwheelAngle_type roadwheelAngle;

   typedef uint8_t _steeringAngle_valid_type;
  _steeringAngle_valid_type steeringAngle_valid;

   typedef float _steeringAngle_speed_type;
  _steeringAngle_speed_type steeringAngle_speed;





  typedef boost::shared_ptr< ::little_ant_msgs::State4_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::little_ant_msgs::State4_<ContainerAllocator> const> ConstPtr;

}; // struct State4_

typedef ::little_ant_msgs::State4_<std::allocator<void> > State4;

typedef boost::shared_ptr< ::little_ant_msgs::State4 > State4Ptr;
typedef boost::shared_ptr< ::little_ant_msgs::State4 const> State4ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::little_ant_msgs::State4_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::little_ant_msgs::State4_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace little_ant_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'little_ant_msgs': ['/home/seu-lc/v2v_exp-gps-ctrl-thu-/Ant_ws/src/little_ant_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::little_ant_msgs::State4_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::little_ant_msgs::State4_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::little_ant_msgs::State4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::little_ant_msgs::State4_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::little_ant_msgs::State4_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::little_ant_msgs::State4_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::little_ant_msgs::State4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ac90c5adc2e5026c3ff29c1d42c1bb25";
  }

  static const char* value(const ::little_ant_msgs::State4_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xac90c5adc2e5026cULL;
  static const uint64_t static_value2 = 0x3ff29c1d42c1bb25ULL;
};

template<class ContainerAllocator>
struct DataType< ::little_ant_msgs::State4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "little_ant_msgs/State4";
  }

  static const char* value(const ::little_ant_msgs::State4_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::little_ant_msgs::State4_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#EPS_1  0x1D5\n\
\n\
std_msgs/Header header\n\
\n\
bool driverless_mode\n\
float32 steeringAngle        #CCW(-), CW(+)\n\
float32 roadwheelAngle\n\
bool steeringAngle_valid\n\
float32 steeringAngle_speed\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::little_ant_msgs::State4_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::little_ant_msgs::State4_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.driverless_mode);
      stream.next(m.steeringAngle);
      stream.next(m.roadwheelAngle);
      stream.next(m.steeringAngle_valid);
      stream.next(m.steeringAngle_speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct State4_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::little_ant_msgs::State4_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::little_ant_msgs::State4_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "driverless_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.driverless_mode);
    s << indent << "steeringAngle: ";
    Printer<float>::stream(s, indent + "  ", v.steeringAngle);
    s << indent << "roadwheelAngle: ";
    Printer<float>::stream(s, indent + "  ", v.roadwheelAngle);
    s << indent << "steeringAngle_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.steeringAngle_valid);
    s << indent << "steeringAngle_speed: ";
    Printer<float>::stream(s, indent + "  ", v.steeringAngle_speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LITTLE_ANT_MSGS_MESSAGE_STATE4_H
