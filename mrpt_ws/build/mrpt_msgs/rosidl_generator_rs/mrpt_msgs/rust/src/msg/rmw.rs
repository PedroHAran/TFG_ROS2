#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GenericObservation() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__GenericObservation__init(msg: *mut GenericObservation) -> bool;
    fn mrpt_msgs__msg__GenericObservation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GenericObservation>, size: usize) -> bool;
    fn mrpt_msgs__msg__GenericObservation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GenericObservation>);
    fn mrpt_msgs__msg__GenericObservation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GenericObservation>, out_seq: *mut rosidl_runtime_rs::Sequence<GenericObservation>) -> bool;
}

// Corresponds to mrpt_msgs__msg__GenericObservation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message holds an mrpt::obs::CObservation polymorphic object
/// serialized into a binary stream via mrpt::serialization methods.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericObservation {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::rmw::Header,

    /// Generalized serialized observation data
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for GenericObservation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__GenericObservation__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__GenericObservation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GenericObservation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GenericObservation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GenericObservation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GenericObservation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GenericObservation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GenericObservation where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/GenericObservation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GenericObservation() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphConstraint() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__GraphConstraint__init(msg: *mut GraphConstraint) -> bool;
    fn mrpt_msgs__msg__GraphConstraint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphConstraint>, size: usize) -> bool;
    fn mrpt_msgs__msg__GraphConstraint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphConstraint>);
    fn mrpt_msgs__msg__GraphConstraint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphConstraint>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphConstraint>) -> bool;
}

// Corresponds to mrpt_msgs__msg__GraphConstraint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Graph constraint that connects 2 nodes
///
/// Currently used in the mrpt_graphslam_2d ROS application.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphConstraint {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id_from: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id_to: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub constraint: geometry_msgs::msg::rmw::PoseWithCovariance,

}



impl Default for GraphConstraint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__GraphConstraint__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__GraphConstraint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphConstraint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphConstraint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphConstraint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphConstraint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphConstraint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphConstraint where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/GraphConstraint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphConstraint() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphSlamAgent() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__GraphSlamAgent__init(msg: *mut GraphSlamAgent) -> bool;
    fn mrpt_msgs__msg__GraphSlamAgent__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphSlamAgent>, size: usize) -> bool;
    fn mrpt_msgs__msg__GraphSlamAgent__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphSlamAgent>);
    fn mrpt_msgs__msg__GraphSlamAgent__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphSlamAgent>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphSlamAgent>) -> bool;
}

// Corresponds to mrpt_msgs__msg__GraphSlamAgent
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Connection-related properties for a graphSLAM agent in a multi-robot
/// environment.
///
/// Currently used in the mrpt_graphslam_2d ROS application.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphSlamAgent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std_msgs::msg::rmw::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hostname: std_msgs::msg::rmw::String,

    /// IPv4 of the corresponding agent
    pub ip_addr: std_msgs::msg::rmw::String,

    /// Port that the the roscore of the corresponding agent is running under
    pub port: u16,

    /// True if the SLAM Agent was last reported to be online
    pub is_online: std_msgs::msg::rmw::Bool,

    /// Timestamp that the SLAM Agent was last seen
    pub last_seen_time: builtin_interfaces::msg::rmw::Time,

    /// ROS Topics namespace that the agent is running under
    /// By definition this is going to be the same as the *name*
    /// UPDATE: Previously the topics namespace was <name>_<agent_ID>. However since I'll be using the multimaster for communication, every node is going to have a different
    pub topic_namespace: std_msgs::msg::rmw::String,

    /// this is the last field of the IPv4 address of the corresponding agent
    /// e.g. IP=192.168.100.17
    /// agent_ID = 17
    pub agent_id: i32,

}



