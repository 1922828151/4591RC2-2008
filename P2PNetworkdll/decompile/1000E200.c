/*
 * func-name: sub_1000E200
 * func-address: 0x1000e200
 * callers: 0x1000d5a0
 * callees: none
 */

_DWORD *__fastcall sub_1000E200(int a1, Outpop::Utility::Ref_Object **a2, _DWORD *a3)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  bool v4; // zf

  a3[6] = 0;
  a3[5] = 0;
  a3[1] = 0;
  a3[2] = 0;
  a3[4] = 0;
  a3[3] = 0;
  *a3 = &Outpop::P2P::Register_Timed_WIN32_IOCP_Result<Outpop::P2P::Timed_WIN32_IOCP<Outpop::Utility::Null_Lock>>::`vftable';
  a3[7] = a1;
  v3 = *a2;
  v4 = *a2 == 0;
  a3[8] = *a2;
  if ( !v4 )
    Outpop::Utility::Ref_Object::addref(v3);
  return a3;
}
