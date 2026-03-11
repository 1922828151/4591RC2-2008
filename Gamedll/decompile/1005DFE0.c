/*
 * func-name: sub_1005DFE0
 * func-address: 0x1005dfe0
 * callers: 0x10001bd1
 * callees: 0x1001313d, 0x10013723, 0x100158ed, 0x1001a28f, 0x102c9d86
 */

int *__thiscall sub_1005DFE0(int *this, int a2)
{
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // cc
  void *v8; // esi
  int v10[5]; // [esp+0h] [ebp-28h] BYREF
  int v11; // [esp+14h] [ebp-14h]
  int *v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+24h] [ebp-4h]

  v12 = v10;
  v10[4] = (int)this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    v4 = (*(_DWORD *)(a2 + 8) - v3) >> 6;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFF )
      sub_1001A28F(v10[0], v10[1]);
    v5 = sub_10013723(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = v5 + (v4 << 6);
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      _invalid_parameter_noinfo();
    v8 = *(void **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      _invalid_parameter_noinfo();
    this[2] = sub_1001313D(v8, v11, this[1]);
  }
  return this;
}
