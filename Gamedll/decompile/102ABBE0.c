/*
 * func-name: sub_102ABBE0
 * func-address: 0x102abbe0
 * callers: 0x10018340
 * callees: 0x102c9d50
 */

Outpop::Utility::Ref_Object *__thiscall sub_102ABBE0(Outpop::Utility::Ref_Object *this, char a2)
{
  *(_DWORD *)this = &Ping_Manager::Ping_Handler::`vftable';
  *(_DWORD *)this = Outpop::Utility::Timer_Handler::`vftable';
  Outpop::Utility::Ref_Object::~Ref_Object(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
