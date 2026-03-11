/*
 * func-name: sub_1002B6A0
 * func-address: 0x1002b6a0
 * callers: 0x1002b9d0
 * callees: none
 */

int __thiscall sub_1002B6A0(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Dgram_Read_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Dgram_Acceptor>>::`vftable';
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
