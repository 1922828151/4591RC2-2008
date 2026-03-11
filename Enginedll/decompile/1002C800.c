/*
 * func-name: sub_1002C800
 * func-address: 0x1002c800
 * callers: 0x1002e7f0
 * callees: 0x1001ad30, 0x1001f3c0, 0x10027060, 0x1008fa90, 0x101a2522
 */

int __thiscall sub_1002C800(int this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  bool v7; // cc
  unsigned int v8; // esi
  _DWORD v10[4]; // [esp+0h] [ebp-24h] BYREF
  unsigned int v11; // [esp+10h] [ebp-14h]
  _DWORD *v12; // [esp+14h] [ebp-10h]
  int v13; // [esp+20h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 4);
  v12 = v10;
  v10[3] = this;
  if ( v2 )
    v4 = (*(_DWORD *)(a2 + 8) - v2) >> 5;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFF )
      sub_1001AD30();
    v5 = sub_1008FA90(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = v5 + 32 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_1001F3C0(v8, v11, *(CREControl **)(this + 4));
  }
  return this;
}
