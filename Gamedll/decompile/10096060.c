/*
 * func-name: sub_10096060
 * func-address: 0x10096060
 * callers: 0x1000e7aa
 * callees: 0x10005722, 0x10009859, 0x1000d3be, 0x100168bf, 0x102c9d86
 */

int *__thiscall sub_10096060(int *this, int a2)
{
  int v3; // eax
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // cc
  unsigned int v8; // edi
  int v10[5]; // [esp+0h] [ebp-28h] BYREF
  unsigned int v11; // [esp+14h] [ebp-14h]
  int *v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+24h] [ebp-4h]

  v12 = v10;
  v10[4] = (int)this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    v4 = (*(_DWORD *)(a2 + 8) - v3) >> 3;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFF )
      sub_100168BF(v10[0], v10[1]);
    v5 = sub_10005722(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = v5 + 8 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      _invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      _invalid_parameter_noinfo();
    this[2] = sub_10009859(v8, v11, this[1]);
  }
  return this;
}
