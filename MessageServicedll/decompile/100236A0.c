/*
 * func-name: sub_100236A0
 * func-address: 0x100236a0
 * callers: 0x100237f0
 * callees: 0x10023530
 */

void __thiscall sub_100236A0(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *this = &Outpop::Message::Request_Ack::SSynchRequestAckItem::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[10];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Manual_Event::~Manual_Event((Outpop::Utility::Manual_Event *)(this + 7));
  sub_10023530((Outpop::Utility::Timer_Handler *)this);
}
