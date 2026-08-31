#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__srv__GetCMGraph_Request() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__srv__GetCMGraph_Request__init(msg: *mut GetCMGraph_Request) -> bool;
    fn mrpt_msgs__srv__GetCMGraph_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCMGraph_Request>, size: usize) -> bool;
    fn mrpt_msgs__srv__GetCMGraph_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCMGraph_Request>);
    fn mrpt_msgs__srv__GetCMGraph_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCMGraph_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCMGraph_Request>) -> bool;
}

// Corresponds to mrpt_msgs__srv__GetCMGraph_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCMGraph_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_ids: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for GetCMGraph_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__srv__GetCMGraph_Request__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__srv__GetCMGraph_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCMGraph_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__srv__GetCMGraph_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__srv__GetCMGraph_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__srv__GetCMGraph_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCMGraph_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCMGraph_Request where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/srv/GetCMGraph_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__srv__GetCMGraph_Request() }
  }
}


#[link(name = "mrpt_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__srv__GetCMGraph_Response() -> *const std::ffi::c_void;
}

#[link(name = "mrpt_msgs__rosidl_generator_c")]
extern "C" {
    fn mrpt_msgs__srv__GetCMGraph_Response__init(msg: *mut GetCMGraph_Response) -> bool;
    fn mrpt_msgs__srv__GetCMGraph_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetCMGraph_Response>, size: usize) -> bool;
    fn mrpt_msgs__srv__GetCMGraph_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetCMGraph_Response>);
    fn mrpt_msgs__srv__GetCMGraph_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetCMGraph_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetCMGraph_Response>) -> bool;
}

// Corresponds to mrpt_msgs__srv__GetCMGraph_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetCMGraph_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub cm_graph: super::super::msg::rmw::NetworkOfPoses,

}



impl Default for GetCMGraph_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !mrpt_msgs__srv__GetCMGraph_Response__init(&mut msg as *mut _) {
        panic!("Call to mrpt_msgs__srv__GetCMGraph_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetCMGraph_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__srv__GetCMGraph_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__srv__GetCMGraph_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { mrpt_msgs__srv__GetCMGraph_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetCMGraph_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetCMGraph_Response where Self: Sized {
  const TYPE_NAME: &'static str = "mrpt_msgs/srv/GetCMGraph_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__mrpt_msgs__srv__GetCMGraph_Response() }
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


