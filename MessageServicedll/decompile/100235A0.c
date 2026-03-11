/*
 * func-name: sub_100235A0
 * func-address: 0x100235a0
 * callers: 0x100237c0
 * callees: 0x10023530
 */

void __thiscall sub_100235A0(Outpop::Utility::Timer_Handler *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::Message::Request_Ack::SAsynchRequestAckItem::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 7);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  sub_10023530(this);
}
