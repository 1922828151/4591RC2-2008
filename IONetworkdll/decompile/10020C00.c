/*
 * func-name: sub_10020C00
 * func-address: 0x10020c00
 * callers: 0x10021040
 * callees: none
 */

int __thiscall sub_10020C00(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Read_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Wait_Stream_Channel<Outpop::IONetwork::Stream_Connector,Outpop::IONetwork::Connect_Bluider_Process>>>::`vftable';
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
