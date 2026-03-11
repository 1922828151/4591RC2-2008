/*
 * func-name: sub_100567C0
 * func-address: 0x100567c0
 * callers: 0x1000f5ce
 * callees: 0x1000151e, 0x1000a786, 0x10015253, 0x10016135, 0x102c9d86
 */

int *__thiscall sub_100567C0(int *this, int a2)
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
    v4 = (*(_DWORD *)(a2 + 8) - v3) / 20;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0xCCCCCCC )
      sub_1000A786(v10[0], v10[1]);
    v5 = sub_10015253(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = v5 + 20 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      _invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      _invalid_parameter_noinfo();
    this[2] = sub_1000151E(v8, v11, this[1]);
  }
  return this;
}
