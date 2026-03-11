/*
 * func-name: sub_1000B280
 * func-address: 0x1000b280
 * callers: 0x100090a0, 0x1001aa00, 0x1001ac90, 0x1001dfb0, 0x100239c0, 0x100251f0, 0x10027a50
 * callees: none
 */

void __cdecl sub_1000B280(int a1, int a2)
{
  int i; // esi
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx

  for ( i = a1; i != a2; i += 12 )
  {
    v3 = *(Outpop::Utility::Ref_Object **)(i + 8);
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
    v4 = *(Outpop::Utility::Ref_Object **)(i + 4);
    if ( v4 )
      Outpop::Utility::Ref_Object::release(v4);
  }
}
