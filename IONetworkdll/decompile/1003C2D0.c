/*
 * func-name: sub_1003C2D0
 * func-address: 0x1003c2d0
 * callers: 0x1003be90
 * callees: 0x10002600, 0x1000de20
 */

_DWORD *__stdcall sub_1003C2D0(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  sub_1000DE20(a1);
  *a1 = &Outpop::IONetwork::Asynch_IO_Dgram_Write_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Dgram_Connector>>::`vftable';
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
