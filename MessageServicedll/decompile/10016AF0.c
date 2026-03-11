/*
 * func-name: sub_10016AF0
 * func-address: 0x10016af0
 * callers: 0x10016b60
 * callees: none
 */

void __thiscall sub_10016AF0(Outpop::Utility::Thread_Message *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &Outpop::Message::Disptch_Simple_Message::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 3);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Thread_Message::~Thread_Message(this);
}
