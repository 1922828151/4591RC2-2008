/*
 * func-name: ??4CREContainer@@QAEAAV0@ABV0@@Z
 * func-address: 0x10073b80
 * callers: none
 * callees: 0x1006e6a0, 0x1006f440, 0x10071450
 */

_DWORD *__thiscall CREContainer::operator=(_DWORD *this, int a2)
{
  CREControl::operator=((int)this, a2);
  sub_1006E6A0((int)(this + 133), a2 + 532);
  sub_1006F440(this + 137, a2 + 548);
  return this;
}
