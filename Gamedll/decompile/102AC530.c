/*
 * func-name: sub_102AC530
 * func-address: 0x102ac530
 * callers: 0x1001717f
 * callees: none
 */

void __thiscall sub_102AC530(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *this = &Ping_Manager::`vftable';
  Outpop::Utility::Lock::~Lock((Outpop::Utility::Lock *)(this + 4));
  v2 = (Outpop::Utility::Ref_Object *)this[3];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Message::Message_Handler::~Message_Handler((Outpop::Message::Message_Handler *)this);
}
