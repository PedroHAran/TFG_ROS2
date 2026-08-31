#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to mrpt_msgs__msg__GenericObservation
/// This message holds an mrpt::obs::CObservation polymorphic object
/// serialized into a binary stream via mrpt::serialization methods.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GenericObservation {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::Header,

    /// Generalized serialized observation data
    pub data: Vec<u8>,

}



impl Default for GenericObservation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GenericObservation::default())
  }
}

impl rosidl_runtime_rs::Message for GenericObservation {
  type RmwMsg = super::msg::rmw::GenericObservation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__GraphConstraint
/// Graph constraint that connects 2 nodes
///
/// Currently used in the mrpt_graphslam_2d ROS application.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub constraint: geometry_msgs::msg::PoseWithCovariance,

}



impl Default for GraphConstraint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphConstraint::default())
  }
}

impl rosidl_runtime_rs::Message for GraphConstraint {
  type RmwMsg = super::msg::rmw::GraphConstraint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id_from: msg.node_id_from,
        node_id_to: msg.node_id_to,
        constraint: geometry_msgs::msg::PoseWithCovariance::into_rmw_message(std::borrow::Cow::Owned(msg.constraint)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      node_id_from: msg.node_id_from,
      node_id_to: msg.node_id_to,
        constraint: geometry_msgs::msg::PoseWithCovariance::into_rmw_message(std::borrow::Cow::Borrowed(&msg.constraint)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id_from: msg.node_id_from,
      node_id_to: msg.node_id_to,
      constraint: geometry_msgs::msg::PoseWithCovariance::from_rmw_message(msg.constraint),
    }
  }
}


// Corresponds to mrpt_msgs__msg__GraphSlamAgent
/// Connection-related properties for a graphSLAM agent in a multi-robot
/// environment.
///
/// Currently used in the mrpt_graphslam_2d ROS application.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphSlamAgent {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std_msgs::msg::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub hostname: std_msgs::msg::String,

    /// IPv4 of the corresponding agent
    pub ip_addr: std_msgs::msg::String,

    /// Port that the the roscore of the corresponding agent is running under
    pub port: u16,

    /// True if the SLAM Agent was last reported to be online
    pub is_online: std_msgs::msg::Bool,

    /// Timestamp that the SLAM Agent was last seen
    pub last_seen_time: builtin_interfaces::msg::Time,

    /// ROS Topics namespace that the agent is running under
    /// By definition this is going to be the same as the *name*
    /// UPDATE: Previously the topics namespace was <name>_<agent_ID>. However since I'll be using the multimaster for communication, every node is going to have a different
    pub topic_namespace: std_msgs::msg::String,

    /// this is the last field of the IPv4 address of the corresponding agent
    /// e.g. IP=192.168.100.17
    /// agent_ID = 17
    pub agent_id: i32,

}



impl Default for GraphSlamAgent {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphSlamAgent::default())
  }
}

impl rosidl_runtime_rs::Message for GraphSlamAgent {
  type RmwMsg = super::msg::rmw::GraphSlamAgent;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.name)).into_owned(),
        hostname: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.hostname)).into_owned(),
        ip_addr: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.ip_addr)).into_owned(),
        port: msg.port,
        is_online: std_msgs::msg::Bool::into_rmw_message(std::borrow::Cow::Owned(msg.is_online)).into_owned(),
        last_seen_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.last_seen_time)).into_owned(),
        topic_namespace: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.topic_namespace)).into_owned(),
        agent_id: msg.agent_id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.name)).into_owned(),
        hostname: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.hostname)).into_owned(),
        ip_addr: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.ip_addr)).into_owned(),
      port: msg.port,
        is_online: std_msgs::msg::Bool::into_rmw_message(std::borrow::Cow::Borrowed(&msg.is_online)).into_owned(),
        last_seen_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.last_seen_time)).into_owned(),
        topic_namespace: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.topic_namespace)).into_owned(),
      agent_id: msg.agent_id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: std_msgs::msg::String::from_rmw_message(msg.name),
      hostname: std_msgs::msg::String::from_rmw_message(msg.hostname),
      ip_addr: std_msgs::msg::String::from_rmw_message(msg.ip_addr),
      port: msg.port,
      is_online: std_msgs::msg::Bool::from_rmw_message(msg.is_online),
      last_seen_time: builtin_interfaces::msg::Time::from_rmw_message(msg.last_seen_time),
      topic_namespace: std_msgs::msg::String::from_rmw_message(msg.topic_namespace),
      agent_id: msg.agent_id,
    }
  }
}


