/*
 * func-name: sub_10034620
 * func-address: 0x10034620
 * callers: 0x10034710
 * callees: none
 */

void __thiscall sub_10034620(_DWORD *this)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx

  *this = &Outpop::IONetwork::Asynch_Timer_Result<Outpop::Utility::Smart_Ptr<Outpop::IONetwork::Dgram_Channel>>::`vftable';
  v2 = (Outpop::Utility::Ref_Object *)this[12];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(this + 10));
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(this + 8));
  v3 = (Outpop::Utility::Ref_Object *)this[7];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
}
