/*
 * func-name: ??4CHotZonePic@@QAEAAV0@ABV0@@Z
 * func-address: 0x100747f0
 * callers: none
 * callees: 0x1000d9a0, 0x1006eb30, 0x1006ed00, 0x10071450
 */

int __thiscall CHotZonePic::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(_DWORD *)(this + 532) = *(_DWORD *)(a2 + 532);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  sub_1006EB30(this + 544, a2 + 544);
  sub_1006ED00(this + 560, a2 + 560);
  sub_1000D9A0(this + 576, a2 + 576);
  *(_DWORD *)(this + 592) = *(_DWORD *)(a2 + 592);
  *(_DWORD *)(this + 596) = *(_DWORD *)(a2 + 596);
  *(_DWORD *)(this + 600) = *(_DWORD *)(a2 + 600);
  *(_DWORD *)(this + 604) = *(_DWORD *)(a2 + 604);
  *(_DWORD *)(this + 608) = *(_DWORD *)(a2 + 608);
  *(_DWORD *)(this + 612) = *(_DWORD *)(a2 + 612);
  *(_DWORD *)(this + 616) = *(_DWORD *)(a2 + 616);
  *(_DWORD *)(this + 620) = *(_DWORD *)(a2 + 620);
  *(_BYTE *)(this + 624) = *(_BYTE *)(a2 + 624);
  *(_BYTE *)(this + 625) = *(_BYTE *)(a2 + 625);
  *(_BYTE *)(this + 626) = *(_BYTE *)(a2 + 626);
  *(_BYTE *)(this + 627) = *(_BYTE *)(a2 + 627);
  *(_DWORD *)(this + 628) = *(_DWORD *)(a2 + 628);
  *(_DWORD *)(this + 632) = *(_DWORD *)(a2 + 632);
  return this;
}
