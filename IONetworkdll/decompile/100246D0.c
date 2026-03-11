/*
 * func-name: sub_100246D0
 * func-address: 0x100246d0
 * callers: 0x10023520, 0x10032740, 0x100328d0, 0x10046860
 * callees: 0x1000c5c0
 */

_DWORD *__stdcall sub_100246D0(int a1, _DWORD *a2, int a3, Outpop::Utility::Ref_Object **a4)
{
  Outpop::Utility::Ref_Object **v4; // edi
  Outpop::Utility::Ref_Object **v5; // esi
  _DWORD *result; // eax

  sub_1000C5C0(a4, a4 + 1, *(Outpop::Utility::Ref_Object ***)(a1 + 8));
  v4 = *(Outpop::Utility::Ref_Object ***)(a1 + 8);
  v5 = v4 - 1;
  do
  {
    if ( *v5 )
      Outpop::Utility::Ref_Object::release(*v5);
    ++v5;
  }
  while ( v5 != v4 );
  *(_DWORD *)(a1 + 8) -= 4;
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
