/*
 * func-name: sub_1001DAA0
 * func-address: 0x1001daa0
 * callers: 0x100182b0, 0x1001ce10, 0x10027830
 * callees: none
 */

_DWORD *__userpurge sub_1001DAA0@<eax>(_DWORD *a1@<edi>, _DWORD *a2, _DWORD *a3)
{
  ldiv_t v3; // rax
  unsigned int v4; // esi
  int v5; // ecx
  int v6; // eax
  int v7; // ebx
  _DWORD *v8; // ebp
  unsigned int v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi
  void (__cdecl *v12)(); // esi
  int v13; // ecx
  _DWORD *v14; // esi
  _DWORD *result; // eax
  int v16; // edx
  unsigned int i; // [esp+10h] [ebp-Ch]
  _DWORD *v18; // [esp+18h] [ebp-4h]

  v3 = ldiv(*a3 ^ 0xDEADBEEF, 127773);
  v4 = (16807 * v3.rem - 2836 * v3.quot + (16807 * v3.rem - 2836 * v3.quot < 0 ? 0x7FFFFFFF : 0)) & a1[8];
  if ( a1[9] <= v4 )
    v4 += -1 - (a1[8] >> 1);
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
    if ( !v10 || v9 >= (a1[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v11 = (_DWORD *)(a1[5] + 8 * v9);
    if ( !v7 || v7 != *v11 )
      invalid_parameter_noinfo();
    if ( v8 == (_DWORD *)v11[1] )
      break;
    v12 = invalid_parameter_noinfo;
    if ( !v7 )
      invalid_parameter_noinfo();
    if ( v8 == *(_DWORD **)(v7 + 4) )
      invalid_parameter_noinfo();
    if ( v8[2] >= *a3 )
    {
      v18 = v8;
      while ( 1 )
      {
        v13 = a1[5];
        if ( !v13 || i >= (a1[6] - v13) >> 3 )
          v12();
        v14 = (_DWORD *)(a1[5] + 8 * i);
        if ( v7 != *v14 )
          invalid_parameter_noinfo();
        if ( v8 == (_DWORD *)v14[1] )
          break;
        if ( v8 == *(_DWORD **)(v7 + 4) )
          invalid_parameter_noinfo();
        if ( *a3 < v8[2] )
          break;
        if ( v8 == *(_DWORD **)(v7 + 4) )
          invalid_parameter_noinfo();
        v8 = (_DWORD *)*v8;
        v12 = invalid_parameter_noinfo;
      }
      if ( !v7 )
        invalid_parameter_noinfo();
      if ( v18 != v8 )
      {
        result = a2;
        *a2 = v7;
        a2[1] = v18;
        a2[2] = v7;
        a2[3] = v8;
        return result;
      }
      break;
    }
    if ( v8 == *(_DWORD **)(v7 + 4) )
      invalid_parameter_noinfo();
    v8 = (_DWORD *)*v8;
  }
  v16 = a1[2];
  a2[1] = v16;
  *a2 = a1 + 1;
  a2[2] = a1 + 1;
  a2[3] = v16;
  return a2;
}
