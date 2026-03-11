/*
 * func-name: ??4CPictureLabel@@QAEAAV0@ABV0@@Z
 * func-address: 0x100738a0
 * callers: none
 * callees: 0x10071450
 */

int __thiscall CPictureLabel::operator=(int this, int a2)
{
  CREControl::operator=(this, a2);
  *(_DWORD *)(this + 532) = *(_DWORD *)(a2 + 532);
  *(_DWORD *)(this + 536) = *(_DWORD *)(a2 + 536);
  *(_DWORD *)(this + 540) = *(_DWORD *)(a2 + 540);
  *(_DWORD *)(this + 544) = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(this + 548) = *(_DWORD *)(a2 + 548);
  *(_DWORD *)(this + 552) = *(_DWORD *)(a2 + 552);
  *(_BYTE *)(this + 556) = *(_BYTE *)(a2 + 556);
  *(float *)(this + 560) = *(float *)(a2 + 560);
  *(_DWORD *)(this + 564) = *(_DWORD *)(a2 + 564);
  *(_DWORD *)(this + 568) = *(_DWORD *)(a2 + 568);
  *(_DWORD *)(this + 572) = *(_DWORD *)(a2 + 572);
  qmemcpy((void *)(this + 576), (const void *)(a2 + 576), 0xD4u);
  qmemcpy((void *)(this + 788), (const void *)(a2 + 788), 0xC4u);
  std::wstring::operator=(this + 984, a2 + 984);
  *(_BYTE *)(this + 1012) = *(_BYTE *)(a2 + 1012);
  *(_BYTE *)(this + 1013) = *(_BYTE *)(a2 + 1013);
  *(_BYTE *)(this + 1014) = *(_BYTE *)(a2 + 1014);
  *(_DWORD *)(this + 1016) = *(_DWORD *)(a2 + 1016);
  *(_DWORD *)(this + 1020) = *(_DWORD *)(a2 + 1020);
  *(_DWORD *)(this + 1024) = *(_DWORD *)(a2 + 1024);
  *(_DWORD *)(this + 1028) = *(_DWORD *)(a2 + 1028);
  *(_BYTE *)(this + 1032) = *(_BYTE *)(a2 + 1032);
  return this;
}
