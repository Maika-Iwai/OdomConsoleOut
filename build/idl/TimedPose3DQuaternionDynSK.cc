// This file is generated by omniidl (C++ backend) - omniORB_4_2. Do not edit.

#include "TimedPose3DQuaternion.hh"

OMNI_USING_NAMESPACE(omni)

static const char* _0RL_dyn_library_version = omniORB_4_2_dyn;

static ::CORBA::TypeCode::_Tracker _0RL_tcTrack(__FILE__);

static CORBA::PR_structMember _0RL_structmember_RTC_mTime[] = {
  {"sec", CORBA::TypeCode::PR_ulong_tc()},
  {"nsec", CORBA::TypeCode::PR_ulong_tc()}
};

#ifdef _0RL_tc_RTC_mTime
#  undef _0RL_tc_RTC_mTime
#endif
static CORBA::TypeCode_ptr _0RL_tc_RTC_mTime = CORBA::TypeCode::PR_struct_tc("IDL:RTC/Time:1.0", "Time", _0RL_structmember_RTC_mTime, 2, &_0RL_tcTrack);

static CORBA::PR_structMember _0RL_structmember_RTC_mPoint3D[] = {
  {"x", CORBA::TypeCode::PR_double_tc()},
  {"y", CORBA::TypeCode::PR_double_tc()},
  {"z", CORBA::TypeCode::PR_double_tc()}
};

#ifdef _0RL_tc_RTC_mPoint3D
#  undef _0RL_tc_RTC_mPoint3D
#endif
static CORBA::TypeCode_ptr _0RL_tc_RTC_mPoint3D = CORBA::TypeCode::PR_struct_tc("IDL:RTC/Point3D:1.0", "Point3D", _0RL_structmember_RTC_mPoint3D, 3, &_0RL_tcTrack);

static CORBA::PR_structMember _0RL_structmember_RTC_mQuaternion[] = {
  {"x", CORBA::TypeCode::PR_double_tc()},
  {"y", CORBA::TypeCode::PR_double_tc()},
  {"z", CORBA::TypeCode::PR_double_tc()},
  {"w", CORBA::TypeCode::PR_double_tc()}
};

#ifdef _0RL_tc_RTC_mQuaternion
#  undef _0RL_tc_RTC_mQuaternion
#endif
static CORBA::TypeCode_ptr _0RL_tc_RTC_mQuaternion = CORBA::TypeCode::PR_struct_tc("IDL:RTC/Quaternion:1.0", "Quaternion", _0RL_structmember_RTC_mQuaternion, 4, &_0RL_tcTrack);

static CORBA::PR_structMember _0RL_structmember_RTC_mTimedPose3DQuaternion[] = {
  {"tm", _0RL_tc_RTC_mTime},
  {"point3D", _0RL_tc_RTC_mPoint3D},
  {"quaternion", _0RL_tc_RTC_mQuaternion}
};

#ifdef _0RL_tc_RTC_mTimedPose3DQuaternion
#  undef _0RL_tc_RTC_mTimedPose3DQuaternion
#endif
static CORBA::TypeCode_ptr _0RL_tc_RTC_mTimedPose3DQuaternion = CORBA::TypeCode::PR_struct_tc("IDL:RTC/TimedPose3DQuaternion:1.0", "TimedPose3DQuaternion", _0RL_structmember_RTC_mTimedPose3DQuaternion, 3, &_0RL_tcTrack);




#if defined(HAS_Cplusplus_Namespace) && defined(_MSC_VER)
// MSVC++ does not give the constant external linkage otherwise.
namespace RTC { 
  const ::CORBA::TypeCode_ptr _tc_TimedPose3DQuaternion = _0RL_tc_RTC_mTimedPose3DQuaternion;
} 
#else
const ::CORBA::TypeCode_ptr RTC::_tc_TimedPose3DQuaternion = _0RL_tc_RTC_mTimedPose3DQuaternion;
#endif


static void _0RL_RTC_mTimedPose3DQuaternion_marshal_fn(cdrStream& _s, void* _v)
{
  RTC::TimedPose3DQuaternion* _p = (RTC::TimedPose3DQuaternion*)_v;
  *_p >>= _s;
}
static void _0RL_RTC_mTimedPose3DQuaternion_unmarshal_fn(cdrStream& _s, void*& _v)
{
  RTC::TimedPose3DQuaternion* _p = new RTC::TimedPose3DQuaternion;
  *_p <<= _s;
  _v = _p;
}
static void _0RL_RTC_mTimedPose3DQuaternion_destructor_fn(void* _v)
{
  RTC::TimedPose3DQuaternion* _p = (RTC::TimedPose3DQuaternion*)_v;
  delete _p;
}

void operator<<=(::CORBA::Any& _a, const RTC::TimedPose3DQuaternion& _s)
{
  RTC::TimedPose3DQuaternion* _p = new RTC::TimedPose3DQuaternion(_s);
  _a.PR_insert(_0RL_tc_RTC_mTimedPose3DQuaternion,
               _0RL_RTC_mTimedPose3DQuaternion_marshal_fn,
               _0RL_RTC_mTimedPose3DQuaternion_destructor_fn,
               _p);
}
void operator<<=(::CORBA::Any& _a, RTC::TimedPose3DQuaternion* _sp)
{
  _a.PR_insert(_0RL_tc_RTC_mTimedPose3DQuaternion,
               _0RL_RTC_mTimedPose3DQuaternion_marshal_fn,
               _0RL_RTC_mTimedPose3DQuaternion_destructor_fn,
               _sp);
}

::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, RTC::TimedPose3DQuaternion*& _sp)
{
  return _a >>= (const RTC::TimedPose3DQuaternion*&) _sp;
}
::CORBA::Boolean operator>>=(const ::CORBA::Any& _a, const RTC::TimedPose3DQuaternion*& _sp)
{
  void* _v;
  if (_a.PR_extract(_0RL_tc_RTC_mTimedPose3DQuaternion,
                    _0RL_RTC_mTimedPose3DQuaternion_unmarshal_fn,
                    _0RL_RTC_mTimedPose3DQuaternion_marshal_fn,
                    _0RL_RTC_mTimedPose3DQuaternion_destructor_fn,
                    _v)) {
    _sp = (const RTC::TimedPose3DQuaternion*)_v;
    return 1;
  }
  return 0;
}
