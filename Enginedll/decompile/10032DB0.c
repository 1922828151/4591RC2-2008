/*
 * func-name: sub_10032DB0
 * func-address: 0x10032db0
 * callers: 0x10032fd0, 0x10033210
 * callees: 0x1001cf30, 0x1001ea80, 0x1001eca0, 0x1002cc30, 0x100329e0, 0x10032bd0, 0x101a2522
 */

unsigned int __thiscall sub_10032DB0(_DWORD *this, int a2)
{
  int v2; // esi
  int v4; // ecx
  unsigned int v5; // edx
  int v6; // ebx
  unsigned int v7; // eax
  _DWORD *v8; // edx
  unsigned int v9; // edi
  unsigned int result; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  _DWORD *v14; // esi
  _DWORD *v15; // esi
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // ecx
  _DWORD *v19; // esi
  bool v20; // zf
  int v21; // [esp-18h] [ebp-50h]
  _DWORD *v22; // [esp-10h] [ebp-48h]
  _DWORD *v23; // [esp-8h] [ebp-40h]
  int v24; // [esp+0h] [ebp-38h] BYREF
  _DWORD *v25; // [esp+10h] [ebp-28h]
  _DWORD *v26; // [esp+18h] [ebp-20h]
  _DWORD *v27; // [esp+1Ch] [ebp-1Ch]
  unsigned int v28; // [esp+24h] [ebp-14h]
  int *v29; // [esp+28h] [ebp-10h]
  int v30; // [esp+34h] [ebp-4h]

  v2 = a2;
  v4 = *(_DWORD *)(a2 + 20);
  v5 = this[2];
  v6 = (int)(this + 1);
  v29 = &v24;
  v28 = (unsigned int)this;
  if ( v4 )
    v7 = (*(_DWORD *)(a2 + 24) - v4) >> 3;
  else
    v7 = 0;
  v27 = this + 4;
  sub_1002CC30(this + 4, v7, (int)(this + 1), v5);
  this[8] = *(_DWORD *)(a2 + 32);
  this[9] = *(_DWORD *)(a2 + 36);
  sub_100329E0(this + 1);
  v23 = *(_DWORD **)(a2 + 8);
  v22 = (_DWORD *)*v23;
  v21 = this[2];
  v30 = 0;
  sub_10032BD0((_DWORD *)v6, v6, v21, a2 + 4, v22, a2 + 4, v23, a2);
  *(_BYTE *)v28 = *(_BYTE *)a2;
  v8 = **(_DWORD ***)(a2 + 8);
  v9 = 0;
  v25 = **(_DWORD ***)(v6 + 4);
  v26 = v8;
  v28 = 0;
  while ( 1 )
  {
    result = (unsigned int)v27;
    v11 = v27[1];
    if ( !v11 )
      break;
    result = (v27[2] - v11) >> 3;
    if ( v9 >= result )
      break;
    v12 = *(_DWORD *)(v2 + 20);
    if ( !v12 || v9 >= (*(_DWORD *)(v2 + 24) - v12) >> 3 )
      invalid_parameter_noinfo();
    v13 = 8 * v9;
    v14 = (_DWORD *)(v13 + *(_DWORD *)(v2 + 20));
    if ( a2 + 4 != *v14 )
      invalid_parameter_noinfo();
    if ( v26 == (_DWORD *)v14[1] )
    {
      v15 = v27;
      v16 = v27[1];
      if ( !v16 || v28 >= (v27[2] - v16) >> 3 )
        invalid_parameter_noinfo();
      v17 = v15[1];
      v18 = v25;
      ++v28;
      v2 = a2;
      *(_DWORD *)(v17 + v13) = v6;
      *(_DWORD *)(v17 + v13 + 4) = v18;
      v9 = v28;
    }
    else
    {
      v19 = v25;
      if ( v25 == *(_DWORD **)(v6 + 4) )
        invalid_parameter_noinfo();
      v20 = v26 == *(_DWORD **)(a2 + 8);
      v25 = (_DWORD *)*v19;
      if ( v20 )
        invalid_parameter_noinfo();
      v9 = v28;
      v2 = a2;
      v26 = (_DWORD *)*v26;
    }
  }
  return result;
}
