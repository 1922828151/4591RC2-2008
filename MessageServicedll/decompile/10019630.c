/*
 * func-name: sub_10019630
 * func-address: 0x10019630
 * callers: 0x10019990
 * callees: none
 */

Outpop::Utility::Ref_Object **__stdcall sub_10019630(
        Outpop::Utility::Ref_Object **a1,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  bool v3; // zf

  v2 = *a1;
  v3 = *a1 == 0;
  *a2 = *a1;
  if ( !v3 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
