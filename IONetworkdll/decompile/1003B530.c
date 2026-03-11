/*
 * func-name: sub_1003B530
 * func-address: 0x1003b530
 * callers: 0x100390a0
 * callees: none
 */

Outpop::Utility::Ref_Object **__stdcall sub_1003B530(int a1, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 104);
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
