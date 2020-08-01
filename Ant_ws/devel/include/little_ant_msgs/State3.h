// Generated by gencpp from file little_ant_msgs/State3.msg
// DO NOT EDIT!


#ifndef LITTLE_ANT_MSGS_MESSAGE_STATE3_H
#define LITTLE_ANT_MSGS_MESSAGE_STATE3_H


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
struct State3_
{
  typedef State3_<ContainerAllocator> Type;

  State3_()
    : header()
    , driverless_mode(false)
    , turn_light_R(false)
    , turn_light_L(false)
    , parkTail_light(false)
    , high_beam(false)
    , low_beam(false)
    , brake_light(false)
    , horn(false)  {
    }
  State3_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , driverless_mode(false)
    , turn_light_R(false)
    , turn_light_L(false)
    , parkTail_light(false)
    , high_beam(false)
    , low_beam(false)
    , brake_light(false)
    , horn(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _driverless_mode_type;
  _driverless_mode_type driverless_mode;

   typedef uint8_t _turn_light_R_type;
  _turn_light_R_type turn_light_R;

   typedef uint8_t _turn_light_L_type;
  _turn_light_L_type turn_light_L;

   typedef uint8_t _parkTail_light_type;
  _parkTail_light_type parkTail_light;

   typedef uint8_t _high_beam_type;
  _high_beam_type high_beam;

   typedef uint8_t _low_beam_type;
  _low_beam_type low_beam;

   typedef uint8_t _brake_light_type;
  _brake_light_type brake_light;

   typedef uint8_t _horn_type;
  _horn_type horn;





  typedef boost::shared_ptr< ::little_ant_msgs::State3_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::little_ant_msgs::State3_<ContainerAllocator> const> ConstPtr;

}; // struct State3_

typedef ::little_ant_msgs::State3_<std::allocator<void> > State3;

typedef boost::shared_ptr< ::little_ant_msgs::State3 > State3Ptr;
typedef boost::shared_ptr< ::little_ant_msgs::State3 const> State3ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::little_ant_msgs::State3_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::little_ant_msgs::State3_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::little_ant_msgs::State3_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::little_ant_msgs::State3_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::little_ant_msgs::State3_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::little_ant_msgs::State3_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::little_ant_msgs::State3_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::little_ant_msgs::State3_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::little_ant_msgs::State3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2adb4f3bd0140b3e748f6391b224e7e9";
  }

  static const char* value(const ::little_ant_msgs::State3_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2adb4f3bd0140b3eULL;
  static const uint64_t static_value2 = 0x748f6391b224e7e9ULL;
};

template<class ContainerAllocator>
struct DataType< ::little_ant_msgs::State3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "little_ant_msgs/State3";
  }

  static const char* value(const ::little_ant_msgs::State3_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::little_ant_msgs::State3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#ACM_1  0x4D1\n\
\n\
std_msgs/Header header\n\
\n\
bool driverless_mode\n\
\n\
bool turn_light_R\n\
\n\
bool turn_light_L\n\
\n\
bool parkTail_light\n\
\n\
bool high_beam\n\
bool low_beam\n\
\n\
bool brake_light\n\
bool horn\n\
\n\
\n\
\n\
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

  static const char* value(const ::little_ant_msgs::State3_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::little_ant_msgs::State3_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.driverless_mode);
      stream.next(m.turn_light_R);
      stream.next(m.turn_light_L);
      stream.next(m.parkTail_light);
      stream.next(m.high_beam);
      stream.next(m.low_beam);
      stream.next(m.brake_light);
      stream.next(m.horn);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct State3_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::little_ant_msgs::State3_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::little_ant_msgs::State3_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "driverless_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.driverless_mode);
    s << indent << "turn_light_R: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.turn_light_R);
    s << indent << "turn_light_L: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.turn_light_L);
    s << indent << "parkTail_light: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.parkTail_light);
    s << indent << "high_beam: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.high_beam);
    s << indent << "low_beam: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.low_beam);
    s << indent << "brake_light: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.brake_light);
    s << indent << "horn: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.horn);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LITTLE_ANT_MSGS_MESSAGE_STATE3_H
