/*
 * func-name: sub_1004DFB0
 * func-address: 0x1004dfb0
 * callers: 0x1004dbd0
 * callees: 0x1004a750, 0x1004dae0
 */

_DWORD *__userpurge sub_1004DFB0@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int *a4)
{
  unsigned int v5; // esi
  unsigned int v6; // eax
  unsigned int i; // edi
  int v8; // ecx
  _DWORD *v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(int **)(a3 + 4) )
    invalid_parameter_noinfo();
  v5 = a1[8];
  v6 = v5 & sub_1004DAE0((int)(a4 + 2));
  if ( a1[9] <= v6 )
    v6 += -1 - (v5 >> 1);
  for ( i = v6; ; --i )
  {
    v8 = a1[5];
    if ( !v8 || i >= (a1[6] - v8) >> 3 )
      invalid_parameter_noinfo();
    v9 = (_DWORD *)(8 * i + a1[5]);
    if ( a3 != *v9 )
      invalid_parameter_noinfo();
    if ( a4 != (int *)v9[1] )
      break;
    v10 = a1[5];
    if ( !v10 || i >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v11 = (_DWORD *)(8 * i + a1[5]);
    if ( !*v11 )
      invalid_parameter_noinfo();
    if ( v11[1] == *(_DWORD *)(*v11 + 4) )
      invalid_parameter_noinfo();
    v11[1] = *(_DWORD *)v11[1];
    if ( !i )
      break;
  }
  sub_1004A750((int)(a1 + 1), a2, a3, a4);
  return a2;
}
