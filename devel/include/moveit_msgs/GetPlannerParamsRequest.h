// Generated by gencpp from file moveit_msgs/GetPlannerParamsRequest.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GETPLANNERPARAMSREQUEST_H
#define MOVEIT_MSGS_MESSAGE_GETPLANNERPARAMSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace moveit_msgs
{
template <class ContainerAllocator>
struct GetPlannerParamsRequest_
{
  typedef GetPlannerParamsRequest_<ContainerAllocator> Type;

  GetPlannerParamsRequest_()
    : planner_config()
    , group()  {
    }
  GetPlannerParamsRequest_(const ContainerAllocator& _alloc)
    : planner_config(_alloc)
    , group(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _planner_config_type;
  _planner_config_type planner_config;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _group_type;
  _group_type group;





  typedef boost::shared_ptr< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPlannerParamsRequest_

typedef ::moveit_msgs::GetPlannerParamsRequest_<std::allocator<void> > GetPlannerParamsRequest;

typedef boost::shared_ptr< ::moveit_msgs::GetPlannerParamsRequest > GetPlannerParamsRequestPtr;
typedef boost::shared_ptr< ::moveit_msgs::GetPlannerParamsRequest const> GetPlannerParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/melodic/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/marcin/kuka-lwr/devel/share/moveit_msgs/msg', '/home/marcin/kuka-lwr/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/melodic/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f548a13784550d510d791867af53ef40";
  }

  static const char* value(const ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf548a13784550d51ULL;
  static const uint64_t static_value2 = 0x0d791867af53ef40ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/GetPlannerParamsRequest";
  }

  static const char* value(const ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string planner_config\n"
"\n"
"\n"
"string group\n"
"\n"
;
  }

  static const char* value(const ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.planner_config);
      stream.next(m.group);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPlannerParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::GetPlannerParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "planner_config: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.planner_config);
    s << indent << "group: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.group);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GETPLANNERPARAMSREQUEST_H
