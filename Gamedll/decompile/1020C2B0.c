/*
 * func-name: sub_1020C2B0
 * func-address: 0x1020c2b0
 * callers: 0x10009a02
 * callees: 0x102c9d50
 */

void __thiscall sub_1020C2B0(void *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &GameClient::Send_P2P_Message_Result::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 12);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  if ( *((_DWORD *)this + 8) )
    operator delete(*((void **)this + 8));
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_DWORD *)this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
