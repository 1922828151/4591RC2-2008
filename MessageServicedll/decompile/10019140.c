/*
 * func-name: sub_10019140
 * func-address: 0x10019140
 * callers: 0x10018c00
 * callees: 0x100294f2
 */

_DWORD *__userpurge sub_10019140@<eax>(_DWORD *a1@<edi>, _DWORD *a2, int a3, _DWORD *a4)
{
  ldiv_t v4; // rax
  unsigned int v5; // eax
  unsigned int i; // ebx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edx
  int v10; // ecx
  _DWORD *v11; // esi
  int v12; // ecx
  _DWORD *v13; // esi
  _DWORD **v14; // ecx
  _DWORD *v15; // eax
  bool v16; // zf
  _DWORD *v17; // ebx
  _DWORD *result; // eax
  int v19; // [esp+14h] [ebp-1Ch]

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD **)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = ldiv(a4[2] ^ 0xDEADBEEF, 127773);
  v5 = (16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0)) & a1[8];
  if ( a1[9] <= v5 )
    v5 += -1 - (a1[8] >> 1);
  for ( i = v5; ; --i )
  {
    v7 = a1[5];
    if ( !v7 || i >= (a1[6] - v7) >> 3 )
      invalid_parameter_noinfo();
    v8 = 8 * i + a1[5];
    if ( a3 != *(_DWORD *)v8 )
      invalid_parameter_noinfo();
    v9 = a4;
    if ( a4 != *(_DWORD **)(v8 + 4) )
      break;
    v10 = a1[5];
    if ( !v10 || i >= (a1[6] - v10) >> 3 )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    v11 = (_DWORD *)(8 * i + a1[5]);
    if ( !*v11 )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    if ( v11[1] == *(_DWORD *)(*v11 + 4) )
    {
      invalid_parameter_noinfo();
      v9 = a4;
    }
    v11[1] = *(_DWORD *)v11[1];
    if ( !i )
      break;
  }
  if ( v9 == *(_DWORD **)(a3 + 4) )
  {
    invalid_parameter_noinfo();
    v9 = a4;
  }
  v12 = *v9;
  v19 = *v9;
  if ( v9 != (_DWORD *)a1[2] )
  {
    *(_DWORD *)v9[1] = v12;
    *(_DWORD *)(*v9 + 4) = v9[1];
    v13 = v9 + 3;
    if ( v9[8] )
      operator delete((void *)v9[8]);
    v13[5] = 0;
    v13[6] = 0;
    v13[7] = 0;
    v14 = (_DWORD **)v13[2];
    v15 = *v14;
    *v14 = v14;
    *(_DWORD *)(v13[2] + 4) = v13[2];
    v16 = v15 == (_DWORD *)v13[2];
    v13[3] = 0;
    if ( !v16 )
    {
      do
      {
        v17 = (_DWORD *)*v15;
        operator delete(v15);
        v15 = v17;
      }
      while ( v17 != (_DWORD *)v13[2] );
    }
    operator delete((void *)v13[2]);
    v13[2] = 0;
    operator delete(a4);
    v12 = v19;
    --a1[3];
  }
  result = a2;
  *a2 = a3;
  a2[1] = v12;
  return result;
}
