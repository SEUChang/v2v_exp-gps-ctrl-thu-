// Generated by gencpp from file gps_msgs/Satellite.msg
// DO NOT EDIT!


#ifndef GPS_MSGS_MESSAGE_SATELLITE_H
#define GPS_MSGS_MESSAGE_SATELLITE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gps_msgs
{
template <class ContainerAllocator>
struct Satellite_
{
  typedef Satellite_<ContainerAllocator> Type;

  Satellite_()
    : num(0)
    , system(0)
    , flags1(0)
    , flags2(0)
    , elevation(0)
    , azimuth(0)
    , frequency()  {
      frequency.assign(0);
  }
  Satellite_(const ContainerAllocator& _alloc)
    : num(0)
    , system(0)
    , flags1(0)
    , flags2(0)
    , elevation(0)
    , azimuth(0)
    , frequency()  {
  (void)_alloc;
      frequency.assign(0);
  }



   typedef uint8_t _num_type;
  _num_type num;

   typedef uint8_t _system_type;
  _system_type system;

   typedef uint8_t _flags1_type;
  _flags1_type flags1;

   typedef uint8_t _flags2_type;
  _flags2_type flags2;

   typedef uint8_t _elevation_type;
  _elevation_type elevation;

   typedef uint16_t _azimuth_type;
  _azimuth_type azimuth;

   typedef boost::array<uint8_t, 3>  _frequency_type;
  _frequency_type frequency;





  typedef boost::shared_ptr< ::gps_msgs::Satellite_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gps_msgs::Satellite_<ContainerAllocator> const> ConstPtr;

}; // struct Satellite_

typedef ::gps_msgs::Satellite_<std::allocator<void> > Satellite;

typedef boost::shared_ptr< ::gps_msgs::Satellite > SatellitePtr;
typedef boost::shared_ptr< ::gps_msgs::Satellite const> SatelliteConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gps_msgs::Satellite_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gps_msgs::Satellite_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gps_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'gps_msgs': ['/home/seu-lc/v2v_exp-gps-ctrl-thu-/Ant_ws/src/gps_drive/gps_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gps_msgs::Satellite_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gps_msgs::Satellite_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gps_msgs::Satellite_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gps_msgs::Satellite_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_msgs::Satellite_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gps_msgs::Satellite_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gps_msgs::Satellite_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e43ed4aebf909b95af15ba72c23c4a2a";
  }

  static const char* value(const ::gps_msgs::Satellite_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe43ed4aebf909b95ULL;
  static const uint64_t static_value2 = 0xaf15ba72c23c4a2aULL;
};

template<class ContainerAllocator>
struct DataType< ::gps_msgs::Satellite_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gps_msgs/Satellite";
  }

  static const char* value(const ::gps_msgs::Satellite_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gps_msgs::Satellite_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
uint8 num\n\
uint8 system\n\
uint8 flags1\n\
uint8 flags2\n\
uint8 elevation\n\
uint16 azimuth\n\
uint8[3] frequency\n\
";
  }

  static const char* value(const ::gps_msgs::Satellite_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gps_msgs::Satellite_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.num);
      stream.next(m.system);
      stream.next(m.flags1);
      stream.next(m.flags2);
      stream.next(m.elevation);
      stream.next(m.azimuth);
      stream.next(m.frequency);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Satellite_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gps_msgs::Satellite_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gps_msgs::Satellite_<ContainerAllocator>& v)
  {
    s << indent << "num: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.num);
    s << indent << "system: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system);
    s << indent << "flags1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags1);
    s << indent << "flags2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags2);
    s << indent << "elevation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.elevation);
    s << indent << "azimuth: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.azimuth);
    s << indent << "frequency[]" << std::endl;
    for (size_t i = 0; i < v.frequency.size(); ++i)
    {
      s << indent << "  frequency[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.frequency[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GPS_MSGS_MESSAGE_SATELLITE_H
