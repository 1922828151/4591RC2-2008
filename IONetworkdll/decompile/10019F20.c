/*
 * func-name: sub_10019F20
 * func-address: 0x10019f20
 * callers: 0x1001a890
 * callees: 0x100162c0
 */

void __thiscall sub_10019F20(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *this = &Outpop::IONetwork::Simple_Wait_Stream_Channel<Outpop::IONetwork::Stream_Acceptor>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[38];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  if ( this[34] != -1 )
    closesocket(this[34]);
  this[27] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[27] = &Outpop::IONetwork::Addr::`vftable';
  this[20] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[20] = &Outpop::IONetwork::Addr::`vftable';
  sub_100162C0(this);
}