impl Default for GraphSlamAgent {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__GraphSlamAgent__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__GraphSlamAgent__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphSlamAgent {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamAgent__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamAgent__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamAgent__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphSlamAgent {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphSlamAgent where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/GraphSlamAgent";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphSlamAgent() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphSlamAgents() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__GraphSlamAgents__init(msg: *mut GraphSlamAgents) -> bool;
    fn mrpt_msgs__msg__GraphSlamAgents__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphSlamAgents>, size: usize) -> bool;
    fn mrpt_msgs__msg__GraphSlamAgents__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphSlamAgents>);
    fn mrpt_msgs__msg__GraphSlamAgents__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphSlamAgents>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphSlamAgents>) -> bool;
}

// Corresponds to mrpt_msgs__msg__GraphSlamAgents
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Defines vector of GraphSlamAgents.
/// Currently used in the mrpt_graphslam_2d ROS application.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphSlamAgents {

    // This member is not documented.
    #[allow(missing_docs)]
    pub list: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GraphSlamAgent>,

}



impl Default for GraphSlamAgents {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__GraphSlamAgents__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__GraphSlamAgents__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphSlamAgents {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamAgents__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamAgents__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamAgents__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphSlamAgents {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphSlamAgents where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/GraphSlamAgents";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphSlamAgents() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphSlamStats() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__GraphSlamStats__init(msg: *mut GraphSlamStats) -> bool;
    fn mrpt_msgs__msg__GraphSlamStats__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphSlamStats>, size: usize) -> bool;
    fn mrpt_msgs__msg__GraphSlamStats__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphSlamStats>);
    fn mrpt_msgs__msg__GraphSlamStats__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphSlamStats>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphSlamStats>) -> bool;
}

// Corresponds to mrpt_msgs__msg__GraphSlamStats
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Statistics related to the execution of graphSLAM.
/// Message is utilized in the mrpt_graphslam ROS package

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphSlamStats {
    /// Time of message acquisition
    pub header: std_msgs::msg::rmw::Header,

    /// node-related stats
    pub nodes_total: i32,

    /// edge-related stats
    pub edges_total: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges_icp_2d: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges_icp_3d: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges_odom: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_closures: i32,

    /// Evaluation metric of the SLAM process
    pub slam_evaluation_metric: rosidl_runtime_rs::Sequence<f64>,

}



impl Default for GraphSlamStats {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__GraphSlamStats__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__GraphSlamStats__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphSlamStats {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamStats__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamStats__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__GraphSlamStats__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphSlamStats {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphSlamStats where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/GraphSlamStats";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__GraphSlamStats() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NetworkOfPoses() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__NetworkOfPoses__init(msg: *mut NetworkOfPoses) -> bool;
    fn mrpt_msgs__msg__NetworkOfPoses__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NetworkOfPoses>, size: usize) -> bool;
    fn mrpt_msgs__msg__NetworkOfPoses__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NetworkOfPoses>);
    fn mrpt_msgs__msg__NetworkOfPoses__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NetworkOfPoses>, out_seq: *mut rosidl_runtime_rs::Sequence<NetworkOfPoses>) -> bool;
}

// Corresponds to mrpt_msgs__msg__NetworkOfPoses
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Represents a 2D/3D Directed Graph of Constraints
///
/// Graph consists of:
/// - NodeIDs with their corresponding poses
/// - Directed Constraints that connect 2 nodes with each other
/// - Root node marking the start of the graph

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NetworkOfPoses {

    // This member is not documented.
    #[allow(missing_docs)]
    pub root: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: super::super::msg::rmw::NodeIDWithPoseVec,


    // This member is not documented.
    #[allow(missing_docs)]
    pub constraints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GraphConstraint>,

}



impl Default for NetworkOfPoses {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__NetworkOfPoses__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__NetworkOfPoses__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NetworkOfPoses {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NetworkOfPoses__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NetworkOfPoses__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NetworkOfPoses__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NetworkOfPoses {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NetworkOfPoses where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/NetworkOfPoses";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NetworkOfPoses() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NodeIDWithLaserScan() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__NodeIDWithLaserScan__init(msg: *mut NodeIDWithLaserScan) -> bool;
    fn mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithLaserScan>, size: usize) -> bool;
    fn mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithLaserScan>);
    fn mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeIDWithLaserScan>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithLaserScan>) -> bool;
}

