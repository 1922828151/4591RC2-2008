/*
 * func-name: sub_102AEDF0
 * func-address: 0x102aedf0
 * callers: 0x10010c44
 * callees: none
 */

void __thiscall sub_102AEDF0(Outpop::Utility::Task *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &GameClient::Chat_Task::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 20);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Task::~Task(this);
}
