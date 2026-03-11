/*
 * func-name: sub_10021BB0
 * func-address: 0x10021bb0
 * callers: 0x100218b0
 * callees: 0x100225b0
 */

_DWORD *__userpurge sub_10021BB0@<eax>(_DWORD *a1@<eax>, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // ebx
  unsigned int v9; // edi
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = a1[1];
  if ( v6 && (v7 = a1[2], (int)(a1[2] - v6) >> 3) )
  {
    if ( v6 > v7 )
      invalid_parameter_noinfo();
    if ( !a4 || (_DWORD *)a4 != a1 )
      invalid_parameter_noinfo();
    v8 = (int)(a5 - v6) >> 3;
  }
  else
  {
    v8 = 0;
  }
  sub_100225B0(a1, a3, a4, a5);
  v9 = a1[1];
  if ( v9 > a1[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 8 * v8;
  if ( v10 > a1[2] || v10 < a1[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = a1;
  return result;
}
