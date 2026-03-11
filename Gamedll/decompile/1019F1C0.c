/*
 * func-name: sub_1019F1C0
 * func-address: 0x1019f1c0
 * callers: 0x100047af
 * callees: none
 */

_DWORD *__cdecl sub_1019F1C0(_DWORD *a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx
  bool v2; // zf

  v1 = (Outpop::Utility::Ref_Object *)dword_103B677C;
  v2 = dword_103B677C == 0;
  *a1 = dword_103B677C;
  if ( !v2 )
    Outpop::Utility::Ref_Object::addref(v1);
  return a1;
}
