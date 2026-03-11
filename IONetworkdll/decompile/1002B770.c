/*
 * func-name: sub_1002B770
 * func-address: 0x1002b770
 * callers: 0x1002b9f0
 * callees: none
 */

int __thiscall sub_1002B770(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Dgram_Write_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Dgram_Acceptor>>::`vftable';
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
