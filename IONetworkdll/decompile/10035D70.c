/*
 * func-name: sub_10035D70
 * func-address: 0x10035d70
 * callers: 0x10035e70
 * callees: none
 */

void __stdcall sub_10035D70(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 16);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
