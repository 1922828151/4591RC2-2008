/*
 * func-name: sub_10020E50
 * func-address: 0x10020e50
 * callers: 0x100210a0
 * callees: none
 */

int __thiscall sub_10020E50(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Read_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Simple_Wait_Stream_Channel<Outpop::IONetwork::Stream_Connector>>>::`vftable';
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
