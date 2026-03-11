/*
 * func-name: ??4CLoginUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10217d50
 * callers: 0x1001234b
 * callees: none
 */

_DWORD *__thiscall CLoginUI::operator=(_DWORD *this, int a2)
{
  CTYDialog::operator=(a2);
  this[968] = *(_DWORD *)(a2 + 3872);
  this[969] = *(_DWORD *)(a2 + 3876);
  return this;
}
