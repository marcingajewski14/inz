// Generated by gencpp from file moveit_msgs/GraspPlanningResponse.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GRASPPLANNINGRESPONSE_H
#define MOVEIT_MSGS_MESSAGE_GRASPPLANNINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <moveit_msgs/Grasp.h>
#include <moveit_msgs/MoveItErrorCodes.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct GraspPlanningResponse_
{
  typedef GraspPlanningResponse_<ContainerAllocator> Type;

  GraspPlanningResponse_()
    : grasps()
    , error_code()  {
    }
  GraspPlanningResponse_(const ContainerAllocator& _alloc)
    : grasps(_alloc)
    , error_code(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::moveit_msgs::Grasp_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::moveit_msgs::Grasp_<ContainerAllocator> >::other >  _grasps_type;
  _grasps_type grasps;

   typedef  ::moveit_msgs::MoveItErrorCodes_<ContainerAllocator>  _error_code_type;
  _error_code_type error_code;





  typedef boost::shared_ptr< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GraspPlanningResponse_

typedef ::moveit_msgs::GraspPlanningResponse_<std::allocator<void> > GraspPlanningResponse;

typedef boost::shared_ptr< ::moveit_msgs::GraspPlanningResponse > GraspPlanningResponsePtr;
typedef boost::shared_ptr< ::moveit_msgs::GraspPlanningResponse const> GraspPlanningResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb8169d403b6e9f96bf61e22a50d13ae";
  }

  static const char* value(const ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb8169d403b6e9f9ULL;
  static const uint64_t static_value2 = 0x6bf61e22a50d13aeULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/GraspPlanningResponse";
  }

  static const char* value(const ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"Grasp[] grasps\n"
"\n"
"\n"
"MoveItErrorCodes error_code\n"
"\n"
"\n"
"================================================================================\n"
"MSG: moveit_msgs/Grasp\n"
"# This message contains a description of a grasp that would be used\n"
"# with a particular end-effector to grasp an object, including how to\n"
"# approach it, grip it, etc.  This message does not contain any\n"
"# information about a \"grasp point\" (a position ON the object).\n"
"# Whatever generates this message should have already combined\n"
"# information about grasp points with information about the geometry\n"
"# of the end-effector to compute the grasp_pose in this message.\n"
"\n"
"# A name for this grasp\n"
"string id\n"
"\n"
"# The internal posture of the hand for the pre-grasp\n"
"# only positions are used\n"
"trajectory_msgs/JointTrajectory pre_grasp_posture\n"
"\n"
"# The internal posture of the hand for the grasp\n"
"# positions and efforts are used\n"
"trajectory_msgs/JointTrajectory grasp_posture\n"
"\n"
"# The position of the end-effector for the grasp.  This is the pose of\n"
"# the \"parent_link\" of the end-effector, not actually the pose of any\n"
"# link *in* the end-effector.  Typically this would be the pose of the\n"
"# most distal wrist link before the hand (end-effector) links began.\n"
"geometry_msgs/PoseStamped grasp_pose\n"
"\n"
"# The estimated probability of success for this grasp, or some other\n"
"# measure of how \"good\" it is.\n"
"float64 grasp_quality\n"
"\n"
"# The approach direction to take before picking an object\n"
"GripperTranslation pre_grasp_approach\n"
"\n"
"# The retreat direction to take after a grasp has been completed (object is attached)\n"
"GripperTranslation post_grasp_retreat\n"
"\n"
"# The retreat motion to perform when releasing the object; this information\n"
"# is not necessary for the grasp itself, but when releasing the object,\n"
"# the information will be necessary. The grasp used to perform a pickup\n"
"# is returned as part of the result, so this information is available for \n"
"# later use.\n"
"GripperTranslation post_place_retreat\n"
"\n"
"# the maximum contact force to use while grasping (<=0 to disable)\n"
"float32 max_contact_force\n"
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
"================================================================================\n"
"MSG: moveit_msgs/MoveItErrorCodes\n"
"int32 val\n"
"\n"
"# overall behavior\n"
"int32 SUCCESS=1\n"
"int32 FAILURE=99999\n"
"\n"
"int32 PLANNING_FAILED=-1\n"
"int32 INVALID_MOTION_PLAN=-2\n"
"int32 MOTION_PLAN_INVALIDATED_BY_ENVIRONMENT_CHANGE=-3\n"
"int32 CONTROL_FAILED=-4\n"
"int32 UNABLE_TO_AQUIRE_SENSOR_DATA=-5\n"
"int32 TIMED_OUT=-6\n"
"int32 PREEMPTED=-7\n"
"\n"
"# planning & kinematics request errors\n"
"int32 START_STATE_IN_COLLISION=-10\n"
"int32 START_STATE_VIOLATES_PATH_CONSTRAINTS=-11\n"
"\n"
"int32 GOAL_IN_COLLISION=-12\n"
"int32 GOAL_VIOLATES_PATH_CONSTRAINTS=-13\n"
"int32 GOAL_CONSTRAINTS_VIOLATED=-14\n"
"\n"
"int32 INVALID_GROUP_NAME=-15\n"
"int32 INVALID_GOAL_CONSTRAINTS=-16\n"
"int32 INVALID_ROBOT_STATE=-17\n"
"int32 INVALID_LINK_NAME=-18\n"
"int32 INVALID_OBJECT_NAME=-19\n"
"\n"
"# system errors\n"
"int32 FRAME_TRANSFORM_FAILURE=-21\n"
"int32 COLLISION_CHECKING_UNAVAILABLE=-22\n"
"int32 ROBOT_STATE_STALE=-23\n"
"int32 SENSOR_INFO_STALE=-24\n"
"\n"
"# kinematics errors\n"
"int32 NO_IK_SOLUTION=-31\n"
;
  }

  static const char* value(const ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.grasps);
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspPlanningResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::GraspPlanningResponse_<ContainerAllocator>& v)
  {
    s << indent << "grasps[]" << std::endl;
    for (size_t i = 0; i < v.grasps.size(); ++i)
    {
      s << indent << "  grasps[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::moveit_msgs::Grasp_<ContainerAllocator> >::stream(s, indent + "    ", v.grasps[i]);
    }
    s << indent << "error_code: ";
    s << std::endl;
    Printer< ::moveit_msgs::MoveItErrorCodes_<ContainerAllocator> >::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GRASPPLANNINGRESPONSE_H
