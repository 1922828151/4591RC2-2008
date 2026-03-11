/*
 * func-name: sub_1004D960
 * func-address: 0x1004d960
 * callers: 0x1004dac0
 * callees: none
 */

int __thiscall sub_1004D960(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Dgram_Write_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::P2PUdpBuilder>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[22];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)this[20];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  this[10] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[10] = &Outpop::IONetwork::Addr::`vftable';
  result = -1;
  *this = &Outpop::IONetwork::Asynch_IO_Result::`vftable';
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  return result;
}
