// Generated by gencpp from file gnss_msgs/GTIMU.msg
// DO NOT EDIT!


#ifndef GNSS_MSGS_MESSAGE_GTIMU_H
#define GNSS_MSGS_MESSAGE_GTIMU_H


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
struct GTIMU_
{
  typedef GTIMU_<ContainerAllocator> Type;

  GTIMU_()
    : GPSWeek(0)
    , GPSTime(0.0)
    , pitch_rate(0.0)
    , roll_rate(0.0)
    , yaw_rate(0.0)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)
    , tpr(0.0)  {
    }
  GTIMU_(const ContainerAllocator& _alloc)
    : GPSWeek(0)
    , GPSTime(0.0)
    , pitch_rate(0.0)
    , roll_rate(0.0)
    , yaw_rate(0.0)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)
    , tpr(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _GPSWeek_type;
  _GPSWeek_type GPSWeek;

   typedef double _GPSTime_type;
  _GPSTime_type GPSTime;

   typedef double _pitch_rate_type;
  _pitch_rate_type pitch_rate;

   typedef double _roll_rate_type;
  _roll_rate_type roll_rate;

   typedef double _yaw_rate_type;
  _yaw_rate_type yaw_rate;

   typedef double _acc_x_type;
  _acc_x_type acc_x;

   typedef double _acc_y_type;
  _acc_y_type acc_y;

   typedef double _acc_z_type;
  _acc_z_type acc_z;

   typedef double _tpr_type;
  _tpr_type tpr;





  typedef boost::shared_ptr< ::gnss_msgs::GTIMU_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gnss_msgs::GTIMU_<ContainerAllocator> const> ConstPtr;

}; // struct GTIMU_

typedef ::gnss_msgs::GTIMU_<std::allocator<void> > GTIMU;

typedef boost::shared_ptr< ::gnss_msgs::GTIMU > GTIMUPtr;
typedef boost::shared_ptr< ::gnss_msgs::GTIMU const> GTIMUConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gnss_msgs::GTIMU_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gnss_msgs::GTIMU_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::gnss_msgs::GTIMU_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gnss_msgs::GTIMU_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gnss_msgs::GTIMU_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gnss_msgs::GTIMU_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gnss_msgs::GTIMU_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gnss_msgs::GTIMU_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gnss_msgs::GTIMU_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d78377954954abd5e348c740ac6f7798";
  }

  static const char* value(const ::gnss_msgs::GTIMU_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd78377954954abd5ULL;
  static const uint64_t static_value2 = 0xe348c740ac6f7798ULL;
};

template<class ContainerAllocator>
struct DataType< ::gnss_msgs::GTIMU_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gnss_msgs/GTIMU";
  }

  static const char* value(const ::gnss_msgs::GTIMU_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gnss_msgs::GTIMU_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 GPSWeek\n\
float64 GPSTime\n\
float64 pitch_rate\n\
float64 roll_rate\n\
float64 yaw_rate\n\
\n\
float64 acc_x\n\
float64 acc_y\n\
float64 acc_z\n\
\n\
float64 tpr\n\
";
  }

  static const char* value(const ::gnss_msgs::GTIMU_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gnss_msgs::GTIMU_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.GPSWeek);
      stream.next(m.GPSTime);
      stream.next(m.pitch_rate);
      stream.next(m.roll_rate);
      stream.next(m.yaw_rate);
      stream.next(m.acc_x);
      stream.next(m.acc_y);
      stream.next(m.acc_z);
      stream.next(m.tpr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GTIMU_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gnss_msgs::GTIMU_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gnss_msgs::GTIMU_<ContainerAllocator>& v)
  {
    s << indent << "GPSWeek: ";
    Printer<int32_t>::stream(s, indent + "  ", v.GPSWeek);
    s << indent << "GPSTime: ";
    Printer<double>::stream(s, indent + "  ", v.GPSTime);
    s << indent << "pitch_rate: ";
    Printer<double>::stream(s, indent + "  ", v.pitch_rate);
    s << indent << "roll_rate: ";
    Printer<double>::stream(s, indent + "  ", v.roll_rate);
    s << indent << "yaw_rate: ";
    Printer<double>::stream(s, indent + "  ", v.yaw_rate);
    s << indent << "acc_x: ";
    Printer<double>::stream(s, indent + "  ", v.acc_x);
    s << indent << "acc_y: ";
    Printer<double>::stream(s, indent + "  ", v.acc_y);
    s << indent << "acc_z: ";
    Printer<double>::stream(s, indent + "  ", v.acc_z);
    s << indent << "tpr: ";
    Printer<double>::stream(s, indent + "  ", v.tpr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GNSS_MSGS_MESSAGE_GTIMU_H
