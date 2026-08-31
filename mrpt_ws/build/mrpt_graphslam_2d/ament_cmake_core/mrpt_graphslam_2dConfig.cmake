# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mrpt_graphslam_2d_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mrpt_graphslam_2d_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mrpt_graphslam_2d_FOUND FALSE)
  elseif(NOT mrpt_graphslam_2d_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mrpt_graphslam_2d_FOUND FALSE)
  endif()
  return()
endif()
set(_mrpt_graphslam_2d_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mrpt_graphslam_2d_FIND_QUIETLY)
  message(STATUS "Found mrpt_graphslam_2d: 0.1.20 (${mrpt_graphslam_2d_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mrpt_graphslam_2d' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT mrpt_graphslam_2d_DEPRECATED_QUIET)
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mrpt_graphslam_2d_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mrpt_graphslam_2d_DIR}/${_extra}")
endforeach()
