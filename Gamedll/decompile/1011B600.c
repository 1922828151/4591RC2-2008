/*
 * func-name: sub_1011B600
 * func-address: 0x1011b600
 * callers: 0x1000eb1a
 * callees: 0x10002afe, 0x100066ea, 0x1000d0c1, 0x1000e192, 0x102c9d86
 */

int __thiscall sub_1011B600(int this, int a2)
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
  v10[4] = this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    v4 = (*(_DWORD *)(a2 + 8) - v3) / 936;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x460460 )
      sub_100066EA(v10[0], v10[1]);
    v5 = sub_10002AFE(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = v5 + 936 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      _invalid_parameter_noinfo();
    v8 = *(void **)(a2 + 4);
    if ( (unsigned int)v8 > *(_DWORD *)(a2 + 8) )
      _invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_1000D0C1(v8, v11, *(void **)(this + 4));
  }
  return this;
}
