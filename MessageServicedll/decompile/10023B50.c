/*
 * func-name: sub_10023B50
 * func-address: 0x10023b50
 * callers: 0x10023bc0
 * callees: none
 */

void __thiscall sub_10023B50(Outpop::Utility::Thread_Message *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::Message::Dispatch_App_Handler::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 3);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Thread_Message::~Thread_Message(this);
}
