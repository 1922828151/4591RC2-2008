/*
 * func-name: sub_100227D0
 * func-address: 0x100227d0
 * callers: 0x1001d570, 0x10021100, 0x10022310
 * callees: none
 */

Outpop::Utility::Ref_Object **__stdcall sub_100227D0(int a1, Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 56);
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
