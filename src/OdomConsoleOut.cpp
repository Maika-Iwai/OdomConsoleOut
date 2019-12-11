// -*- C++ -*-
/*!
 * @file  OdomConsoleOut.cpp
 * @brief Display odometry of RGB-D sensor
 * @date $Date$
 *
 * $Id$
 */

#include "OdomConsoleOut.h"

// Module specification
// <rtc-template block="module_spec">
static const char* odomconsoleout_spec[] =
  {
    "implementation_id", "OdomConsoleOut",
    "type_name",         "OdomConsoleOut",
    "description",       "Display odometry of RGB-D sensor",
    "version",           "1.0.0",
    "vendor",            "Maika Iwai, Robot System Design Laboratory, Meijo University",
    "category",          "ImageProcessing",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
OdomConsoleOut::OdomConsoleOut(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_pose3DQuaternionIn("Pose3DQuaternion", m_pose3DQuaternion)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
OdomConsoleOut::~OdomConsoleOut()
{
}



RTC::ReturnCode_t OdomConsoleOut::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("Pose3DQuaternion", m_pose3DQuaternionIn);
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}


RTC::ReturnCode_t OdomConsoleOut::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t OdomConsoleOut::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t OdomConsoleOut::onExecute(RTC::UniqueId ec_id)
{
  if(m_pose3DQuaternionIn.isNew()){
    m_pose3DQuaternionIn.read();
    
    printf("\r(px, py, pz, tx, ty, tz, tw) = (%5.2f, %5.2f, %5.2f, %5.2f, %5.2f, %5.2f)", m_pose3DQuaternion.point3D.x, m_pose3DQuaternion.point3D.y, m_pose3DQuaternion.point3D.z, m_pose3DQuaternion.quaternion.x, m_pose3DQuaternion.quaternion.y, m_pose3DQuaternion.quaternion.z, m_pose3DQuaternion.quaternion.w);
    
  }
  
  return RTC::RTC_OK;
}



extern "C"
{
 
  void OdomConsoleOutInit(RTC::Manager* manager)
  {
    coil::Properties profile(odomconsoleout_spec);
    manager->registerFactory(profile,
                             RTC::Create<OdomConsoleOut>,
                             RTC::Delete<OdomConsoleOut>);
  }
  
};


