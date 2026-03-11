/*
 * func-name: sub_10059870
 * func-address: 0x10059870
 * callers: 0x1000e53e
 * callees: 0x100090f7, 0x1000c27a, 0x100170f3, 0x102c9d86
 */

int *__thiscall sub_10059870(int *this, int a2)
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
    v3 = (*(_DWORD *)(a2 + 8) - v3) / 120;
  if ( (unsigned __int8)sub_1000C27A(v3) )
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
    this[2] = sub_100170F3(v6, v9, this[1]);
  }
  return this;
}
