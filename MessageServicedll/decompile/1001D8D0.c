/*
 * func-name: sub_1001D8D0
 * func-address: 0x1001d8d0
 * callers: 0x1001aec0
 * callees: none
 */

_DWORD *__fastcall sub_1001D8D0(int a1, Outpop::Utility::Ref_Object **a2, _DWORD *a3, _DWORD *a4)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  *a3 = *a4;
  v4 = *a2;
  v5 = *a2 == 0;
  a3[1] = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
  return a3;
}
