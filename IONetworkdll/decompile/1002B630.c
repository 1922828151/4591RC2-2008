/*
 * func-name: sub_1002B630
 * func-address: 0x1002b630
 * callers: 0x10017730, 0x10026cd0, 0x10027c50, 0x10029880, 0x10036c20, 0x100372d0
 * callees: none
 */

_DWORD *__stdcall sub_1002B630(_DWORD *a1, _DWORD *a2, Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  bool v4; // zf

  *a1 = *a2;
  a1[1] = a2[1];
  v3 = *a3;
  v4 = *a3 == 0;
  a1[2] = *a3;
  if ( !v4 )
    Outpop::Utility::Ref_Object::addref(v3);
  return a1;
}
