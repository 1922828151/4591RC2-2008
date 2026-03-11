/*
 * func-name: sub_1000EE60
 * func-address: 0x1000ee60
 * callers: 0x1000eef0
 * callees: none
 */

void __thiscall sub_1000EE60(_DWORD *this)
{
  int v2; // eax

  *this = &Outpop::P2P::UPNP_Map_Succeed_Result::`vftable';
  v2 = this[7];
  if ( v2 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v2 + 76));
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
