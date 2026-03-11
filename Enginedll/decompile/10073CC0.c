/*
 * func-name: ??4CRENumericButton@@QAEAAV0@ABV0@@Z
 * func-address: 0x10073cc0
 * callers: none
 * callees: 0x10071a20
 */

int __thiscall CRENumericButton::operator=(int this, int a2)
{
  CREButton::operator=(this, a2);
  *(_BYTE *)(this + 816) = *(_BYTE *)(a2 + 816);
  *(_DWORD *)(this + 820) = *(_DWORD *)(a2 + 820);
  return this;
}
