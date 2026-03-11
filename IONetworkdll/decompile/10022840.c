/*
 * func-name: sub_10022840
 * func-address: 0x10022840
 * callers: 0x100117b0, 0x1001baf0, 0x1001c940, 0x100216e0
 * callees: none
 */

Outpop::Utility::Ref_Object **__stdcall sub_10022840(int a1, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 52);
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
