/*
 * func-name: sub_10126E60
 * func-address: 0x10126e60
 * callers: 0x100077e8
 * callees: 0x10007fa4, 0x10010ce9, 0x100189e9, 0x10019a15, 0x102c9d86
 */

int *__thiscall sub_10126E60(int *this, int a2)
{
  int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // cc
  unsigned int v8; // esi
  int v10[5]; // [esp+0h] [ebp-28h] BYREF
  unsigned int v11; // [esp+14h] [ebp-14h]
  int *v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+24h] [ebp-4h]

  v12 = v10;
  v10[4] = (int)this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    v4 = (*(_DWORD *)(a2 + 8) - v3) >> 4;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0xFFFFFFF )
      sub_10010CE9(v10[0], v10[1]);
    v5 = sub_10007FA4(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = v5 + 16 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      _invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      _invalid_parameter_noinfo();
    this[2] = sub_10019A15(v8, v11, this[1]);
  }
  return this;
}
