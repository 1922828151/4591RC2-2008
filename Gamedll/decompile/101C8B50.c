/*
 * func-name: sub_101C8B50
 * func-address: 0x101c8b50
 * callers: none
 * callees: 0x100033f5, 0x10006a00, 0x10008936, 0x100185d9, 0x102c9d86
 */

int *__thiscall sub_101C8B50(int *this, int a2)
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
      sub_10008936(v10[0], v10[1]);
    v5 = sub_100185D9(v4);
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
    this[2] = sub_10006A00(v8, v11, this[1]);
  }
  return this;
}