// Corresponds to mrpt_msgs__msg__GraphSlamAgents
/// Defines vector of GraphSlamAgents.
/// Currently used in the mrpt_graphslam_2d ROS application.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphSlamAgents {

    // This member is not documented.
    #[allow(missing_docs)]
    pub list: Vec<super::msg::GraphSlamAgent>,

}



impl Default for GraphSlamAgents {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphSlamAgents::default())
  }
}

impl rosidl_runtime_rs::Message for GraphSlamAgents {
  type RmwMsg = super::msg::rmw::GraphSlamAgents;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        list: msg.list
          .into_iter()
          .map(|elem| super::msg::GraphSlamAgent::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        list: msg.list
          .iter()
          .map(|elem| super::msg::GraphSlamAgent::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      list: msg.list
          .into_iter()
          .map(super::msg::GraphSlamAgent::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__GraphSlamStats
/// Statistics related to the execution of graphSLAM.
/// Message is utilized in the mrpt_graphslam ROS package

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphSlamStats {
    /// Time of message acquisition
    pub header: std_msgs::msg::Header,

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
    pub slam_evaluation_metric: Vec<f64>,

}



impl Default for GraphSlamStats {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphSlamStats::default())
  }
}

impl rosidl_runtime_rs::Message for GraphSlamStats {
  type RmwMsg = super::msg::rmw::GraphSlamStats;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        nodes_total: msg.nodes_total,
        edges_total: msg.edges_total,
        edges_icp_2d: msg.edges_icp_2d,
        edges_icp_3d: msg.edges_icp_3d,
        edges_odom: msg.edges_odom,
        loop_closures: msg.loop_closures,
        slam_evaluation_metric: msg.slam_evaluation_metric.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      nodes_total: msg.nodes_total,
      edges_total: msg.edges_total,
      edges_icp_2d: msg.edges_icp_2d,
      edges_icp_3d: msg.edges_icp_3d,
      edges_odom: msg.edges_odom,
      loop_closures: msg.loop_closures,
        slam_evaluation_metric: msg.slam_evaluation_metric.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      nodes_total: msg.nodes_total,
      edges_total: msg.edges_total,
      edges_icp_2d: msg.edges_icp_2d,
      edges_icp_3d: msg.edges_icp_3d,
      edges_odom: msg.edges_odom,
      loop_closures: msg.loop_closures,
      slam_evaluation_metric: msg.slam_evaluation_metric
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__NetworkOfPoses
/// Represents a 2D/3D Directed Graph of Constraints
///
/// Graph consists of:
/// - NodeIDs with their corresponding poses
/// - Directed Constraints that connect 2 nodes with each other
/// - Root node marking the start of the graph

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NetworkOfPoses {

    // This member is not documented.
    #[allow(missing_docs)]
    pub root: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nodes: super::msg::NodeIDWithPoseVec,


    // This member is not documented.
    #[allow(missing_docs)]
    pub constraints: Vec<super::msg::GraphConstraint>,

}



impl Default for NetworkOfPoses {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NetworkOfPoses::default())
  }
}

impl rosidl_runtime_rs::Message for NetworkOfPoses {
  type RmwMsg = super::msg::rmw::NetworkOfPoses;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        root: msg.root,
        nodes: super::msg::NodeIDWithPoseVec::into_rmw_message(std::borrow::Cow::Owned(msg.nodes)).into_owned(),
        constraints: msg.constraints
          .into_iter()
          .map(|elem| super::msg::GraphConstraint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      root: msg.root,
        nodes: super::msg::NodeIDWithPoseVec::into_rmw_message(std::borrow::Cow::Borrowed(&msg.nodes)).into_owned(),
        constraints: msg.constraints
          .iter()
          .map(|elem| super::msg::GraphConstraint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      root: msg.root,
      nodes: super::msg::NodeIDWithPoseVec::from_rmw_message(msg.nodes),
      constraints: msg.constraints
          .into_iter()
          .map(super::msg::GraphConstraint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__NodeIDWithLaserScan
/// NodeID along with the associated LaserScan
///
/// Currently used in the mrpt_graphslam_2d ROS application.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeIDWithLaserScan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scan: sensor_msgs::msg::LaserScan,

}



impl Default for NodeIDWithLaserScan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NodeIDWithLaserScan::default())
  }
}

impl rosidl_runtime_rs::Message for NodeIDWithLaserScan {
  type RmwMsg = super::msg::rmw::NodeIDWithLaserScan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: msg.node_id,
        scan: sensor_msgs::msg::LaserScan::into_rmw_message(std::borrow::Cow::Owned(msg.scan)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      node_id: msg.node_id,
        scan: sensor_msgs::msg::LaserScan::into_rmw_message(std::borrow::Cow::Borrowed(&msg.scan)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: msg.node_id,
      scan: sensor_msgs::msg::LaserScan::from_rmw_message(msg.scan),
    }
  }
}


// Corresponds to mrpt_msgs__msg__NodeIDWithPoseVec
/// Vector of NodeIDWithPose msgs

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeIDWithPoseVec {

    // This member is not documented.
    #[allow(missing_docs)]
    pub vec: Vec<super::msg::NodeIDWithPose>,

}



impl Default for NodeIDWithPoseVec {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NodeIDWithPoseVec::default())
  }
}

