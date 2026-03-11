/*
 * func-name: sub_10034560
 * func-address: 0x10034560
 * callers: 0x10031810
 * callees: none
 */

_DWORD *__stdcall sub_10034560(_DWORD *a1, Outpop::Utility::Ref_Object *a2)
{
  *a1 = &Outpop::IONetwork::Asynch_Result::`vftable';
  a1[6] = 0;
  a1[5] = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[4] = 0;
  a1[3] = 0;
  *a1 = &Outpop::IONetwork::Asynch_Timer_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Dgram_Channel>>::`vftable';
  a1[7] = a2;
  if ( a2 )
    Outpop::Utility::Ref_Object::addref(a2);
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(a1 + 8));
  Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)(a1 + 10));
  a1[12] = 0;
  a1[13] = 0;
  if ( a2 )
    Outpop::Utility::Ref_Object::release(a2);
  return a1;
}
