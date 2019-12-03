// Generated by gencpp from file lwr_controllers/SetCartesianImpedanceCommandRequest.msg
// DO NOT EDIT!


#ifndef LWR_CONTROLLERS_MESSAGE_SETCARTESIANIMPEDANCECOMMANDREQUEST_H
#define LWR_CONTROLLERS_MESSAGE_SETCARTESIANIMPEDANCECOMMANDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <lwr_controllers/CartesianImpedancePoint.h>

namespace lwr_controllers
{
template <class ContainerAllocator>
struct SetCartesianImpedanceCommandRequest_
{
  typedef SetCartesianImpedanceCommandRequest_<ContainerAllocator> Type;

  SetCartesianImpedanceCommandRequest_()
    : command()  {
    }
  SetCartesianImpedanceCommandRequest_(const ContainerAllocator& _alloc)
    : command(_alloc)  {
  (void)_alloc;
    }



   typedef  ::lwr_controllers::CartesianImpedancePoint_<ContainerAllocator>  _command_type;
  _command_type command;





  typedef boost::shared_ptr< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetCartesianImpedanceCommandRequest_

typedef ::lwr_controllers::SetCartesianImpedanceCommandRequest_<std::allocator<void> > SetCartesianImpedanceCommandRequest;

typedef boost::shared_ptr< ::lwr_controllers::SetCartesianImpedanceCommandRequest > SetCartesianImpedanceCommandRequestPtr;
typedef boost::shared_ptr< ::lwr_controllers::SetCartesianImpedanceCommandRequest const> SetCartesianImpedanceCommandRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace lwr_controllers

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'lwr_controllers': ['/home/marcin/kuka-lwr/src/lwr_controllers/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cc36264319f44d204c2ace0744aa21ee";
  }

  static const char* value(const ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xcc36264319f44d20ULL;
  static const uint64_t static_value2 = 0x4c2ace0744aa21eeULL;
};

template<class ContainerAllocator>
struct DataType< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lwr_controllers/SetCartesianImpedanceCommandRequest";
  }

  static const char* value(const ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "lwr_controllers/CartesianImpedancePoint command\n"
"\n"
"================================================================================\n"
"MSG: lwr_controllers/CartesianImpedancePoint\n"
"std_msgs/Header header\n"
"# 1. If frame_id in header is NOT EMPTY, then x_FRI is considered to be the pose w.r.t. that frame, so the increment w.r.t. the current tip pose will be computed internally (in the teach pendant is equivalent to select the Cartesian increments to be in the WORLD frame) \n"
"# 2. If frame_id in header is EMPTY, then x_FRI is considered to be the pose w.r.t. to the current tip pose (in the teach pendant is equivalent to select the Cartesian increments to be in the TOOL frame)\n"
"# The increment (or offset) is x_FRI\n"
"geometry_msgs/Pose x_FRI\n"
"# The stiffness, damping and wrench are expressed in the current tip frame readed in the HWiface\n"
"lwr_controllers/Stiffness k_FRI\n"
"lwr_controllers/Stiffness d_FRI\n"
"geometry_msgs/Wrench f_FRI\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: lwr_controllers/Stiffness\n"
"# This represents a diagonal Cartesian stiffness\n"
"# It is motivated by the KDL class: http://people.mech.kuleuven.be/~rsmits/kdl/api/html/classKDL_1_1Stiffness.html\n"
"# The conversion would be straight-forward, however, a generic 6D stiffness matrix would be desirable\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 rx\n"
"float64 ry\n"
"float64 rz\n"
"================================================================================\n"
"MSG: geometry_msgs/Wrench\n"
"# This represents force in free space, separated into\n"
"# its linear and angular parts.\n"
"Vector3  force\n"
"Vector3  torque\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetCartesianImpedanceCommandRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::lwr_controllers::SetCartesianImpedanceCommandRequest_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    s << std::endl;
    Printer< ::lwr_controllers::CartesianImpedancePoint_<ContainerAllocator> >::stream(s, indent + "  ", v.command);
  }
};

} // namespace message_operations
} // namespace ros

#endif // LWR_CONTROLLERS_MESSAGE_SETCARTESIANIMPEDANCECOMMANDREQUEST_H
