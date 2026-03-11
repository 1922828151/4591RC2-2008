/*
 * func-name: sub_10015DF0
 * func-address: 0x10015df0
 * callers: 0x10006d70, 0x10014f30, 0x10015010, 0x100150f0, 0x10017670, 0x1001bb10, 0x10026cd0, 0x10026e00
 * callees: none
 */

_DWORD *__userpurge sub_10015DF0@<eax>(_DWORD *a1@<eax>, _DWORD *a2, _DWORD *a3)
{
  ldiv_t v4; // rax
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  unsigned int v10; // esi
  int v11; // ecx
  _DWORD *v12; // esi
  _DWORD *result; // eax
  _DWORD *v14; // ecx
  int v15; // edx
  unsigned int v16; // [esp+10h] [ebp-10h]
  _DWORD *v17; // [esp+1Ch] [ebp-4h]

  v4 = ldiv(*a3 ^ 0xDEADBEEF, 127773);
  v5 = (16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0)) & a1[8];
  if ( a1[9] <= v5 )
    v5 += -1 - (a1[8] >> 1);
  v6 = a1[5];
  if ( !v6 || v5 >= (a1[6] - v6) >> 3 )
    invalid_parameter_noinfo();
  v7 = a1[5];
  v8 = *(_DWORD *)(v7 + 8 * v5);
  v9 = *(_DWORD **)(v7 + 8 * v5 + 4);
  v10 = v5 + 1;
  v17 = v9;
  v16 = v10;
  while ( 1 )
  {
    v11 = a1[5];
    if ( !v11 || v10 >= (a1[6] - v11) >> 3 )
      invalid_parameter_noinfo();
    v12 = (_DWORD *)(a1[5] + 8 * v10);
    if ( !v8 || v8 != *v12 )
      invalid_parameter_noinfo();
    if ( v17 == (_DWORD *)v12[1] )
    {
      result = a2;
      v15 = a1[2];
      *a2 = a1 + 1;
      a2[1] = v15;
      return result;
    }
    if ( !v8 )
      invalid_parameter_noinfo();
    if ( v17 == *(_DWORD **)(v8 + 4) )
      invalid_parameter_noinfo();
    if ( v17[2] >= *a3 )
      break;
    if ( v17 == *(_DWORD **)(v8 + 4) )
      invalid_parameter_noinfo();
    v10 = v16;
    v17 = (_DWORD *)*v17;
  }
  if ( v17 == *(_DWORD **)(v8 + 4) )
    invalid_parameter_noinfo();
  result = a2;
  if ( *a3 >= v17[2] )
  {
    v14 = v17;
    *a2 = v8;
  }
  else
  {
    v14 = (_DWORD *)a1[2];
    *a2 = a1 + 1;
  }
  a2[1] = v14;
  return result;
}
