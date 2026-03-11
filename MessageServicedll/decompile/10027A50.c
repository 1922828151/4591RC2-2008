/*
 * func-name: sub_10027A50
 * func-address: 0x10027a50
 * callers: 0x100278a0
 * callees: 0x1000b280, 0x10028170
 */

_DWORD *__userpurge sub_10027A50@<eax>(int a1@<edi>, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // esi
  int v8; // esi
  _DWORD *result; // eax
  char v10; // [esp+Ch] [ebp-8h]
  char v11; // [esp+10h] [ebp-4h]

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v10 = 0;
    v11 = 0;
    sub_10028170(a2, v11, v10);
    v8 = a4 + 12 * ((v7 - a6) / 12);
    sub_1000B280(v8, *(_DWORD *)(a1 + 8));
    *(_DWORD *)(a1 + 8) = v8;
    v6 = a3;
  }
  result = a2;
  *a2 = v6;
  a2[1] = a4;
  return result;
}
