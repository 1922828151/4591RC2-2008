/*
 * func-name: sub_1003D940
 * func-address: 0x1003d940
 * callers: 0x1003c7d0
 * callees: none
 */

int __fastcall sub_1003D940(int a1, Outpop::Utility::Ref_Object **a2, int a3, _WORD *a4)
{
  Outpop::Utility::Ref_Object *v4; // ecx
  bool v5; // zf

  *(_WORD *)a3 = *a4;
  v4 = *a2;
  v5 = *a2 == 0;
  *(_DWORD *)(a3 + 4) = *a2;
  if ( !v5 )
    Outpop::Utility::Ref_Object::addref(v4);
  return a3;
}
