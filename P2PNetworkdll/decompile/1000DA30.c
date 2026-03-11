/*
 * func-name: sub_1000DA30
 * func-address: 0x1000da30
 * callers: 0x1000b090, 0x1000b300, 0x1000c0c0
 * callees: 0x10007680
 */

_DWORD *__userpurge sub_1000DA30@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3)
{
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // edx
  unsigned int v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi
  _DWORD *result; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  unsigned int v15; // [esp+10h] [ebp-10h]
  unsigned int i; // [esp+10h] [ebp-10h]
  _DWORD *v17; // [esp+1Ch] [ebp-4h]

  v15 = a1[8];
  v4 = v15 & sub_10007680(a3);
  if ( a1[9] <= v4 )
    v4 += -1 - (v15 >> 1);
  v5 = a1[5];
  if ( !v5 || v4 >= (a1[6] - v5) >> 3 )
    invalid_parameter_noinfo();
  v6 = a1[5];
  v7 = *(_DWORD *)(v6 + 8 * v4);
  v8 = *(_DWORD **)(v6 + 8 * v4 + 4);
  v9 = v4 + 1;
  for ( i = v9; ; v9 = i )
  {
    v10 = a1[5];
    v17 = v8;
    if ( !v10 || v9 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v11 = (_DWORD *)(a1[5] + 8 * v9);
    if ( !v7 || v7 != *v11 )
      invalid_parameter_noinfo();
    if ( v17 == (_DWORD *)v11[1] )
    {
      result = a2;
      v14 = a1[2];
      *a2 = a1 + 1;
      a2[1] = v14;
      return result;
    }
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v17 == *(_DWORD **)(v7 + 4) )
      invalid_parameter_noinfo();
    if ( !(unsigned __int8)std::operator<<char>(v17 + 2, a3) )
      break;
    if ( v17 == *(_DWORD **)(v7 + 4) )
      invalid_parameter_noinfo();
    v8 = (_DWORD *)*v17;
  }
  if ( v17 == *(_DWORD **)(v7 + 4) )
    invalid_parameter_noinfo();
  if ( (unsigned __int8)std::operator<<char>(a3, v17 + 2) )
  {
    result = a2;
    v13 = (_DWORD *)a1[2];
    *a2 = a1 + 1;
  }
  else
  {
    result = a2;
    v13 = v17;
    *a2 = v7;
  }
  result[1] = v13;
  return result;
}
