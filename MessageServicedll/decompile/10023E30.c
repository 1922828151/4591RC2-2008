/*
 * func-name: sub_10023E30
 * func-address: 0x10023e30
 * callers: 0x10023ee0
 * callees: none
 */

void __thiscall sub_10023E30(Outpop::Utility::Thread_Message *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  *(_DWORD *)this = &Outpop::Message::Dispatch_App_Ack_Handler::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 5);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 4);
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 3);
  if ( v4 )
    Outpop::Utility::Ref_Object::release(v4);
  Outpop::Utility::Thread_Message::~Thread_Message(this);
}
