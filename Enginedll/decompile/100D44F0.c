/*
 * func-name: ??4CSeperateLine@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d44f0
 * callers: none
 * callees: 0x10071450
 */

int __thiscall CSeperateLine::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(_DWORD *)(this + 532) = *(_DWORD *)(a2 + 532);
  *(_BYTE *)(this + 536) = *(_BYTE *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  return this;
}
