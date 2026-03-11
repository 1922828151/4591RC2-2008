/*
 * func-name: ??4CAlarmMessageUI@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x101cee80
 * callers: 0x100085fd
 * callees: none
 */

_DWORD *__thiscall CAlarmMessageUI::operator=(_DWORD *this, int a2)
{
  CTYDialog::operator=(a2);
  this[968] = *(_DWORD *)(a2 + 3872);
  this[969] = *(_DWORD *)(a2 + 3876);
  return this;
}
