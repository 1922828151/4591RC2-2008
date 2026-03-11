/*
 * func-name: sub_1001DC40
 * func-address: 0x1001dc40
 * callers: 0x1001da60
 * callees: none
 */

_DWORD *__userpurge sub_1001DC40@<eax>(_DWORD *a1@<edi>, _DWORD *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  v2 = (Outpop::Utility::Ref_Object *)a1[3];
  a2[3] = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  a2[4] = a1[4];
  return a2;
}
