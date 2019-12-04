// Generated by gencpp from file moveit_msgs/PlaceLocation.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_PLACELOCATION_H
#define MOVEIT_MSGS_MESSAGE_PLACELOCATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <trajectory_msgs/JointTrajectory.h>
#include <geometry_msgs/PoseStamped.h>
#include <moveit_msgs/GripperTranslation.h>
#include <moveit_msgs/GripperTranslation.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct PlaceLocation_
{
  typedef PlaceLocation_<ContainerAllocator> Type;

  PlaceLocation_()
    : id()
    , post_place_posture()
    , place_pose()
    , pre_place_approach()
    , post_place_retreat()
    , allowed_touch_objects()  {
    }
  PlaceLocation_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , post_place_posture(_alloc)
    , place_pose(_alloc)
    , pre_place_approach(_alloc)
    , post_place_retreat(_alloc)
    , allowed_touch_objects(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef  ::trajectory_msgs::JointTrajectory_<ContainerAllocator>  _post_place_posture_type;
  _post_place_posture_type post_place_posture;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _place_pose_type;
  _place_pose_type place_pose;

   typedef  ::moveit_msgs::GripperTranslation_<ContainerAllocator>  _pre_place_approach_type;
  _pre_place_approach_type pre_place_approach;

   typedef  ::moveit_msgs::GripperTranslation_<ContainerAllocator>  _post_place_retreat_type;
  _post_place_retreat_type post_place_retreat;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _allowed_touch_objects_type;
  _allowed_touch_objects_type allowed_touch_objects;





  typedef boost::shared_ptr< ::moveit_msgs::PlaceLocation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::PlaceLocation_<ContainerAllocator> const> ConstPtr;

}; // struct PlaceLocation_

typedef ::moveit_msgs::PlaceLocation_<std::allocator<void> > PlaceLocation;

typedef boost::shared_ptr< ::moveit_msgs::PlaceLocation > PlaceLocationPtr;
typedef boost::shared_ptr< ::moveit_msgs::PlaceLocation const> PlaceLocationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::PlaceLocation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::PlaceLocation_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::PlaceLocation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::PlaceLocation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f3dbcaca40fb29ede2af78b3e1831128";
  }

  static const char* value(const ::moveit_msgs::PlaceLocation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf3dbcaca40fb29edULL;
  static const uint64_t static_value2 = 0xe2af78b3e1831128ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/PlaceLocation";
  }

  static const char* value(const ::moveit_msgs::PlaceLocation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# A name for this grasp\n"
"string id\n"
"\n"
"# The internal posture of the hand for the grasp\n"
"# positions and efforts are used\n"
"trajectory_msgs/JointTrajectory post_place_posture\n"
"\n"
"# The position of the end-effector for the grasp relative to a reference frame \n"
"# (that is always specified elsewhere, not in this message)\n"
"geometry_msgs/PoseStamped place_pose\n"
"\n"
"# The approach motion\n"
"GripperTranslation pre_place_approach\n"
"\n"
"# The retreat motion\n"
"GripperTranslation post_place_retreat\n"
"\n"
"# an optional list of obstacles that we have semantic information about\n"
"# and that can be touched/pushed/moved in the course of grasping\n"
"string[] allowed_touch_objects\n"
"\n"
"================================================================================\n"
"MSG: trajectory_msgs/JointTrajectory\n"
"Header header\n"
"string[] joint_names\n"
"JointTrajectoryPoint[] points\n"
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
"MSG: trajectory_msgs/JointTrajectoryPoint\n"
"# Each trajectory point specifies either positions[, velocities[, accelerations]]\n"
"# or positions[, effort] for the trajectory to be executed.\n"
"# All specified values are in the same order as the joint names in JointTrajectory.msg\n"
"\n"
"float64[] positions\n"
"float64[] velocities\n"
"float64[] accelerations\n"
"float64[] effort\n"
"duration time_from_start\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"MSG: moveit_msgs/GripperTranslation\n"
"# defines a translation for the gripper, used in pickup or place tasks\n"
"# for example for lifting an object off a table or approaching the table for placing\n"
"\n"
"# the direction of the translation\n"
"geometry_msgs/Vector3Stamped direction\n"
"\n"
"# the desired translation distance\n"
"float32 desired_distance\n"
"\n"
"# the min distance that must be considered feasible before the\n"
"# grasp is even attempted\n"
"float32 min_distance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3Stamped\n"
"# This represents a Vector3 with reference coordinate frame and timestamp\n"
"Header header\n"
"Vector3 vector\n"
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

  static const char* value(const ::moveit_msgs::PlaceLocation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.post_place_posture);
      stream.next(m.place_pose);
      stream.next(m.pre_place_approach);
      stream.next(m.post_place_retreat);
      stream.next(m.allowed_touch_objects);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlaceLocation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::PlaceLocation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::PlaceLocation_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "post_place_posture: ";
    s << std::endl;
    Printer< ::trajectory_msgs::JointTrajectory_<ContainerAllocator> >::stream(s, indent + "  ", v.post_place_posture);
    s << indent << "place_pose: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.place_pose);
    s << indent << "pre_place_approach: ";
    s << std::endl;
    Printer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >::stream(s, indent + "  ", v.pre_place_approach);
    s << indent << "post_place_retreat: ";
    s << std::endl;
    Printer< ::moveit_msgs::GripperTranslation_<ContainerAllocator> >::stream(s, indent + "  ", v.post_place_retreat);
    s << indent << "allowed_touch_objects[]" << std::endl;
    for (size_t i = 0; i < v.allowed_touch_objects.size(); ++i)
    {
      s << indent << "  allowed_touch_objects[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.allowed_touch_objects[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_PLACELOCATION_H
