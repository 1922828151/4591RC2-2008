/*
 * func-name: ??4ModelFrame@@QAEAAU0@ABU0@@Z
 * func-address: 0x10028a50
 * callers: 0x1009f940
 * callees: 0x10020130, 0x10021c60, 0x10025190, 0x10025b10
 */

int __thiscall ModelFrame::operator=(int this, int a2)
{
  sub_10021C60(this, a2);
  *(_BYTE *)(this + 16) = *(_BYTE *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  std::vector<BBox>::operator=(this + 24, a2 + 24);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  std::string::operator=(this + 44, a2 + 44);
  std::string::operator=(this + 72, a2 + 72);
  qmemcpy((void *)(this + 100), (const void *)(a2 + 100), 0x40u);
  qmemcpy((void *)(this + 164), (const void *)(a2 + 164), 0x40u);
  qmemcpy((void *)(this + 228), (const void *)(a2 + 228), 0x40u);
  qmemcpy((void *)(this + 292), (const void *)(a2 + 292), 0x55u);
  *(_DWORD *)(this + 384) = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(this + 388) = *(_DWORD *)(a2 + 388);
  *(_DWORD *)(this + 392) = *(_DWORD *)(a2 + 392);
  *(_DWORD *)(this + 396) = *(_DWORD *)(a2 + 396);
  *(_DWORD *)(this + 400) = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(this + 404) = *(_DWORD *)(a2 + 404);
  *(_DWORD *)(this + 408) = *(_DWORD *)(a2 + 408);
  *(_DWORD *)(this + 412) = *(_DWORD *)(a2 + 412);
  *(_DWORD *)(this + 416) = *(_DWORD *)(a2 + 416);
  std::vector<Matrix *>::operator=(this + 420, a2 + 420);
  sub_10025B10(this + 436, a2 + 436);
  *(_DWORD *)(this + 452) = *(_DWORD *)(a2 + 452);
  return this;
}
