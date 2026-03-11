/*
 * func-name: sub_10014B00
 * func-address: 0x10014b00
 * callers: 0x10014dc0
 * callees: none
 */

int __thiscall sub_10014B00(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Read_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Stream_Channel>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[13];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  v3 = (Outpop::Utility::Ref_Object *)this[12];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  result = -1;
  *this = &Outpop::IONetwork::Asynch_IO_Result::`vftable';
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  return result;
}
