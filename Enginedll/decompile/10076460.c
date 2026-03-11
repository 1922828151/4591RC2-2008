/*
 * func-name: ??4CREListCtrl@@QAEAAV0@ABV0@@Z
 * func-address: 0x10076460
 * callers: none
 * callees: 0x10070bb0, 0x100718a0, 0x100762e0
 */

_DWORD *__thiscall CREListCtrl::operator=(_DWORD *this, _DWORD *a2)
{
  CREStatic::operator=((int)this, (int)a2);
  this[174] = a2[174];
  this[175] = a2[175];
  this[176] = a2[176];
  this[177] = a2[177];
  this[178] = a2[178];
  this[179] = a2[179];
  this[180] = a2[180];
  this[181] = a2[181];
  this[182] = a2[182];
  this[183] = a2[183];
  this[184] = a2[184];
  this[185] = a2[185];
  sub_10070BB0((int)(this + 186), (int)(a2 + 186));
  sub_100762E0((int)(this + 190), (int)(a2 + 190));
  this[194] = a2[194];
  return this;
}
