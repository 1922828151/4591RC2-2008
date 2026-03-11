/*
 * func-name: sub_1020BC10
 * func-address: 0x1020bc10
 * callers: 0x1000a736
 * callees: none
 */

void __thiscall sub_1020BC10(Outpop::Utility::Ref_Object *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *(_DWORD *)this = &GameClient::P2PChat_Thread_Message::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)*((_DWORD *)this + 2);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  *(_DWORD *)this = Outpop::Utility::Thread_Message::`vftable';
  Outpop::Utility::Ref_Object::~Ref_Object(this);
}
