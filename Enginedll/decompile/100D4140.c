/*
 * func-name: ??4CControlBox@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d4140
 * callers: none
 * callees: 0x10071450, 0x100d1cc0
 */

int __thiscall CControlBox::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  sub_100D1CC0((_DWORD *)(this + 532), a2 + 532);
  *(_BYTE *)(this + 548) = *(_BYTE *)(a2 + 548);
  *(_DWORD *)(this + 552) = *(_DWORD *)(a2 + 552);
  *(_DWORD *)(this + 556) = *(_DWORD *)(a2 + 556);
  return this;
}
