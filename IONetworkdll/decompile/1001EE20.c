/*
 * func-name: sub_1001EE20
 * func-address: 0x1001ee20
 * callers: 0x1001da60, 0x1001dcb0, 0x1001dd60
 * callees: none
 */

void __stdcall sub_1001EE20(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 12);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
