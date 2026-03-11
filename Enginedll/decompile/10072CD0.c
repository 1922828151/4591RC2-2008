/*
 * func-name: ??4CRESlider@@QAEAAV0@ABV0@@Z
 * func-address: 0x10072cd0
 * callers: none
 * callees: 0x10071450
 */

int __thiscall CRESlider::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(float *)(this + 532) = *(float *)(a2 + 532);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(this + 548) = *(_DWORD *)(a2 + 548);
  *(_DWORD *)(this + 552) = *(_DWORD *)(a2 + 552);
  *(_DWORD *)(this + 556) = *(_DWORD *)(a2 + 556);
  *(_BYTE *)(this + 560) = *(_BYTE *)(a2 + 560);
  *(_BYTE *)(this + 561) = *(_BYTE *)(a2 + 561);
  *(_DWORD *)(this + 564) = *(_DWORD *)(a2 + 564);
  *(_DWORD *)(this + 568) = *(_DWORD *)(a2 + 568);
  *(_DWORD *)(this + 572) = *(_DWORD *)(a2 + 572);
  *(_DWORD *)(this + 576) = *(_DWORD *)(a2 + 576);
  std::wstring::operator=(this + 580, a2 + 580);
  std::wstring::operator=(this + 608, a2 + 608);
  return this;
}
