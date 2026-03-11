/*
 * func-name: ??4AsyncLoader@@QAEAAV0@ABV0@@Z
 * func-address: 0x10033210
 * callers: none
 * callees: 0x10026a30, 0x1002f7d0, 0x10032060, 0x100323b0, 0x10032a70, 0x10032ab0, 0x10032db0
 */

int __thiscall AsyncLoader::operator=(int this, _DWORD *a2)
{
  _DWORD *v5; // [esp+Ch] [ebp-4h]
  _DWORD *v6; // [esp+Ch] [ebp-4h]
  _DWORD *v7; // [esp+14h] [ebp+4h]
  _DWORD *v8; // [esp+14h] [ebp+4h]

  *(_DWORD *)(this + 4) = a2[1];
  sub_10026A30((_DWORD *)(this + 8), (int)(a2 + 2));
  if ( (_DWORD *)(this + 24) != a2 + 6 )
    sub_100323B0((_DWORD *)(this + 24), (int)(a2 + 6));
  if ( (_DWORD *)(this + 64) != a2 + 16 )
    sub_10032DB0((_DWORD *)(this + 64), (int)(a2 + 16));
  if ( (_DWORD *)(this + 104) != a2 + 26 )
  {
    v7 = (_DWORD *)a2[27];
    v5 = *(_DWORD **)a2[27];
    sub_10032A70((_DWORD *)(this + 104));
    sub_10032AB0(
      (_DWORD *)(this + 104),
      this + 104,
      **(_DWORD **)(this + 108),
      (int)(a2 + 26),
      v5,
      (int)(a2 + 26),
      v7,
      (int)v7);
  }
  if ( (_DWORD *)(this + 116) != a2 + 29 )
  {
    v8 = (_DWORD *)a2[30];
    v6 = (_DWORD *)*v8;
    sub_10032A70((_DWORD *)(this + 116));
    sub_10032AB0(
      (_DWORD *)(this + 116),
      this + 116,
      **(_DWORD **)(this + 120),
      (int)(a2 + 29),
      v6,
      (int)(a2 + 29),
      v8,
      (int)v8);
  }
  *(_DWORD *)(this + 128) = a2[32];
  *(_DWORD *)(this + 132) = a2[33];
  *(_DWORD *)(this + 136) = a2[34];
  *(_DWORD *)(this + 140) = a2[35];
  *(_DWORD *)(this + 144) = a2[36];
  *(_DWORD *)(this + 148) = a2[37];
  *(_DWORD *)(this + 152) = a2[38];
  *(_DWORD *)(this + 156) = a2[39];
  *(_DWORD *)(this + 160) = a2[40];
  *(_DWORD *)(this + 164) = a2[41];
  *(_DWORD *)(this + 168) = a2[42];
  *(_DWORD *)(this + 172) = a2[43];
  if ( (_DWORD *)(this + 176) != a2 + 44 )
    sub_1002F7D0((_DWORD *)(this + 176), (int)(a2 + 44));
  if ( (_DWORD *)(this + 216) != a2 + 54 )
    sub_1002F7D0((_DWORD *)(this + 216), (int)(a2 + 54));
  if ( (_DWORD *)(this + 256) != a2 + 64 )
    sub_1002F7D0((_DWORD *)(this + 256), (int)(a2 + 64));
  if ( (_DWORD *)(this + 296) != a2 + 74 )
    sub_1002F7D0((_DWORD *)(this + 296), (int)(a2 + 74));
  if ( (_DWORD *)(this + 336) != a2 + 84 )
    sub_1002F7D0((_DWORD *)(this + 336), (int)(a2 + 84));
  if ( (_DWORD *)(this + 376) != a2 + 94 )
    sub_1002F7D0((_DWORD *)(this + 376), (int)(a2 + 94));
  if ( (_DWORD *)(this + 416) != a2 + 104 )
    sub_10032060((_DWORD *)(this + 416), (int)(a2 + 104));
  return this;
}
