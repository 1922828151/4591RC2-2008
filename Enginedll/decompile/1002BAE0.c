/*
 * func-name: sub_1002BAE0
 * func-address: 0x1002bae0
 * callers: 0x1002d1e0
 * callees: 0x1001a4f0, 0x1001ee80, 0x10026e00, 0x10057020, 0x101a2522
 */

int *__thiscall sub_1002BAE0(int *this, int a2)
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
    v4 = (*(_DWORD *)(a2 + 8) - v2) / 52;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0x4EC4EC4 )
      sub_1001A4F0();
    v5 = sub_10057020(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = v5 + 52 * v4;
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    this[2] = sub_1001EE80(v8, v11, this[1]);
  }
  return this;
}
