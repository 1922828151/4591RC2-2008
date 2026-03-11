/*
 * func-name: sub_10023BE0
 * func-address: 0x10023be0
 * callers: 0x10023520, 0x10025040, 0x10025b50
 * callees: none
 */

void __stdcall sub_10023BE0(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(a1 + 12));
  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 4);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
