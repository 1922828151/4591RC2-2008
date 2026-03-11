/*
 * func-name: sub_1020E6A0
 * func-address: 0x1020e6a0
 * callers: 0x10018147
 * callees: 0x10008c88, 0x1000ab05
 */

_DWORD *__thiscall sub_1020E6A0(_DWORD *this, int a2)
{
  int v4; // [esp-4h] [ebp-1Ch]

  v4 = a2;
  *this = &GameClient::LocalUser::`vftable';
  sub_10008C88(v4);
  this[19] = -1;
  this[20] = -1;
  sub_1000AB05((int)&a2, (int)&a2);
  return this;
}
