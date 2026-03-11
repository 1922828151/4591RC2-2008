/*
 * func-name: sub_10128630
 * func-address: 0x10128630
 * callers: 0x1001873c
 * callees: 0x1000d0bc, 0x1000ef25, 0x1000effc, 0x1001224c, 0x10014aab, 0x10017da0, 0x102c9d50, 0x102c9d86
 */

unsigned int __thiscall sub_10128630(_DWORD *this, int a2)
{
  int v3; // ecx
  int v4; // esi
  int v5; // eax
  unsigned int **v6; // eax
  unsigned int *v7; // ecx
  bool v8; // zf
  int *v9; // eax
  _DWORD *v10; // edx
  unsigned int v11; // edi
  unsigned int result; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  _DWORD *v16; // edi
  char *v17; // edi
  int v18; // ecx
  int v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // edi
  int v22; // [esp-18h] [ebp-54h]
  int v23; // [esp-10h] [ebp-4Ch]
  int v24; // [esp-4h] [ebp-40h]
  int v25; // [esp+0h] [ebp-3Ch] BYREF
  _DWORD *v26; // [esp+14h] [ebp-28h]
  _DWORD *v27; // [esp+1Ch] [ebp-20h]
  char *v28; // [esp+20h] [ebp-1Ch]
  unsigned int v29; // [esp+28h] [ebp-14h]
  int *v30; // [esp+2Ch] [ebp-10h]
  int v31; // [esp+38h] [ebp-4h]

  v30 = &v25;
  v27 = this;
  v3 = *(_DWORD *)(a2 + 20);
  v4 = (int)(v27 + 1);
  if ( v3 )
    v5 = (*(_DWORD *)(a2 + 24) - v3) >> 3;
  else
    v5 = 0;
  v24 = v27[2];
  v28 = (char *)(this + 4);
  sub_1000D0BC(v5, (_BYTE)v27 + 4, v24);
  this[8] = *(_DWORD *)(a2 + 32);
  this[9] = *(_DWORD *)(a2 + 36);
  v6 = *(unsigned int ***)(v4 + 4);
  v7 = *v6;
  *v6 = (unsigned int *)v6;
  *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4) = *(_DWORD *)(v4 + 4);
  v8 = v7 == *(unsigned int **)(v4 + 4);
  *(_DWORD *)(v4 + 8) = 0;
  if ( !v8 )
  {
    do
    {
      v29 = *v7;
      operator delete(v7);
      v7 = (unsigned int *)v29;
    }
    while ( v29 != *(_DWORD *)(v4 + 4) );
  }
  v9 = *(int **)(a2 + 8);
  v23 = *v9;
  v22 = *(_DWORD *)(v4 + 4);
  v31 = 0;
  sub_1001224C(v4, v22, a2 + 4, v23, a2 + 4, (int)v9, a2);
  *(_BYTE *)this = *(_BYTE *)a2;
  v10 = **(_DWORD ***)(a2 + 8);
  v11 = 0;
  v26 = **(_DWORD ***)(v4 + 4);
  v27 = v10;
  v29 = 0;
  while ( 1 )
  {
    result = (unsigned int)v28;
    v13 = *((_DWORD *)v28 + 1);
    if ( !v13 )
      break;
    result = (*((_DWORD *)v28 + 2) - v13) >> 3;
    if ( v11 >= result )
      break;
    v14 = *(_DWORD *)(a2 + 20);
    if ( !v14 || v11 >= (*(_DWORD *)(a2 + 24) - v14) >> 3 )
      _invalid_parameter_noinfo();
    v15 = 8 * v11;
    v16 = (_DWORD *)(8 * v11 + *(_DWORD *)(a2 + 20));
    if ( a2 + 4 != *v16 )
      _invalid_parameter_noinfo();
    if ( v27 == (_DWORD *)v16[1] )
    {
      v17 = v28;
      v18 = *((_DWORD *)v28 + 1);
      if ( !v18 || v29 >= (*((_DWORD *)v28 + 2) - v18) >> 3 )
        _invalid_parameter_noinfo();
      v19 = *((_DWORD *)v17 + 1);
      v20 = v26;
      v11 = ++v29;
      *(_DWORD *)(v19 + v15) = v4;
      *(_DWORD *)(v19 + v15 + 4) = v20;
    }
    else
    {
      v21 = v26;
      if ( v26 == *(_DWORD **)(v4 + 4) )
        _invalid_parameter_noinfo();
      v8 = v27 == *(_DWORD **)(a2 + 8);
      v26 = (_DWORD *)*v21;
      if ( v8 )
        _invalid_parameter_noinfo();
      v11 = v29;
      v27 = (_DWORD *)*v27;
    }
  }
  return result;
}
