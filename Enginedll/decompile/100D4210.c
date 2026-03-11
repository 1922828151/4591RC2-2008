/*
 * func-name: ??4CItemHolder@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d4210
 * callers: none
 * callees: 0x10071450, 0x100d0980, 0x100d0b50
 */

int __thiscall CItemHolder::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(_DWORD *)(this + 532) = *(_DWORD *)(a2 + 532);
  sub_100D0980(this + 536, a2 + 536);
  sub_100D0B50(this + 552, a2 + 552);
  *(_DWORD *)(this + 568) = *(_DWORD *)(a2 + 568);
  *(_DWORD *)(this + 572) = *(_DWORD *)(a2 + 572);
  *(_DWORD *)(this + 576) = *(_DWORD *)(a2 + 576);
  *(_DWORD *)(this + 580) = *(_DWORD *)(a2 + 580);
  *(_DWORD *)(this + 584) = *(_DWORD *)(a2 + 584);
  *(_DWORD *)(this + 588) = *(_DWORD *)(a2 + 588);
  *(_DWORD *)(this + 592) = *(_DWORD *)(a2 + 592);
  *(_DWORD *)(this + 596) = *(_DWORD *)(a2 + 596);
  *(_DWORD *)(this + 600) = *(_DWORD *)(a2 + 600);
  *(_DWORD *)(this + 604) = *(_DWORD *)(a2 + 604);
  *(_DWORD *)(this + 608) = *(_DWORD *)(a2 + 608);
  *(_DWORD *)(this + 612) = *(_DWORD *)(a2 + 612);
  *(_DWORD *)(this + 616) = *(_DWORD *)(a2 + 616);
  *(_DWORD *)(this + 620) = *(_DWORD *)(a2 + 620);
  *(_DWORD *)(this + 624) = *(_DWORD *)(a2 + 624);
  *(_BYTE *)(this + 628) = *(_BYTE *)(a2 + 628);
  *(_BYTE *)(this + 629) = *(_BYTE *)(a2 + 629);
  *(_BYTE *)(this + 630) = *(_BYTE *)(a2 + 630);
  *(_BYTE *)(this + 631) = *(_BYTE *)(a2 + 631);
  *(_BYTE *)(this + 632) = *(_BYTE *)(a2 + 632);
  *(_BYTE *)(this + 633) = *(_BYTE *)(a2 + 633);
  return this;
}
