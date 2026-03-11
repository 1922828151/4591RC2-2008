/*
 * func-name: sub_1000B2B0
 * func-address: 0x1000b2b0
 * callers: 0x10009e40, 0x1000acb0, 0x1000f9b0, 0x10010440, 0x10033f30, 0x10043720, 0x10047f00
 * callees: 0x1000c5c0
 */

_DWORD *__stdcall sub_1000B2B0(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // esi
  Outpop::Utility::Ref_Object **v8; // ebx
  Outpop::Utility::Ref_Object **v9; // edi
  Outpop::Utility::Ref_Object **i; // esi
  _DWORD *result; // eax
  char v12; // [esp+10h] [ebp-4h]

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    LOBYTE(a5) = 0;
    v12 = 0;
    sub_1000C5C0(a6, a1, v12, a5);
    v8 = *(Outpop::Utility::Ref_Object ***)(a1 + 8);
    v9 = (Outpop::Utility::Ref_Object **)(a4 + 4 * ((v7 - a6) >> 2));
    for ( i = v9; i != v8; ++i )
    {
      if ( *i )
        Outpop::Utility::Ref_Object::release(*i);
    }
    v6 = a3;
    *(_DWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = v6;
  a2[1] = a4;
  return result;
}
