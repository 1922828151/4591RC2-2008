/*
 * func-name: sub_100A5150
 * func-address: 0x100a5150
 * callers: 0x1000bff5
 * callees: 0x1000620d, 0x100134f8, 0x1001936c, 0x102c9d86
 */

int *__thiscall sub_100A5150(int *this, int a2)
{
  int v3; // eax
  unsigned int v4; // eax
  bool v5; // cc
  unsigned int v6; // ebx
  _DWORD v8[5]; // [esp+0h] [ebp-28h] BYREF
  unsigned int v9; // [esp+14h] [ebp-14h]
  _DWORD *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = v8;
  v8[4] = this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
    v3 = (*(_DWORD *)(a2 + 8) - v3) / 28;
  if ( (unsigned __int8)sub_100134F8(v3) )
  {
    v4 = *(_DWORD *)(a2 + 8);
    v5 = *(_DWORD *)(a2 + 4) <= v4;
    v11 = 0;
    v9 = v4;
    if ( !v5 )
      _invalid_parameter_noinfo();
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 > *(_DWORD *)(a2 + 8) )
      _invalid_parameter_noinfo();
    this[2] = sub_1000620D(v6, v9, this[1]);
  }
  return this;
}