// Corresponds to mrpt_msgs__msg__NodeIDWithLaserScan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// NodeID along with the associated LaserScan
///
/// Currently used in the mrpt_graphslam_2d ROS application.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeIDWithLaserScan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scan: sensor_msgs::msg::rmw::LaserScan,

}



impl Default for NodeIDWithLaserScan {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__NodeIDWithLaserScan__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__NodeIDWithLaserScan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeIDWithLaserScan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithLaserScan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeIDWithLaserScan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeIDWithLaserScan where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/NodeIDWithLaserScan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NodeIDWithLaserScan() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NodeIDWithPoseVec() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__NodeIDWithPoseVec__init(msg: *mut NodeIDWithPoseVec) -> bool;
    fn mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithPoseVec>, size: usize) -> bool;
    fn mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithPoseVec>);
    fn mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeIDWithPoseVec>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithPoseVec>) -> bool;
}

// Corresponds to mrpt_msgs__msg__NodeIDWithPoseVec
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Vector of NodeIDWithPose msgs

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeIDWithPoseVec {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vec: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NodeIDWithPose>,

}



impl Default for NodeIDWithPoseVec {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__NodeIDWithPoseVec__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__NodeIDWithPoseVec__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeIDWithPoseVec {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithPoseVec__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeIDWithPoseVec {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeIDWithPoseVec where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/NodeIDWithPoseVec";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NodeIDWithPoseVec() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NodeIDWithPose() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__NodeIDWithPose__init(msg: *mut NodeIDWithPose) -> bool;
    fn mrpt_msgs__msg__NodeIDWithPose__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithPose>, size: usize) -> bool;
    fn mrpt_msgs__msg__NodeIDWithPose__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithPose>);
    fn mrpt_msgs__msg__NodeIDWithPose__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NodeIDWithPose>, out_seq: *mut rosidl_runtime_rs::Sequence<NodeIDWithPose>) -> bool;
}

// Corresponds to mrpt_msgs__msg__NodeIDWithPose
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// NodeID along with its corresponding 2D/3D pose estimation.
/// Message also contains the following optional fields:
/// - str_ID: string identifier of the robot agent that initially registered this node in
/// its graph
/// - nodeID_loc: ID of the current node in the graph it was initially registered in.
///
/// note: Additional fields correspond to the fields of the
/// mrpt::graphs::detail::TMRSlamNodeAnnotations struct
///
/// Currently used in the mrpt_graphslam_2d ROS application.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeIDWithPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::rmw::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub str_id: std_msgs::msg::rmw::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id_loc: u64,

}



impl Default for NodeIDWithPose {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__NodeIDWithPose__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__NodeIDWithPose__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NodeIDWithPose {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithPose__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithPose__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__NodeIDWithPose__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NodeIDWithPose {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NodeIDWithPose where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/NodeIDWithPose";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__NodeIDWithPose() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__ObservationObject() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__ObservationObject__init(msg: *mut ObservationObject) -> bool;
    fn mrpt_msgs__msg__ObservationObject__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObservationObject>, size: usize) -> bool;
    fn mrpt_msgs__msg__ObservationObject__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObservationObject>);
    fn mrpt_msgs__msg__ObservationObject__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObservationObject>, out_seq: *mut rosidl_runtime_rs::Sequence<ObservationObject>) -> bool;
}

// Corresponds to mrpt_msgs__msg__ObservationObject
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message holds an observation of one or more landmarks 
///  detected by their range (distance) + bearing (2 or 3 angles) 
///  from some sensor on the robot.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObservationObject {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::rmw::Header,

    /// The sensor pose on the robot coordinates frame.
    pub sensor_pose_on_robot: geometry_msgs::msg::rmw::Pose,

    /// Sensor characteristics:
    /// In meters (m)
    pub min_sensor_distance: f64,

    /// (m)
    pub max_sensor_distance: f64,

    /// Typical sensor noise:
    /// (m)
    pub sensor_std_range: f64,

    /// (rad)
    pub sensor_std_yaw: f64,

    /// (pitch)
    pub sensor_std_pitch: f64,

    /// The vector of individual observations
    pub sensed_data: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SingleObjectObservation>,

}



