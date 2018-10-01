#ifndef LWR_CONTROLLERS__TWIST_CONTROLLER_H
#define LWR_CONTROLLERS__TWIST_CONTROLLER_H

#include <vector>
#include <boost/scoped_ptr.hpp>
#include <control_toolbox/pid.h>
#include <geometry_msgs/Twist.h>
#include "KinematicChainControllerBase.h"

namespace lwr_controllers {

  class TwistController : public controller_interface::KinematicChainControllerBase<hardware_interface::EffortJointInterface> {

  public:
    // Default Constructor
    TwistController();

    // Default Destructor
    ~TwistController();

    // Controller functions
    bool init(hardware_interface::EffortJointInterface *robot, ros::NodeHandle &n);
		void starting(const ros::Time& time);
		void update(const ros::Time& time, const ros::Duration& period);
		void command(const geometry_msgs::Twist::ConstPtr &msg);

    // Measured and commanded twists
    KDL::Twist twist_meas_, twist_des_;
    KDL::FrameVel tmp_twist_meas_;    // Used for forward twist computing
    KDL::Twist error;                 // Error between desired and measured

  private:
    // ROS Variables
    ros::Subscriber sub_command_;     // For listening to the command topic
    ros::Time last_time_;             // Used to compute dt
    ros::Time current_time_;          // Used to compute dt
    ros::Duration dt_;                // The time resolution for the PID

    // KDL Variables
    KDL::JntArrayVel joint_states_;   // Joint state containing q and q_dot
    KDL::Wrench wrench_;              // Output of the PID
    KDL::JntArray joint_torques_;     // Joint torques given to effort interf.
    KDL::Jacobian jacobian_;          // Robot jacobian

    // Solvers (twist and jacobian solvers)
    boost::scoped_ptr<KDL::ChainFkSolverVel> jnt_to_twist_solver_;
    boost::scoped_ptr<KDL::ChainJntToJacSolver> jnt_to_jac_solver_;

    // PID controllers (wrench_ = PID(s) * (twist_des_ - twist_meas_))
    std::vector<control_toolbox::Pid> pid_controller_;

  };

}



#endif //LWR_CONTROLLERS__TWIST_CONTROLLER_H