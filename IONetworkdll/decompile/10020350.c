/*
 * func-name: sub_10020350
 * func-address: 0x10020350
 * callers: 0x1001ee70
 * callees: 0x10002600, 0x1000de20
 */

_DWORD *__stdcall sub_10020350(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  sub_1000DE20(a1);
  *a1 = &Outpop::IONetwork::Asynch_IO_Connect_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Stream_Connector>>::`vftable';
  a1[11] = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 12));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 19));
  a1[26] = 0;
  a1[28] = 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
