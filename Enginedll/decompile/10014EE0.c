/*
 * func-name: sub_10014EE0
 * func-address: 0x10014ee0
 * callers: 0x10015030
 * callees: 0x1000bce0, 0x10013d90, 0x10014f60, 0x101a2522
 */

_DWORD *__thiscall sub_10014EE0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v5; // [esp-18h] [ebp-38h]
  _DWORD *v6; // [esp-10h] [ebp-30h]
  _DWORD *v7; // [esp-8h] [ebp-28h]
  _DWORD v8[8]; // [esp+0h] [ebp-20h] BYREF

  v8[4] = v8;
  v8[3] = this;
  v3 = sub_1000BCE0();
  this[1] = v3;
  this[2] = 0;
  v7 = *(_DWORD **)(a2 + 4);
  v6 = (_DWORD *)*v7;
  v5 = *v3;
  v8[7] = 0;
  sub_10013D90(this, (int)this, v5, a2, v6, a2, v7, a2);
  return this;
}
