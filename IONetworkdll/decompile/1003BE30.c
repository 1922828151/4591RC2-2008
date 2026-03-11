/*
 * func-name: sub_1003BE30
 * func-address: 0x1003be30
 * callers: 0x10017730, 0x10026cd0, 0x10027c50, 0x10029880, 0x10035f10, 0x10036c20, 0x100372d0
 * callees: none
 */

_DWORD *__stdcall sub_1003BE30(_DWORD *a1, _DWORD *a2)
{
  Outpop::Utility::Ref_Object *v2; // ecx

  *a1 = *a2;
  a1[1] = a2[1];
  v2 = (Outpop::Utility::Ref_Object *)a2[2];
  a1[2] = v2;
  if ( v2 )
    Outpop::Utility::Ref_Object::addref(v2);
  return a1;
}
