// Generated by gencpp from file moveit_msgs/LinkPadding.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_LINKPADDING_H
#define MOVEIT_MSGS_MESSAGE_LINKPADDING_H


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
struct LinkPadding_
{
  typedef LinkPadding_<ContainerAllocator> Type;

  LinkPadding_()
    : link_name()
    , padding(0.0)  {
    }
  LinkPadding_(const ContainerAllocator& _alloc)
    : link_name(_alloc)
    , padding(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _link_name_type;
  _link_name_type link_name;

   typedef double _padding_type;
  _padding_type padding;





  typedef boost::shared_ptr< ::moveit_msgs::LinkPadding_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::LinkPadding_<ContainerAllocator> const> ConstPtr;

}; // struct LinkPadding_

typedef ::moveit_msgs::LinkPadding_<std::allocator<void> > LinkPadding;

typedef boost::shared_ptr< ::moveit_msgs::LinkPadding > LinkPaddingPtr;
typedef boost::shared_ptr< ::moveit_msgs::LinkPadding const> LinkPaddingConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::LinkPadding_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::LinkPadding_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::LinkPadding_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::LinkPadding_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::LinkPadding_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b3ea75670df55c696fedee97774d5947";
  }

  static const char* value(const ::moveit_msgs::LinkPadding_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb3ea75670df55c69ULL;
  static const uint64_t static_value2 = 0x6fedee97774d5947ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/LinkPadding";
  }

  static const char* value(const ::moveit_msgs::LinkPadding_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#name for the link\n"
"string link_name\n"
"\n"
"# padding to apply to the link\n"
"float64 padding\n"
;
  }

  static const char* value(const ::moveit_msgs::LinkPadding_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.link_name);
      stream.next(m.padding);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LinkPadding_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::LinkPadding_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::LinkPadding_<ContainerAllocator>& v)
  {
    s << indent << "link_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.link_name);
    s << indent << "padding: ";
    Printer<double>::stream(s, indent + "  ", v.padding);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_LINKPADDING_H
