/*
 * func-name: sub_1002ACB0
 * func-address: 0x1002acb0
 * callers: 0x1002b9b0
 * callees: none
 */

void __thiscall sub_1002ACB0(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx

  *this = &Outpop::IONetwork::Simple_Wait_Dgram_Channel<Outpop::IONetwork::Dgram_Acceptor>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[26];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(this + 24));
  v3 = (Outpop::Utility::Ref_Object *)this[22];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  if ( this[17] != -1 )
    closesocket(this[17]);
  this[10] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[10] = &Outpop::IONetwork::Addr::`vftable';
  this[3] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[3] = &Outpop::IONetwork::Addr::`vftable';
  Outpop::Utility::Ref_Object::~Ref_Object((Outpop::Utility::Ref_Object *)this);
}
