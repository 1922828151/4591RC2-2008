/*
 * func-name: ??4CRETextBox@@QAEAAV0@ABV0@@Z
 * func-address: 0x10073c20
 * callers: none
 * callees: 0x100718a0
 */

int __thiscall CRETextBox::operator=(int this, int a2)
{
  CREStatic::operator=(this, a2);
  *(_DWORD *)(this + 696) = *(_DWORD *)(a2 + 696);
  *(_BYTE *)(this + 700) = *(_BYTE *)(a2 + 700);
  *(_BYTE *)(this + 701) = *(_BYTE *)(a2 + 701);
  *(_DWORD *)(this + 704) = *(_DWORD *)(a2 + 704);
  *(_DWORD *)(this + 708) = *(_DWORD *)(a2 + 708);
  return this;
}
