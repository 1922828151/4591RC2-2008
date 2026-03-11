/*
 * func-name: sub_1000A820
 * func-address: 0x1000a820
 * callers: 0x10009a40, 0x1000a7c0, 0x1000e810, 0x1000f8a0, 0x10011070, 0x10013940, 0x100141b0, 0x10014890, 0x100196a0, 0x1001aec0, 0x1001af80, 0x1001b4d0, 0x1001b880, 0x1001cc60, 0x1001e400, 0x1001e710, 0x10021450, 0x100225b0, 0x100253f0, 0x10025e70, 0x10026580
 * callees: none
 */

void __stdcall sub_1000A820(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 4);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
