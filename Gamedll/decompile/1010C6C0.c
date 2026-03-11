/*
 * func-name: sub_1010C6C0
 * func-address: 0x1010c6c0
 * callers: 0x10006a87
 * callees: 0x1000c716, 0x100110ea, 0x10019b3c, 0x102c9d86
 */

int __thiscall sub_1010C6C0(int this, int a2)
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
    v3 = (*(_DWORD *)(a2 + 8) - v3) / 56;
  if ( (unsigned __int8)sub_100110EA(v3) )
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
    *(_DWORD *)(this + 8) = sub_10019B3C(v6, v9, *(void **)(this + 4));
  }
  return this;
}
