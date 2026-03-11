/*
 * func-name: sub_1004E6D0
 * func-address: 0x1004e6d0
 * callers: 0x1004e2b0
 * callees: 0x10002600, 0x1000de20
 */

_DWORD *__stdcall sub_1004E6D0(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  sub_1000DE20(a1);
  *a1 = &Outpop::IONetwork::Asynch_IO_Dgram_Write_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::P2PUdpBuilder>>::`vftable';
  a1[9] = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 10));
  a1[20] = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  a1[22] = 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
