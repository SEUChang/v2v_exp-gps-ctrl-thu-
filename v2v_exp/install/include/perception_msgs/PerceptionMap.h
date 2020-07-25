// Generated by gencpp from file perception_msgs/PerceptionMap.msg
// DO NOT EDIT!


#ifndef PERCEPTION_MSGS_MESSAGE_PERCEPTIONMAP_H
#define PERCEPTION_MSGS_MESSAGE_PERCEPTIONMAP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <perception_msgs/Object.h>
#include <geometry_msgs/PoseArray.h>

namespace perception_msgs
{
template <class ContainerAllocator>
struct PerceptionMap_
{
  typedef PerceptionMap_<ContainerAllocator> Type;

  PerceptionMap_()
    : objects()
    , obj()  {
    }
  PerceptionMap_(const ContainerAllocator& _alloc)
    : objects(_alloc)
    , obj(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::perception_msgs::Object_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::perception_msgs::Object_<ContainerAllocator> >::other >  _objects_type;
  _objects_type objects;

   typedef  ::geometry_msgs::PoseArray_<ContainerAllocator>  _obj_type;
  _obj_type obj;





  typedef boost::shared_ptr< ::perception_msgs::PerceptionMap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::perception_msgs::PerceptionMap_<ContainerAllocator> const> ConstPtr;

}; // struct PerceptionMap_

typedef ::perception_msgs::PerceptionMap_<std::allocator<void> > PerceptionMap;

typedef boost::shared_ptr< ::perception_msgs::PerceptionMap > PerceptionMapPtr;
typedef boost::shared_ptr< ::perception_msgs::PerceptionMap const> PerceptionMapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::perception_msgs::PerceptionMap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::perception_msgs::PerceptionMap_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace perception_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'perception_msgs': ['/home/sunhao/prog/wild/src/perception_msgs/msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::perception_msgs::PerceptionMap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::perception_msgs::PerceptionMap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::perception_msgs::PerceptionMap_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "366a6b524c2178f2275f791e91732ad8";
  }

  static const char* value(const ::perception_msgs::PerceptionMap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x366a6b524c2178f2ULL;
  static const uint64_t static_value2 = 0x275f791e91732ad8ULL;
};

template<class ContainerAllocator>
struct DataType< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "perception_msgs/PerceptionMap";
  }

  static const char* value(const ::perception_msgs::PerceptionMap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#\n\
#\n\
\n\
\n\
perception_msgs/Object[]  objects\n\
geometry_msgs/PoseArray obj\n\
\n\
#perception_msgs/Lane  left_line\n\
#perception_msgs/Lane  right_line\n\
#perception_msgs/Lane  left_boundary\n\
#perception_msgs/Lane  right_line\n\
================================================================================\n\
MSG: perception_msgs/Object\n\
#\n\
#\n\
\n\
\n\
perception_msgs/Pt[] Pts\n\
\n\
int8 id\n\
int8 type\n\
\n\
float64  relative_dir\n\
float64  relative_speed\n\
\n\
\n\
###  add gridcells info  ###\n\
\n\
\n\
\n\
================================================================================\n\
MSG: perception_msgs/Pt\n\
####\n\
###\n\
\n\
\n\
float32 x\n\
float32 y\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseArray\n\
# An array of poses with a header for global reference.\n\
\n\
Header header\n\
\n\
Pose[] poses\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::perception_msgs::PerceptionMap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.objects);
      stream.next(m.obj);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PerceptionMap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::perception_msgs::PerceptionMap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::perception_msgs::PerceptionMap_<ContainerAllocator>& v)
  {
    s << indent << "objects[]" << std::endl;
    for (size_t i = 0; i < v.objects.size(); ++i)
    {
      s << indent << "  objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::perception_msgs::Object_<ContainerAllocator> >::stream(s, indent + "    ", v.objects[i]);
    }
    s << indent << "obj: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseArray_<ContainerAllocator> >::stream(s, indent + "  ", v.obj);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PERCEPTION_MSGS_MESSAGE_PERCEPTIONMAP_H