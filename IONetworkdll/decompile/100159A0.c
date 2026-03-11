/*
 * func-name: sub_100159A0
 * func-address: 0x100159a0
 * callers: 0x10015f90
 * callees: none
 */

void __stdcall sub_100159A0(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 12);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
}
