/*
 * func-name: sub_1001B650
 * func-address: 0x1001b650
 * callers: 0x1001ba60
 * callees: none
 */

int __thiscall sub_1001B650(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx
  int result; // eax

  *this = &Outpop::IONetwork::Asynch_IO_Write_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Wait_Stream_Channel<Outpop::IONetwork::Stream_Acceptor,Outpop::IONetwork::Accept_Bluider_Process>>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[14];
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
