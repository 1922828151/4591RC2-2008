/*
 * func-name: sub_1000A7C0
 * func-address: 0x1000a7c0
 * callers: 0x1000b410
 * callees: none
 */

void __stdcall sub_1000A7C0(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 12);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
