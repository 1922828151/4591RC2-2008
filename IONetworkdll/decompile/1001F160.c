/*
 * func-name: sub_1001F160
 * func-address: 0x1001f160
 * callers: 0x100202f0
 * callees: none
 */

int __thiscall sub_1001F160(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Connect_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Stream_Connector>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[26];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  this[19] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[19] = &Outpop::IONetwork::Addr::`vftable';
  this[12] = &Outpop::IONetwork::INET_Addr::`vftable';
  this[12] = &Outpop::IONetwork::Addr::`vftable';
  v3 = (Outpop::Utility::Ref_Object *)this[11];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  result = -1;
  *this = &Outpop::IONetwork::Asynch_IO_Result::`vftable';
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  return result;
}
