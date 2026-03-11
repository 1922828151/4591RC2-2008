/*
 * func-name: ??4CChatMessageUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x101f20f0
 * callers: 0x1000e77d
 * callees: none
 */

_DWORD *__thiscall CChatMessageUI::operator=(_DWORD *this, int a2)
{
  CTYDialog::operator=(a2);
  this[968] = *(_DWORD *)(a2 + 3872);
  this[969] = *(_DWORD *)(a2 + 3876);
  return this;
}
