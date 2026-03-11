/*
 * func-name: sub_1001B3D0
 * func-address: 0x1001b3d0
 * callers: 0x1001aac0
 * callees: 0x1000de20
 */

_DWORD *__stdcall sub_1001B3D0(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  sub_1000DE20(a1);
  *a1 = &Outpop::IONetwork::Asynch_IO_Accpet_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Stream_Acceptor>>::`vftable';
  a1[9] = 0;
  a1[13] = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  a1[15] = socket(2, 1, 0);
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
