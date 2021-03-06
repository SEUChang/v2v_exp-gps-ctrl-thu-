// Generated by gencpp from file gnss_msgs/GPFPD.msg
// DO NOT EDIT!


#ifndef GNSS_MSGS_MESSAGE_GPFPD_H
#define GNSS_MSGS_MESSAGE_GPFPD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gnss_msgs
{
template <class ContainerAllocator>
struct GPFPD_
{
  typedef GPFPD_<ContainerAllocator> Type;

  GPFPD_()
    : GPS_week(0)
    , GPS_time(0.0)
    , heading(0.0)
    , pitch(0.0)
    , roll(0.0)
    , lat(0.0)
    , lon(0.0)
    , alt(0.0)
    , v_east(0.0)
    , v_north(0.0)
    , v_sky(0.0)
    , baseline_len(0.0)
    , num_sat1(0)
    , num_sat2(0)
    , gnss_status(0)
    , gnss_mode(0)  {
    }
  GPFPD_(const ContainerAllocator& _alloc)
    : GPS_week(0)
    , GPS_time(0.0)
    , heading(0.0)
    , pitch(0.0)
    , roll(0.0)
    , lat(0.0)
    , lon(0.0)
    , alt(0.0)
    , v_east(0.0)
    , v_north(0.0)
    , v_sky(0.0)
    , baseline_len(0.0)
    , num_sat1(0)
    , num_sat2(0)
    , gnss_status(0)
    , gnss_mode(0)  {
  (void)_alloc;
    }



   typedef int32_t _GPS_week_type;
  _GPS_week_type GPS_week;

   typedef double _GPS_time_type;
  _GPS_time_type GPS_time;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _pitch_type;
  _pitch_type pitch;

   typedef double _roll_type;
  _roll_type roll;

   typedef double _lat_type;
  _lat_type lat;

   typedef double _lon_type;
  _lon_type lon;

   typedef double _alt_type;
  _alt_type alt;

   typedef double _v_east_type;
  _v_east_type v_east;

   typedef double _v_north_type;
  _v_north_type v_north;

   typedef double _v_sky_type;
  _v_sky_type v_sky;

   typedef double _baseline_len_type;
  _baseline_len_type baseline_len;

   typedef int32_t _num_sat1_type;
  _num_sat1_type num_sat1;

   typedef int32_t _num_sat2_type;
  _num_sat2_type num_sat2;

   typedef int32_t _gnss_status_type;
  _gnss_status_type gnss_status;

   typedef int32_t _gnss_mode_type;
  _gnss_mode_type gnss_mode;





  typedef boost::shared_ptr< ::gnss_msgs::GPFPD_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gnss_msgs::GPFPD_<ContainerAllocator> const> ConstPtr;

}; // struct GPFPD_

typedef ::gnss_msgs::GPFPD_<std::allocator<void> > GPFPD;

typedef boost::shared_ptr< ::gnss_msgs::GPFPD > GPFPDPtr;
typedef boost::shared_ptr< ::gnss_msgs::GPFPD const> GPFPDConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gnss_msgs::GPFPD_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gnss_msgs::GPFPD_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gnss_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'gnss_msgs': ['/home/sunhao/prog/wild/src/gnss_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gnss_msgs::GPFPD_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gnss_msgs::GPFPD_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gnss_msgs::GPFPD_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gnss_msgs::GPFPD_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gnss_msgs::GPFPD_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gnss_msgs::GPFPD_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gnss_msgs::GPFPD_<ContainerAllocator> >
{
  static const char* value()
  {
    return "595a3f473d05acf864715755cd142584";
  }

  static const char* value(const ::gnss_msgs::GPFPD_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x595a3f473d05acf8ULL;
  static const uint64_t static_value2 = 0x64715755cd142584ULL;
};

template<class ContainerAllocator>
struct DataType< ::gnss_msgs::GPFPD_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gnss_msgs/GPFPD";
  }

  static const char* value(const ::gnss_msgs::GPFPD_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gnss_msgs::GPFPD_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
#\n\
#\n\
\n\
int32 GPS_week\n\
float64 GPS_time\n\
\n\
float64 heading\n\
float64 pitch\n\
float64 roll\n\
\n\
float64 lat\n\
float64 lon\n\
float64 alt\n\
\n\
float64 v_east\n\
float64 v_north\n\
float64 v_sky\n\
\n\
float64 baseline_len\n\
\n\
\n\
int32 num_sat1\n\
int32 num_sat2\n\
\n\
int32 gnss_status\n\
int32 gnss_mode\n\
";
  }

  static const char* value(const ::gnss_msgs::GPFPD_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gnss_msgs::GPFPD_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.GPS_week);
      stream.next(m.GPS_time);
      stream.next(m.heading);
      stream.next(m.pitch);
      stream.next(m.roll);
      stream.next(m.lat);
      stream.next(m.lon);
      stream.next(m.alt);
      stream.next(m.v_east);
      stream.next(m.v_north);
      stream.next(m.v_sky);
      stream.next(m.baseline_len);
      stream.next(m.num_sat1);
      stream.next(m.num_sat2);
      stream.next(m.gnss_status);
      stream.next(m.gnss_mode);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GPFPD_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gnss_msgs::GPFPD_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gnss_msgs::GPFPD_<ContainerAllocator>& v)
  {
    s << indent << "GPS_week: ";
    Printer<int32_t>::stream(s, indent + "  ", v.GPS_week);
    s << indent << "GPS_time: ";
    Printer<double>::stream(s, indent + "  ", v.GPS_time);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "pitch: ";
    Printer<double>::stream(s, indent + "  ", v.pitch);
    s << indent << "roll: ";
    Printer<double>::stream(s, indent + "  ", v.roll);
    s << indent << "lat: ";
    Printer<double>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<double>::stream(s, indent + "  ", v.lon);
    s << indent << "alt: ";
    Printer<double>::stream(s, indent + "  ", v.alt);
    s << indent << "v_east: ";
    Printer<double>::stream(s, indent + "  ", v.v_east);
    s << indent << "v_north: ";
    Printer<double>::stream(s, indent + "  ", v.v_north);
    s << indent << "v_sky: ";
    Printer<double>::stream(s, indent + "  ", v.v_sky);
    s << indent << "baseline_len: ";
    Printer<double>::stream(s, indent + "  ", v.baseline_len);
    s << indent << "num_sat1: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_sat1);
    s << indent << "num_sat2: ";
    Printer<int32_t>::stream(s, indent + "  ", v.num_sat2);
    s << indent << "gnss_status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gnss_status);
    s << indent << "gnss_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gnss_mode);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GNSS_MSGS_MESSAGE_GPFPD_H
