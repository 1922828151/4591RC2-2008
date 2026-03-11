/*
 * func-name: ??4CRERadioButton@@QAEAAV0@ABV0@@Z
 * func-address: 0x10071d10
 * callers: none
 * callees: 0x10071c60
 */

_DWORD *__thiscall CRERadioButton::operator=(_DWORD *this, int a2)
{
  CRECheckBox::operator=((int)this, a2);
  this[213] = *(_DWORD *)(a2 + 852);
  return this;
}
