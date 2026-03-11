/*
 * func-name: sub_1001E2B0
 * func-address: 0x1001e2b0
 * callers: 0x1001dfb0, 0x1001e600
 * callees: none
 */

_DWORD *__userpurge sub_1001E2B0@<eax>(_DWORD *a1@<esi>, _DWORD *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx
  Outpop::Utility::Ref_Object *v3; // ecx

  *a2 = *a1;
  v2 = (Outpop::Utility::Ref_Object *)a1[1];
  a2[1] = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  v3 = (Outpop::Utility::Ref_Object *)a1[2];
  a2[2] = v3;
  if ( v3 )
    Outpop::Utility::Ref_Object::addref(v3);
  return a2;
}
