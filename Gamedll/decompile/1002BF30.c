/*
 * func-name: sub_1002BF30
 * func-address: 0x1002bf30
 * callers: 0x1000b613
 * callees: 0x10003fe9, 0x100076b2, 0x10017d9b, 0x102c9d86
 */

int __thiscall sub_1002BF30(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // eax
  bool v5; // cc
  void *v6; // ebx
  _DWORD v8[5]; // [esp+0h] [ebp-28h] BYREF
  int v9; // [esp+14h] [ebp-14h]
  _DWORD *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = v8;
  v8[4] = this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    v3 = (*(_DWORD *)(a2 + 8) - v3) / 28;
  if ( (unsigned __int8)sub_100076B2(v3) )
  {
    v4 = *(_DWORD *)(a2 + 8);
    v5 = *(_DWORD *)(a2 + 4) <= v4;
    v11 = 0;
    v9 = v4;
    if ( !v5 )
      _invalid_parameter_noinfo();
    v6 = *(void **)(a2 + 4);
    if ( (unsigned int)v6 > *(_DWORD *)(a2 + 8) )
      _invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_10017D9B(v6, v9, *(void **)(this + 4));
  }
  return this;
}
