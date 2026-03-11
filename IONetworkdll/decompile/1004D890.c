/*
 * func-name: sub_1004D890
 * func-address: 0x1004d890
 * callers: 0x1004daa0
 * callees: none
 */

int __thiscall sub_1004D890(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Dgram_Read_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::P2PUdpBuilder>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[22];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  this[15] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[15] = &Outpop::IONetwork::Addr::`vftable';
  v3 = (Outpop::Utility::Ref_Object *)this[14];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  result = -1;
  *this = &Outpop::IONetwork::Asynch_IO_Result::`vftable';
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  return result;
}
