/*
 * func-name: sub_10007D00
 * func-address: 0x10007d00
 * callers: 0x10003f10, 0x100041d0, 0x100042e0, 0x10004b30, 0x10004f40, 0x10005580, 0x100061c0
 * callees: 0x10007680
 */

_DWORD *__userpurge sub_10007D00@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  _DWORD *v9; // edi
  unsigned int v10; // esi
  int v11; // ecx
  _DWORD *v12; // esi
  _DWORD *result; // eax
  _DWORD *v14; // ecx
  int v15; // edx
  unsigned int i; // [esp+10h] [ebp-14h]

  v4 = a1[8];
  v5 = v4 & sub_10007680(a3);
  if ( a1[9] <= v5 )
    v5 += -1 - (v4 >> 1);
  v6 = a1[5];
  if ( !v6 || v5 >= (a1[6] - v6) >> 3 )
    invalid_parameter_noinfo();
  v7 = a1[5];
  v8 = *(_DWORD *)(v7 + 8 * v5);
  v9 = *(_DWORD **)(v7 + 8 * v5 + 4);
  v10 = v5 + 1;
  for ( i = v10; ; v10 = i )
  {
    v11 = a1[5];
    if ( !v11 || v10 >= (a1[6] - v11) >> 3 )
      invalid_parameter_noinfo();
    v12 = (_DWORD *)(a1[5] + 8 * v10);
    if ( !v8 || v8 != *v12 )
      invalid_parameter_noinfo();
    if ( v9 == (_DWORD *)v12[1] )
    {
      result = a2;
      v15 = a1[2];
      *a2 = a1 + 1;
      a2[1] = v15;
      return result;
    }
    if ( !v8 )
      invalid_parameter_noinfo();
    if ( v9 == *(_DWORD **)(v8 + 4) )
      invalid_parameter_noinfo();
    if ( !(unsigned __int8)std::operator<<char>(v9 + 2, a3) )
      break;
    if ( v9 == *(_DWORD **)(v8 + 4) )
      invalid_parameter_noinfo();
    v9 = (_DWORD *)*v9;
  }
  if ( v9 == *(_DWORD **)(v8 + 4) )
    invalid_parameter_noinfo();
  if ( (unsigned __int8)std::operator<<char>(a3, v9 + 2) )
  {
    result = a2;
    v14 = (_DWORD *)a1[2];
    *a2 = a1 + 1;
  }
  else
  {
    result = a2;
    v14 = v9;
    *a2 = v8;
  }
  result[1] = v14;
  return result;
}
