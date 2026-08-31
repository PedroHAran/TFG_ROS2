#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to mrpt_msgs__srv__GetCMGraph_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCMGraph_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_ids: Vec<u64>,

}



impl Default for GetCMGraph_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCMGraph_Request::default())
  }
}

impl rosidl_runtime_rs::Message for GetCMGraph_Request {
  type RmwMsg = super::srv::rmw::GetCMGraph_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_ids: msg.node_ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_ids: msg.node_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_ids: msg.node_ids
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to mrpt_msgs__srv__GetCMGraph_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCMGraph_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cm_graph: super::msg::NetworkOfPoses,

}



impl Default for GetCMGraph_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::GetCMGraph_Response::default())
  }
}

impl rosidl_runtime_rs::Message for GetCMGraph_Response {
  type RmwMsg = super::srv::rmw::GetCMGraph_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cm_graph: super::msg::NetworkOfPoses::into_rmw_message(std::borrow::Cow::Owned(msg.cm_graph)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        cm_graph: super::msg::NetworkOfPoses::into_rmw_message(std::borrow::Cow::Borrowed(&msg.cm_graph)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      cm_graph: super::msg::NetworkOfPoses::from_rmw_message(msg.cm_graph),
    }
  }
}






#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__mrpt_msgs__srv__GetCMGraph() -> *const std::ffi::c_void;
}

// Corresponds to mrpt_msgs__srv__GetCMGraph
#[allow(missing_docs, non_camel_case_types)]
pub struct GetCMGraph;

impl rosidl_runtime_rs::Service for GetCMGraph {
    type Request = GetCMGraph_Request;
    type Response = GetCMGraph_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__mrpt_msgs__srv__GetCMGraph() }
    }
}


