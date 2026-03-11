/*
 * func-name: sub_10032D30
 * func-address: 0x10032d30
 * callers: 0x10033040
 * callees: 0x1001d800, 0x10032ab0, 0x10032d10, 0x101a2522
 */

_DWORD *__thiscall sub_10032D30(_DWORD *this, int a2)
{
  int *v3; // eax
  int v5; // [esp-18h] [ebp-38h]
  _DWORD *v6; // [esp-10h] [ebp-30h]
  _DWORD *v7; // [esp-8h] [ebp-28h]
  _DWORD v8[8]; // [esp+0h] [ebp-20h] BYREF

  v8[4] = v8;
  v8[3] = this;
  v3 = sub_1001D800();
  this[1] = v3;
  this[2] = 0;
  v7 = *(_DWORD **)(a2 + 4);
  v6 = (_DWORD *)*v7;
  v5 = *v3;
  v8[7] = 0;
  sub_10032AB0(this, (int)this, v5, a2, v6, a2, v7, a2);
  return this;
}
