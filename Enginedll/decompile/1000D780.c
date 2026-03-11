/*
 * func-name: sub_1000D780
 * func-address: 0x1000d780
 * callers: 0x1000d860, 0x10024120, 0x100f0c50, 0x100f1180
 * callees: 0x1000a4e0, 0x1000a8b0, 0x1001e5c0, 0x1010fea0, 0x101a2522
 */

_DWORD *__thiscall sub_1000D780(_DWORD *this, int a2)
{
  int v2; // eax
  unsigned int v4; // esi
  char *v5; // eax
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
    v4 = (*(_DWORD *)(a2 + 8) - v2) >> 6;
  else
    v4 = 0;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFF )
      sub_1000A4E0();
    v5 = (char *)sub_1000A8B0(v4);
    this[1] = v5;
    this[2] = v5;
    this[3] = &v5[64 * v4];
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    this[2] = sub_1001E5C0(v8, v11, this[1]);
  }
  return this;
}
