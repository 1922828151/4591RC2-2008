/*
 * func-name: sub_10115A30
 * func-address: 0x10115a30
 * callers: 0x10115c20
 * callees: 0x1008fa90, 0x1010e2d0, 0x10114d30, 0x10115700, 0x101a2522
 */

int __thiscall sub_10115A30(int this, int a2)
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
    v4 = (*(_DWORD *)(a2 + 8) - v2) >> 5;
  else
    v4 = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFF )
      sub_1010E2D0();
    v5 = (char *)sub_1008FA90(v4);
    *(_DWORD *)(this + 4) = v5;
    *(_DWORD *)(this + 8) = v5;
    *(_DWORD *)(this + 12) = &v5[32 * v4];
    v6 = *(_DWORD *)(a2 + 8);
    v7 = *(_DWORD *)(a2 + 4) <= v6;
    v13 = 0;
    v11 = v6;
    if ( !v7 )
      invalid_parameter_noinfo();
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 > *(_DWORD *)(a2 + 8) )
      invalid_parameter_noinfo();
    *(_DWORD *)(this + 8) = sub_10114D30(v8, v11, *(CREControl **)(this + 4));
  }
  return this;
}
