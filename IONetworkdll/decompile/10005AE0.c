/*
 * func-name: sub_10005AE0
 * func-address: 0x10005ae0
 * callers: 0x1001c940, 0x1001d570, 0x100216e0, 0x10022310, 0x1002ad90, 0x1002b250, 0x1003a5b0, 0x1003aa70, 0x1003ffb0, 0x10040f80
 * callees: none
 */

Outpop::Utility::Ref_Object **__usercall sub_10005AE0@<eax>(
        Outpop::Utility::Ref_Object **a1@<eax>,
        Outpop::Utility::Ref_Object **a2@<esi>)
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
