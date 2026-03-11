/*
 * func-name: ??4CRENumericEditBox@@QAEAAV0@ABV0@@Z
 * func-address: 0x10073d20
 * callers: none
 * callees: 0x10072f40
 */

_DWORD *__thiscall CRENumericEditBox::operator=(_DWORD *this, int a2)
{
  CREEditBox::operator=((int)this, a2);
  this[198] = *(_DWORD *)(a2 + 792);
  return this;
}
