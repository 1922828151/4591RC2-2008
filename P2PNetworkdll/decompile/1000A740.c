/*
 * func-name: sub_1000A740
 * func-address: 0x1000a740
 * callers: 0x1000a720
 * callees: none
 */

void __stdcall sub_1000A740(_DWORD *a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx
  Outpop::Utility::Ref_Object *v2; // ecx

  v1 = (Outpop::Utility::Ref_Object *)a1[5];
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)(a1 + 3));
  v2 = (Outpop::Utility::Ref_Object *)a1[2];
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
  Outpop::Utility::Ref_Object::~Ref_Object((Outpop::Utility::Ref_Object *)a1);
}
