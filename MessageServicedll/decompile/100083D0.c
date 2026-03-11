/*
 * func-name: sub_100083D0
 * func-address: 0x100083d0
 * callers: 0x10006d70, 0x10006e10, 0x1000eef0, 0x1000efe0
 * callees: none
 */

_DWORD *__userpurge sub_100083D0@<eax>(_DWORD *a1@<edi>, _DWORD *a2, _WORD *a3)
{
  ldiv_t v3; // rax
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  int *v8; // ebp
  unsigned int v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi
  _DWORD *result; // eax
  int *v13; // ecx
  int v14; // edx
  unsigned int i; // [esp+10h] [ebp-14h]

  v3 = ldiv((unsigned __int16)*a3 ^ 0xDEADBEEF, 127773);
  v4 = (16807 * v3.rem - 2836 * v3.quot + (16807 * v3.rem - 2836 * v3.quot < 0 ? 0x7FFFFFFF : 0)) & a1[8];
  if ( a1[9] <= v4 )
    v4 += -1 - (a1[8] >> 1);
  v5 = a1[5];
  if ( !v5 || v4 >= (a1[6] - v5) >> 3 )
    invalid_parameter_noinfo();
  v6 = a1[5];
  v7 = *(_DWORD *)(v6 + 8 * v4);
  v8 = *(int **)(v6 + 8 * v4 + 4);
  v9 = v4 + 1;
  for ( i = v9; ; v9 = i )
  {
    v10 = a1[5];
    if ( !v10 || v9 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v11 = (_DWORD *)(a1[5] + 8 * v9);
    if ( !v7 || v7 != *v11 )
      invalid_parameter_noinfo();
    if ( v8 == (int *)v11[1] )
    {
      v14 = a1[2];
      *a2 = a1 + 1;
      a2[1] = v14;
      return a2;
    }
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v8 == *(int **)(v7 + 4) )
      invalid_parameter_noinfo();
    if ( *((_WORD *)v8 + 4) >= *a3 )
      break;
    if ( v8 == *(int **)(v7 + 4) )
      invalid_parameter_noinfo();
    v8 = (int *)*v8;
  }
  if ( v8 == *(int **)(v7 + 4) )
    invalid_parameter_noinfo();
  result = a2;
  if ( *a3 >= *((_WORD *)v8 + 4) )
  {
    v13 = v8;
    *a2 = v7;
  }
  else
  {
    v13 = (int *)a1[2];
    *a2 = a1 + 1;
  }
  a2[1] = v13;
  return result;
}
