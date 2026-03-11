/*
 * func-name: ??4CPaster@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d45e0
 * callers: none
 * callees: 0x10071450
 */

int __thiscall CPaster::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(_DWORD *)(this + 532) = *(_DWORD *)(a2 + 532);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  *(_BYTE *)(this + 544) = *(_BYTE *)(a2 + 544);
  std::wstring::operator=(this + 548, a2 + 548);
  *(_DWORD *)(this + 576) = *(_DWORD *)(a2 + 576);
  *(_DWORD *)(this + 580) = *(_DWORD *)(a2 + 580);
  *(_DWORD *)(this + 584) = *(_DWORD *)(a2 + 584);
  *(_DWORD *)(this + 588) = *(_DWORD *)(a2 + 588);
  std::wstring::operator=(this + 592, a2 + 592);
  *(_DWORD *)(this + 620) = *(_DWORD *)(a2 + 620);
  *(_DWORD *)(this + 624) = *(_DWORD *)(a2 + 624);
  *(_DWORD *)(this + 628) = *(_DWORD *)(a2 + 628);
  *(_DWORD *)(this + 632) = *(_DWORD *)(a2 + 632);
  std::wstring::operator=(this + 636, a2 + 636);
  *(_DWORD *)(this + 664) = *(_DWORD *)(a2 + 664);
  *(_DWORD *)(this + 668) = *(_DWORD *)(a2 + 668);
  *(_DWORD *)(this + 672) = *(_DWORD *)(a2 + 672);
  *(_DWORD *)(this + 676) = *(_DWORD *)(a2 + 676);
  return this;
}
