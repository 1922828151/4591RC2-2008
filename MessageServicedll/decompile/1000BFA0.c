/*
 * func-name: sub_1000BFA0
 * func-address: 0x1000bfa0
 * callers: 0x1000b810, 0x10011070, 0x10013940, 0x100141b0, 0x10014890, 0x1001af80, 0x1001b4d0, 0x1001b880, 0x1001e5a0, 0x100225b0, 0x100253f0, 0x10025e70, 0x10026580
 * callees: none
 */

_DWORD *__stdcall sub_1000BFA0(_DWORD *a1, _DWORD *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *a1 = *a2;
  v2 = (Outpop::Utility::Ref_Object *)a2[1];
  a1[1] = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a1;
}
