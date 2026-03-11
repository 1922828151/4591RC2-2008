/*
 * func-name: sub_100162C0
 * func-address: 0x100162c0
 * callers: 0x100163e0, 0x100192b0, 0x100195e0, 0x10019db0, 0x10019f20, 0x1001f2c0, 0x1001f610, 0x1001fde0, 0x1001ff50
 * callees: none
 */

void __thiscall sub_100162C0(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *this = &Outpop::IONetwork::Wait_Channel::`vftable';
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(this + 17));
  this[10] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[10] = &Outpop::IONetwork::Addr::`vftable';
  this[3] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[3] = &Outpop::IONetwork::Addr::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[2];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Ref_Object::~Ref_Object((Outpop::Utility::Ref_Object *)this);
}