impl Default for ObservationObject {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__ObservationObject__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__ObservationObject__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObservationObject {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationObject__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationObject__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationObject__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObservationObject {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObservationObject where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/ObservationObject";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__ObservationObject() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__SingleObjectObservation() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__SingleObjectObservation__init(msg: *mut SingleObjectObservation) -> bool;
    fn mrpt_msgs__msg__SingleObjectObservation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SingleObjectObservation>, size: usize) -> bool;
    fn mrpt_msgs__msg__SingleObjectObservation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SingleObjectObservation>);
    fn mrpt_msgs__msg__SingleObjectObservation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SingleObjectObservation>, out_seq: *mut rosidl_runtime_rs::Sequence<SingleObjectObservation>) -> bool;
}

// Corresponds to mrpt_msgs__msg__SingleObjectObservation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// int32 INVALID_LANDMARK_ID = -1

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleObjectObservation {
    /// Distance, in meters.
    pub range: f64,

    /// Angle wrt +Z (rads)
    pub yaw: f64,

    /// Angle wrt +Y (rads)
    pub pitch: f64,

    /// Pose in world space coordinates
    pub pose_wo: geometry_msgs::msg::rmw::Pose,

    /// Pose in sensor space coordinates
    pub pose_so: geometry_msgs::msg::rmw::Pose,

    /// Shape variables describing the object
    pub shape_variables: rosidl_runtime_rs::Sequence<f32>,

    /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
    pub id: i32,

}



impl Default for SingleObjectObservation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__SingleObjectObservation__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__SingleObjectObservation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SingleObjectObservation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleObjectObservation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleObjectObservation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleObjectObservation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SingleObjectObservation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SingleObjectObservation where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/SingleObjectObservation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__SingleObjectObservation() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__ObservationRangeBeacon() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__ObservationRangeBeacon__init(msg: *mut ObservationRangeBeacon) -> bool;
    fn mrpt_msgs__msg__ObservationRangeBeacon__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObservationRangeBeacon>, size: usize) -> bool;
    fn mrpt_msgs__msg__ObservationRangeBeacon__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObservationRangeBeacon>);
    fn mrpt_msgs__msg__ObservationRangeBeacon__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObservationRangeBeacon>, out_seq: *mut rosidl_runtime_rs::Sequence<ObservationRangeBeacon>) -> bool;
}

// Corresponds to mrpt_msgs__msg__ObservationRangeBeacon
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message holds an observation of one or more landmarks 
///  detected by their range (distance) 
///  from some sensor on the robot.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObservationRangeBeacon {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::rmw::Header,

    /// The sensor pose on the robot coordinates frame.
    pub sensor_pose_on_robot: geometry_msgs::msg::rmw::Pose,

    /// Sensor characteristics:
    /// In meters (m)
    pub min_sensor_distance: f64,

    /// (m)
    pub max_sensor_distance: f64,

    /// Typical sensor noise:
    /// (m)
    pub sensor_std_range: f64,

    /// The vector of individual observations
    pub sensed_data: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SingleRangeBeaconObservation>,

}



impl Default for ObservationRangeBeacon {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__ObservationRangeBeacon__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__ObservationRangeBeacon__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObservationRangeBeacon {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationRangeBeacon__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationRangeBeacon__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationRangeBeacon__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObservationRangeBeacon {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObservationRangeBeacon where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/ObservationRangeBeacon";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__ObservationRangeBeacon() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__ObservationRangeBearing() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__ObservationRangeBearing__init(msg: *mut ObservationRangeBearing) -> bool;
    fn mrpt_msgs__msg__ObservationRangeBearing__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ObservationRangeBearing>, size: usize) -> bool;
    fn mrpt_msgs__msg__ObservationRangeBearing__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ObservationRangeBearing>);
    fn mrpt_msgs__msg__ObservationRangeBearing__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ObservationRangeBearing>, out_seq: *mut rosidl_runtime_rs::Sequence<ObservationRangeBearing>) -> bool;
}

