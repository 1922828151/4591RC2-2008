/*
 * func-name: sub_1000ED30
 * func-address: 0x1000ed30
 * callers: 0x1000edc0
 * callees: none
 */

void __thiscall sub_1000ED30(_DWORD *this)
{
  int v2; // eax

  *this = &Outpop::P2P::UPNP_State_Change_Result::`vftable';
  v2 = this[7];
  if ( v2 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)(v2 + 76));
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
