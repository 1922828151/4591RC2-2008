/*
 * func-name: sub_10015AE0
 * func-address: 0x10015ae0
 * callers: 0x10015700
 * callees: 0x1000de20
 */

_DWORD *__stdcall sub_10015AE0(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  sub_1000DE20(a1);
  *a1 = &Outpop::IONetwork::Asynch_IO_Write_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Stream_Channel>>::`vftable';
  a1[12] = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  a1[14] = 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