// Corresponds to mrpt_msgs__msg__ObservationRangeBearing
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message holds an observation of one or more landmarks 
///  detected by their range (distance) + bearing (2 or 3 angles) 
///  from some sensor on the robot.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObservationRangeBearing {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::rmw::Header,

    /// The sensor pose on the robot coordinates frame.
    pub sensor_pose_on_robot: geometry_msgs::msg::rmw::Pose,

    /// Sensor characteristics:
    /// In meters (m)
    pub min_sensor_distance: f64,

    /// (m)
    pub max_sensor_distance: f64,

    /// Typical sensor noise:
    /// (m)
    pub sensor_std_range: f64,

    /// (rad)
    pub sensor_std_yaw: f64,

    /// (pitch)
    pub sensor_std_pitch: f64,

    /// The vector of individual observations
    pub sensed_data: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SingleRangeBearingObservation>,

}



impl Default for ObservationRangeBearing {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__ObservationRangeBearing__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__ObservationRangeBearing__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ObservationRangeBearing {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationRangeBearing__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationRangeBearing__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__ObservationRangeBearing__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ObservationRangeBearing {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ObservationRangeBearing where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/ObservationRangeBearing";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__ObservationRangeBearing() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__SingleRangeBeaconObservation() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__SingleRangeBeaconObservation__init(msg: *mut SingleRangeBeaconObservation) -> bool;
    fn mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SingleRangeBeaconObservation>, size: usize) -> bool;
    fn mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SingleRangeBeaconObservation>);
    fn mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SingleRangeBeaconObservation>, out_seq: *mut rosidl_runtime_rs::Sequence<SingleRangeBeaconObservation>) -> bool;
}

// Corresponds to mrpt_msgs__msg__SingleRangeBeaconObservation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// int32 INVALID_LANDMARK_ID = -1

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleRangeBeaconObservation {
    /// Distance, in meters.
    pub range: f64,

    /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
    pub id: i32,

}



impl Default for SingleRangeBeaconObservation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__SingleRangeBeaconObservation__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__SingleRangeBeaconObservation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SingleRangeBeaconObservation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleRangeBeaconObservation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SingleRangeBeaconObservation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SingleRangeBeaconObservation where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/SingleRangeBeaconObservation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__SingleRangeBeaconObservation() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__SingleRangeBearingObservation() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__msg__SingleRangeBearingObservation__init(msg: *mut SingleRangeBearingObservation) -> bool;
    fn mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SingleRangeBearingObservation>, size: usize) -> bool;
    fn mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SingleRangeBearingObservation>);
    fn mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SingleRangeBearingObservation>, out_seq: *mut rosidl_runtime_rs::Sequence<SingleRangeBearingObservation>) -> bool;
}

// Corresponds to mrpt_msgs__msg__SingleRangeBearingObservation
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// int32 INVALID_LANDMARK_ID = -1

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleRangeBearingObservation {
    /// Distance, in meters.
    pub range: f64,

    /// Angle wrt +Z (rads)
    pub yaw: f64,

    /// Angle wrt +Y (rads)
    pub pitch: f64,

    /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
    pub id: i32,

}



impl Default for SingleRangeBearingObservation {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__msg__SingleRangeBearingObservation__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__msg__SingleRangeBearingObservation__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SingleRangeBearingObservation {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__msg__SingleRangeBearingObservation__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SingleRangeBearingObservation {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SingleRangeBearingObservation where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/msg/SingleRangeBearingObservation";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__msg__SingleRangeBearingObservation() }
  }
}


