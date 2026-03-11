/*
 * func-name: ??4CChatInputUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1007a470
 * callers: 0x1000c59f
 * callees: 0x10017977
 */

_DWORD *__thiscall CChatInputUI::operator=(_DWORD *this, _DWORD *a2)
{
  CTYDialog::operator=(a2);
  this[968] = a2[968];
  this[969] = a2[969];
  this[970] = a2[970];
  sub_10017977((int)(a2 + 971));
  return this;
}
