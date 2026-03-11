/*
 * func-name: ??4CREStatic@@QAEAAV0@ABV0@@Z
 * func-address: 0x100718a0
 * callers: 0x10071a20, 0x10073a80, 0x10073c20, 0x10073e50, 0x10075bb0, 0x10076460, 0x100d4360, 0x100d4530, 0x100d4570
 * callees: 0x10071450
 */

int __thiscall CREStatic::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  std::wstring::operator=(this + 532, a2 + 532);
  *(_DWORD *)(this + 560) = *(_DWORD *)(a2 + 560);
  qmemcpy((void *)(this + 564), (const void *)(a2 + 564), 0x51u);
  *(_DWORD *)(this + 648) = *(_DWORD *)(a2 + 648);
  *(_DWORD *)(this + 652) = *(_DWORD *)(a2 + 652);
  std::wstring::operator=(this + 656, a2 + 656);
  *(_DWORD *)(this + 684) = *(_DWORD *)(a2 + 684);
  *(_BYTE *)(this + 688) = *(_BYTE *)(a2 + 688);
  *(_DWORD *)(this + 692) = *(_DWORD *)(a2 + 692);
  return this;
}
