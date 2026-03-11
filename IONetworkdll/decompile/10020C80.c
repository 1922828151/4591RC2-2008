/*
 * func-name: sub_10020C80
 * func-address: 0x10020c80
 * callers: 0x100205e0
 * callees: 0x1000de20
 */

_DWORD *__stdcall sub_10020C80(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  sub_1000DE20(a1);
  *a1 = &Outpop::IONetwork::Asynch_IO_Write_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Wait_Stream_Channel<Outpop::IONetwork::Stream_Connector,Outpop::IONetwork::Connect_Bluider_Process>>>::`vftable';
  a1[12] = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  a1[14] = 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
