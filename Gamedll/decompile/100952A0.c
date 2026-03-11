/*
 * func-name: ??4CameraHandler@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100952a0
 * callers: 0x100160c2
 * callees: none
 */

int __thiscall CameraHandler::operator=(int this, int a2)
{
  int result; // eax

  Camera::operator=(a2);
  *(_BYTE *)(this + 420) = *(_BYTE *)(a2 + 420);
  *(_BYTE *)(this + 421) = *(_BYTE *)(a2 + 421);
  *(float *)(this + 424) = *(float *)(a2 + 424);
  *(float *)(this + 428) = *(float *)(a2 + 428);
  *(float *)(this + 432) = *(float *)(a2 + 432);
  *(float *)(this + 436) = *(float *)(a2 + 436);
  *(_DWORD *)(this + 440) = *(_DWORD *)(a2 + 440);
  *(_DWORD *)(this + 444) = *(_DWORD *)(a2 + 444);
  *(_DWORD *)(this + 448) = *(_DWORD *)(a2 + 448);
  *(_DWORD *)(this + 452) = *(_DWORD *)(a2 + 452);
  *(_DWORD *)(this + 456) = *(_DWORD *)(a2 + 456);
  *(_DWORD *)(this + 460) = *(_DWORD *)(a2 + 460);
  *(_DWORD *)(this + 464) = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(this + 468) = *(_DWORD *)(a2 + 468);
  *(_DWORD *)(this + 472) = *(_DWORD *)(a2 + 472);
  *(float *)(this + 476) = *(float *)(a2 + 476);
  result = this;
  *(float *)(this + 480) = *(float *)(a2 + 480);
  *(_BYTE *)(this + 484) = *(_BYTE *)(a2 + 484);
  qmemcpy((void *)(this + 488), (const void *)(a2 + 488), 0x40u);
  qmemcpy((void *)(this + 552), (const void *)(a2 + 552), 0x40u);
  qmemcpy((void *)(this + 616), (const void *)(a2 + 616), 0x48u);
  qmemcpy((void *)(this + 688), (const void *)(a2 + 688), 0x44u);
  return result;
}
