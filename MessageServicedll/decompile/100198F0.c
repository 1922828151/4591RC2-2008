/*
 * func-name: sub_100198F0
 * func-address: 0x100198f0
 * callers: 0x100198d0, 0x10019a80, 0x10019af0, 0x10019e50, 0x10019ef0
 * callees: 0x10006f70
 */

void __thiscall sub_100198F0(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx

  *this = &Outpop::Message::Group_Item::`vftable';
  Outpop::Utility::Lock::~Lock((Outpop::Utility::Lock *)(this + 15));
  sub_10006F70((int)(this + 4));
  v2 = (Outpop::Utility::Ref_Object *)this[3];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)this[2];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  Outpop::Utility::Timer_Handler::~Timer_Handler((Outpop::Utility::Timer_Handler *)this);
}