impl rosidl_runtime_rs::Message for NodeIDWithPoseVec {
  type RmwMsg = super::msg::rmw::NodeIDWithPoseVec;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vec: msg.vec
          .into_iter()
          .map(|elem| super::msg::NodeIDWithPose::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        vec: msg.vec
          .iter()
          .map(|elem| super::msg::NodeIDWithPose::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      vec: msg.vec
          .into_iter()
          .map(super::msg::NodeIDWithPose::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__NodeIDWithPose
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

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NodeIDWithPose {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pose: geometry_msgs::msg::Pose,


    // This member is not documented.
    #[allow(missing_docs)]
    pub str_id: std_msgs::msg::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id_loc: u64,

}



impl Default for NodeIDWithPose {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NodeIDWithPose::default())
  }
}

impl rosidl_runtime_rs::Message for NodeIDWithPose {
  type RmwMsg = super::msg::rmw::NodeIDWithPose;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: msg.node_id,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
        str_id: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Owned(msg.str_id)).into_owned(),
        node_id_loc: msg.node_id_loc,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      node_id: msg.node_id,
        pose: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
        str_id: std_msgs::msg::String::into_rmw_message(std::borrow::Cow::Borrowed(&msg.str_id)).into_owned(),
      node_id_loc: msg.node_id_loc,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: msg.node_id,
      pose: geometry_msgs::msg::Pose::from_rmw_message(msg.pose),
      str_id: std_msgs::msg::String::from_rmw_message(msg.str_id),
      node_id_loc: msg.node_id_loc,
    }
  }
}


// Corresponds to mrpt_msgs__msg__ObservationObject
/// This message holds an observation of one or more landmarks 
///  detected by their range (distance) + bearing (2 or 3 angles) 
///  from some sensor on the robot.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObservationObject {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::Header,

    /// The sensor pose on the robot coordinates frame.
    pub sensor_pose_on_robot: geometry_msgs::msg::Pose,

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
    pub sensed_data: Vec<super::msg::SingleObjectObservation>,

}



impl Default for ObservationObject {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObservationObject::default())
  }
}

