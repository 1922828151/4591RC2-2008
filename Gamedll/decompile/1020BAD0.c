/*
 * func-name: sub_1020BAD0
 * func-address: 0x1020bad0
 * callers: 0x1001041a
 * callees: none
 */

Outpop::Utility::Ref_Object *__thiscall sub_1020BAD0(
        Outpop::Utility::Ref_Object *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  bool v4; // zf

  Outpop::Utility::Ref_Object::Ref_Object(this);
  *(_DWORD *)this = &GameClient::P2PChat_Thread_Message::`vftable';
  v3 = *a2;
  v4 = *a2 == 0;
  *((_DWORD *)this + 2) = *a2;
  if ( !v4 )
    Outpop::Utility::Ref_Object::addref(v3);
  return this;
}
