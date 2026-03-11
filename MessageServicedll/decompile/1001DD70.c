/*
 * func-name: sub_1001DD70
 * func-address: 0x1001dd70
 * callers: 0x1001d830
 * callees: 0x1001dfb0
 */

_DWORD *__userpurge sub_1001DD70@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = a1[1];
  if ( v6 && (int)(a1[2] - v6) / 12 )
  {
    if ( v6 > a1[2] )
      invalid_parameter_noinfo();
    v7 = a4;
    if ( !a4 || (_DWORD *)a4 != a1 )
      invalid_parameter_noinfo();
    v8 = (int)(a5 - v6) / 12;
  }
  else
  {
    v7 = a4;
    v8 = 0;
  }
  sub_1001DFB0(a1, v7, a5);
  v9 = a1[1];
  if ( v9 > a1[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 12 * v8;
  if ( v10 > a1[2] || v10 < a1[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = a1;
  return result;
}