impl rosidl_runtime_rs::Message for ObservationObject {
  type RmwMsg = super::msg::rmw::ObservationObject;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_pose_on_robot: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.sensor_pose_on_robot)).into_owned(),
        min_sensor_distance: msg.min_sensor_distance,
        max_sensor_distance: msg.max_sensor_distance,
        sensor_std_range: msg.sensor_std_range,
        sensor_std_yaw: msg.sensor_std_yaw,
        sensor_std_pitch: msg.sensor_std_pitch,
        sensed_data: msg.sensed_data
          .into_iter()
          .map(|elem| super::msg::SingleObjectObservation::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        sensor_pose_on_robot: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sensor_pose_on_robot)).into_owned(),
      min_sensor_distance: msg.min_sensor_distance,
      max_sensor_distance: msg.max_sensor_distance,
      sensor_std_range: msg.sensor_std_range,
      sensor_std_yaw: msg.sensor_std_yaw,
      sensor_std_pitch: msg.sensor_std_pitch,
        sensed_data: msg.sensed_data
          .iter()
          .map(|elem| super::msg::SingleObjectObservation::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sensor_pose_on_robot: geometry_msgs::msg::Pose::from_rmw_message(msg.sensor_pose_on_robot),
      min_sensor_distance: msg.min_sensor_distance,
      max_sensor_distance: msg.max_sensor_distance,
      sensor_std_range: msg.sensor_std_range,
      sensor_std_yaw: msg.sensor_std_yaw,
      sensor_std_pitch: msg.sensor_std_pitch,
      sensed_data: msg.sensed_data
          .into_iter()
          .map(super::msg::SingleObjectObservation::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__SingleObjectObservation
/// int32 INVALID_LANDMARK_ID = -1

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleObjectObservation {
    /// Distance, in meters.
    pub range: f64,

    /// Angle wrt +Z (rads)
    pub yaw: f64,

    /// Angle wrt +Y (rads)
    pub pitch: f64,

    /// Pose in world space coordinates
    pub pose_wo: geometry_msgs::msg::Pose,

    /// Pose in sensor space coordinates
    pub pose_so: geometry_msgs::msg::Pose,

    /// Shape variables describing the object
    pub shape_variables: Vec<f32>,

    /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
    pub id: i32,

}



impl Default for SingleObjectObservation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SingleObjectObservation::default())
  }
}

impl rosidl_runtime_rs::Message for SingleObjectObservation {
  type RmwMsg = super::msg::rmw::SingleObjectObservation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        range: msg.range,
        yaw: msg.yaw,
        pitch: msg.pitch,
        pose_wo: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose_wo)).into_owned(),
        pose_so: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.pose_so)).into_owned(),
        shape_variables: msg.shape_variables.into(),
        id: msg.id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      range: msg.range,
      yaw: msg.yaw,
      pitch: msg.pitch,
        pose_wo: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose_wo)).into_owned(),
        pose_so: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose_so)).into_owned(),
        shape_variables: msg.shape_variables.as_slice().into(),
      id: msg.id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      range: msg.range,
      yaw: msg.yaw,
      pitch: msg.pitch,
      pose_wo: geometry_msgs::msg::Pose::from_rmw_message(msg.pose_wo),
      pose_so: geometry_msgs::msg::Pose::from_rmw_message(msg.pose_so),
      shape_variables: msg.shape_variables
          .into_iter()
          .collect(),
      id: msg.id,
    }
  }
}


// Corresponds to mrpt_msgs__msg__ObservationRangeBeacon
/// This message holds an observation of one or more landmarks 
///  detected by their range (distance) 
///  from some sensor on the robot.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObservationRangeBeacon {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::Header,

    /// The sensor pose on the robot coordinates frame.
    pub sensor_pose_on_robot: geometry_msgs::msg::Pose,

    /// Sensor characteristics:
    /// In meters (m)
    pub min_sensor_distance: f64,

    /// (m)
    pub max_sensor_distance: f64,

    /// Typical sensor noise:
    /// (m)
    pub sensor_std_range: f64,

    /// The vector of individual observations
    pub sensed_data: Vec<super::msg::SingleRangeBeaconObservation>,

}



impl Default for ObservationRangeBeacon {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObservationRangeBeacon::default())
  }
}

