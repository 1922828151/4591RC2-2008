/*
 * func-name: sub_1001B470
 * func-address: 0x1001b470
 * callers: 0x1001acf0
 * callees: 0x1000de20
 */

_DWORD *__stdcall sub_1001B470(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  sub_1000DE20(a1);
  *a1 = &Outpop::IONetwork::Asynch_IO_Read_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Wait_Stream_Channel<Outpop::IONetwork::Stream_Acceptor,Outpop::IONetwork::Accept_Bluider_Process>>>::`vftable';
  a1[9] = 0;
  a1[12] = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  a1[13] = 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
