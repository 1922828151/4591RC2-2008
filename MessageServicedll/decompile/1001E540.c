/*
 * func-name: sub_1001E540
 * func-address: 0x1001e540
 * callers: 0x1001a7e0, 0x1001ac90, 0x1001d6f0, 0x10020c80, 0x10020f20, 0x10021c40, 0x100225b0
 * callees: none
 */

void __usercall sub_1001E540(int a1@<edi>, int a2)
{
  int i; // esi
  Outpop::Utility::Ref_Object *v3; // ecx

  for ( i = a2; i != a1; i += 8 )
  {
    v3 = *(Outpop::Utility::Ref_Object **)(i + 4);
    if ( v3 )
      Outpop::Utility::Ref_Object::release(v3);
  }
}
