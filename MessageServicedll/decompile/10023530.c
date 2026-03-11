/*
 * func-name: sub_10023530
 * func-address: 0x10023530
 * callers: 0x100235a0, 0x10023610, 0x100236a0, 0x10023720, 0x100237a0
 * callees: none
 */

void __thiscall sub_10023530(Outpop::Utility::Timer_Handler *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::Message::Request_Ack::SRequestAckItem::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 2);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Timer_Handler::~Timer_Handler(this);
}
