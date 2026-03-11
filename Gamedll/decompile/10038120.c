/*
 * func-name: sub_10038120
 * func-address: 0x10038120
 * callers: none
 * callees: 0x10002d42, 0x1000a484, 0x1000d125
 */

_DWORD *__thiscall sub_10038120(_DWORD *this)
{
  int v2; // edi
  int v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+4h] [ebp-1Ch]

  v2 = (int)(this + 3);
  *this = &GameClient::AIControl::`vftable';
  sub_10002D42(v4, v5);
  sub_1000A484(v2);
  sub_1000D125((int)(this + 41), v2);
  this[2] = 0;
  *((_BYTE *)this + 4) = 0;
  return this;
}
