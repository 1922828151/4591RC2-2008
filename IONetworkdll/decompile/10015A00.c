/*
 * func-name: sub_10015A00
 * func-address: 0x10015a00
 * callers: 0x100150e0, 0x100159a0, 0x1003c7d0, 0x1003d790
 * callees: none
 */

void __stdcall sub_10015A00(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 4);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
