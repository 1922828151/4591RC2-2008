/*
 * func-name: sub_1002F9B0
 * func-address: 0x1002f9b0
 * callers: 0x10030f60, 0x100326a0
 * callees: 0x1001cf30, 0x1001dbd0, 0x1001ea80, 0x1001eca0, 0x10020ae0, 0x1002ce40, 0x101a2500, 0x101a2522
 */

unsigned int __thiscall sub_1002F9B0(_DWORD *this, int a2)
{
  int v3; // ecx
  unsigned int v4; // edx
  char *v5; // esi
  unsigned int v6; // eax
  unsigned int **v7; // eax
  unsigned int *v8; // ecx
  bool v9; // zf
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  unsigned int v12; // edi
  unsigned int result; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  _DWORD *v17; // edi
  char *v18; // edi
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // ecx
  _DWORD *v22; // edi
  int v23; // [esp-18h] [ebp-50h]
  _DWORD *v24; // [esp-10h] [ebp-48h]
  int v25; // [esp+0h] [ebp-38h] BYREF
  _DWORD *v26; // [esp+10h] [ebp-28h]
  _DWORD *v27; // [esp+18h] [ebp-20h]
  char *v28; // [esp+1Ch] [ebp-1Ch]
  unsigned int v29; // [esp+24h] [ebp-14h]
  int *v30; // [esp+28h] [ebp-10h]
  int v31; // [esp+34h] [ebp-4h]

  v3 = *(_DWORD *)(a2 + 20);
  v4 = this[2];
  v5 = (char *)(this + 1);
  v30 = &v25;
  v27 = this;
  if ( v3 )
    v6 = (*(_DWORD *)(a2 + 24) - v3) >> 3;
  else
    v6 = 0;
  v28 = (char *)(this + 4);
  sub_1002CE40(this + 4, v6, (int)(this + 1), v4);
  this[8] = *(_DWORD *)(a2 + 32);
  this[9] = *(_DWORD *)(a2 + 36);
  v7 = (unsigned int **)this[2];
  v8 = *v7;
  *v7 = (unsigned int *)v7;
  *(_DWORD *)(this[2] + 4) = this[2];
  v9 = v8 == (unsigned int *)this[2];
  this[3] = 0;
  if ( !v9 )
  {
    do
    {
      v29 = *v8;
      operator delete(v8);
      v8 = (unsigned int *)v29;
    }
    while ( v29 != this[2] );
  }
  v10 = *(_DWORD **)(a2 + 8);
  v24 = (_DWORD *)*v10;
  v23 = this[2];
  v31 = 0;
  sub_10020AE0(this + 1, (int)(this + 1), v23, a2 + 4, v24, a2 + 4, v10, a2);
  *(_BYTE *)this = *(_BYTE *)a2;
  v11 = **(_DWORD ***)(a2 + 8);
  v12 = 0;
  v26 = (_DWORD *)**((_DWORD **)v5 + 1);
  v27 = v11;
  v29 = 0;
  while ( 1 )
  {
    result = (unsigned int)v28;
    v14 = *((_DWORD *)v28 + 1);
    if ( !v14 )
      break;
    result = (*((_DWORD *)v28 + 2) - v14) >> 3;
    if ( v12 >= result )
      break;
    v15 = *(_DWORD *)(a2 + 20);
    if ( !v15 || v12 >= (*(_DWORD *)(a2 + 24) - v15) >> 3 )
      invalid_parameter_noinfo();
    v16 = 8 * v12;
    v17 = (_DWORD *)(8 * v12 + *(_DWORD *)(a2 + 20));
    if ( a2 + 4 != *v17 )
      invalid_parameter_noinfo();
    if ( v27 == (_DWORD *)v17[1] )
    {
      v18 = v28;
      v19 = *((_DWORD *)v28 + 1);
      if ( !v19 || v29 >= (*((_DWORD *)v28 + 2) - v19) >> 3 )
        invalid_parameter_noinfo();
      v20 = *((_DWORD *)v18 + 1);
      v21 = v26;
      v12 = ++v29;
      *(_DWORD *)(v20 + v16) = v5;
      *(_DWORD *)(v20 + v16 + 4) = v21;
    }
    else
    {
      v22 = v26;
      if ( v26 == *((_DWORD **)v5 + 1) )
        invalid_parameter_noinfo();
      v9 = v27 == *(_DWORD **)(a2 + 8);
      v26 = (_DWORD *)*v22;
      if ( v9 )
        invalid_parameter_noinfo();
      v12 = v29;
      v27 = (_DWORD *)*v27;
    }
  }
  return result;
}
