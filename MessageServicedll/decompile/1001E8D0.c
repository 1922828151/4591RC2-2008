/*
 * func-name: sub_1001E8D0
 * func-address: 0x1001e8d0
 * callers: 0x1001e960
 * callees: none
 */

void __thiscall sub_1001E8D0(Outpop::Utility::Thread_Message *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::Message::Handler_Manager_TM::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 3);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Thread_Message::~Thread_Message(this);
}
