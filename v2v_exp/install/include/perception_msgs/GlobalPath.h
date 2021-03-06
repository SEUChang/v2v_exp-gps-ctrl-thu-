// Generated by gencpp from file perception_msgs/GlobalPath.msg
// DO NOT EDIT!


#ifndef PERCEPTION_MSGS_MESSAGE_GLOBALPATH_H
#define PERCEPTION_MSGS_MESSAGE_GLOBALPATH_H

#include <ros/service_traits.h>


#include <perception_msgs/GlobalPathRequest.h>
#include <perception_msgs/GlobalPathResponse.h>


namespace perception_msgs
{

struct GlobalPath
{

typedef GlobalPathRequest Request;
typedef GlobalPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GlobalPath
} // namespace perception_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::perception_msgs::GlobalPath > {
  static const char* value()
  {
    return "7837730f008be57270344a16d5aaa53d";
  }

  static const char* value(const ::perception_msgs::GlobalPath&) { return value(); }
};

template<>
struct DataType< ::perception_msgs::GlobalPath > {
  static const char* value()
  {
    return "perception_msgs/GlobalPath";
  }

  static const char* value(const ::perception_msgs::GlobalPath&) { return value(); }
};


// service_traits::MD5Sum< ::perception_msgs::GlobalPathRequest> should match 
// service_traits::MD5Sum< ::perception_msgs::GlobalPath > 
template<>
struct MD5Sum< ::perception_msgs::GlobalPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::perception_msgs::GlobalPath >::value();
  }
  static const char* value(const ::perception_msgs::GlobalPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::perception_msgs::GlobalPathRequest> should match 
// service_traits::DataType< ::perception_msgs::GlobalPath > 
template<>
struct DataType< ::perception_msgs::GlobalPathRequest>
{
  static const char* value()
  {
    return DataType< ::perception_msgs::GlobalPath >::value();
  }
  static const char* value(const ::perception_msgs::GlobalPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::perception_msgs::GlobalPathResponse> should match 
// service_traits::MD5Sum< ::perception_msgs::GlobalPath > 
template<>
struct MD5Sum< ::perception_msgs::GlobalPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::perception_msgs::GlobalPath >::value();
  }
  static const char* value(const ::perception_msgs::GlobalPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::perception_msgs::GlobalPathResponse> should match 
// service_traits::DataType< ::perception_msgs::GlobalPath > 
template<>
struct DataType< ::perception_msgs::GlobalPathResponse>
{
  static const char* value()
  {
    return DataType< ::perception_msgs::GlobalPath >::value();
  }
  static const char* value(const ::perception_msgs::GlobalPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // PERCEPTION_MSGS_MESSAGE_GLOBALPATH_H