impl rosidl_runtime_rs::Message for ObservationRangeBeacon {
  type RmwMsg = super::msg::rmw::ObservationRangeBeacon;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_pose_on_robot: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.sensor_pose_on_robot)).into_owned(),
        min_sensor_distance: msg.min_sensor_distance,
        max_sensor_distance: msg.max_sensor_distance,
        sensor_std_range: msg.sensor_std_range,
        sensed_data: msg.sensed_data
          .into_iter()
          .map(|elem| super::msg::SingleRangeBeaconObservation::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        sensor_pose_on_robot: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sensor_pose_on_robot)).into_owned(),
      min_sensor_distance: msg.min_sensor_distance,
      max_sensor_distance: msg.max_sensor_distance,
      sensor_std_range: msg.sensor_std_range,
        sensed_data: msg.sensed_data
          .iter()
          .map(|elem| super::msg::SingleRangeBeaconObservation::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sensor_pose_on_robot: geometry_msgs::msg::Pose::from_rmw_message(msg.sensor_pose_on_robot),
      min_sensor_distance: msg.min_sensor_distance,
      max_sensor_distance: msg.max_sensor_distance,
      sensor_std_range: msg.sensor_std_range,
      sensed_data: msg.sensed_data
          .into_iter()
          .map(super::msg::SingleRangeBeaconObservation::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__ObservationRangeBearing
/// This message holds an observation of one or more landmarks 
///  detected by their range (distance) + bearing (2 or 3 angles) 
///  from some sensor on the robot.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ObservationRangeBearing {
    /// Time of sensor data acquisition, coordinate frame ID.
    pub header: std_msgs::msg::Header,

    /// The sensor pose on the robot coordinates frame.
    pub sensor_pose_on_robot: geometry_msgs::msg::Pose,

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
    pub sensed_data: Vec<super::msg::SingleRangeBearingObservation>,

}



impl Default for ObservationRangeBearing {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ObservationRangeBearing::default())
  }
}

impl rosidl_runtime_rs::Message for ObservationRangeBearing {
  type RmwMsg = super::msg::rmw::ObservationRangeBearing;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_pose_on_robot: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.sensor_pose_on_robot)).into_owned(),
        min_sensor_distance: msg.min_sensor_distance,
        max_sensor_distance: msg.max_sensor_distance,
        sensor_std_range: msg.sensor_std_range,
        sensor_std_yaw: msg.sensor_std_yaw,
        sensor_std_pitch: msg.sensor_std_pitch,
        sensed_data: msg.sensed_data
          .into_iter()
          .map(|elem| super::msg::SingleRangeBearingObservation::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        sensor_pose_on_robot: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.sensor_pose_on_robot)).into_owned(),
      min_sensor_distance: msg.min_sensor_distance,
      max_sensor_distance: msg.max_sensor_distance,
      sensor_std_range: msg.sensor_std_range,
      sensor_std_yaw: msg.sensor_std_yaw,
      sensor_std_pitch: msg.sensor_std_pitch,
        sensed_data: msg.sensed_data
          .iter()
          .map(|elem| super::msg::SingleRangeBearingObservation::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sensor_pose_on_robot: geometry_msgs::msg::Pose::from_rmw_message(msg.sensor_pose_on_robot),
      min_sensor_distance: msg.min_sensor_distance,
      max_sensor_distance: msg.max_sensor_distance,
      sensor_std_range: msg.sensor_std_range,
      sensor_std_yaw: msg.sensor_std_yaw,
      sensor_std_pitch: msg.sensor_std_pitch,
      sensed_data: msg.sensed_data
          .into_iter()
          .map(super::msg::SingleRangeBearingObservation::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__msg__SingleRangeBeaconObservation
/// int32 INVALID_LANDMARK_ID = -1

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SingleRangeBeaconObservation {
    /// Distance, in meters.
    pub range: f64,

    /// Landmark ID (or INVALID_LANDMARK_ID if landmarks are not identified)
    pub id: i32,

}



impl Default for SingleRangeBeaconObservation {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SingleRangeBeaconObservation::default())
  }
}

impl rosidl_runtime_rs::Message for SingleRangeBeaconObservation {
  type RmwMsg = super::msg::rmw::SingleRangeBeaconObservation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        range: msg.range,
        id: msg.id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      range: msg.range,
      id: msg.id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      range: msg.range,
      id: msg.id,
    }
  }
}


// Corresponds to mrpt_msgs__msg__SingleRangeBearingObservation
/// int32 INVALID_LANDMARK_ID = -1

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SingleRangeBearingObservation::default())
  }
}

impl rosidl_runtime_rs::Message for SingleRangeBearingObservation {
  type RmwMsg = super::msg::rmw::SingleRangeBearingObservation;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        range: msg.range,
        yaw: msg.yaw,
        pitch: msg.pitch,
        id: msg.id,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      range: msg.range,
      yaw: msg.yaw,
      pitch: msg.pitch,
      id: msg.id,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      range: msg.range,
      yaw: msg.yaw,
      pitch: msg.pitch,
      id: msg.id,
    }
  }
}


