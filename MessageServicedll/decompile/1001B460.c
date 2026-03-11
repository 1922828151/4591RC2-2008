/*
 * func-name: sub_1001B460
 * func-address: 0x1001b460
 * callers: 0x1001b360, 0x1001dfb0, 0x1001e4a0, 0x1001e7b0, 0x10025c70
 * callees: none
 */

void __stdcall sub_1001B460(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx
  Outpop::Utility::Ref_Object *v2; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 8);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 4);
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
}
