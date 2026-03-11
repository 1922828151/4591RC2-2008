/*
 * func-name: sub_10002610
 * func-address: 0x10002610
 * callers: 0x100031a0, 0x10003870, 0x10003ae0
 * callees: none
 */

Outpop::Utility::Ref_Object **__usercall sub_10002610@<eax>(int a1@<eax>, Outpop::Utility::Ref_Object **a2@<esi>)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  v2 = *(Outpop::Utility::Ref_Object **)(a1 + 96);
  *a2 = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a2;
}
