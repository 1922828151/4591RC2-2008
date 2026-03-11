/*
 * func-name: sub_1000E270
 * func-address: 0x1000e270
 * callers: 0x1000e2e0
 * callees: none
 */

void __thiscall sub_1000E270(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *this = &Outpop::P2P::Register_Timed_WIN32_IOCP_Result<Outpop::P2P::Timed_WIN32_IOCP<Outpop::Utility::Null_Lock>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[8];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
