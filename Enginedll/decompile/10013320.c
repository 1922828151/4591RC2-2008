/*
 * func-name: ??4Camera@@QAEAAV0@ABV0@@Z
 * func-address: 0x10013320
 * callers: 0x100154c0, 0x10074310, 0x10074f10, 0x10087a10, 0x10088400
 * callees: 0x1000b680, 0x10012f30
 */

int __thiscall Camera::operator=(int this, int a2)
{
  int result; // eax

  sub_1000B680((_DWORD *)this, a2);
  sub_10012F30(this + 140, (_DWORD *)(a2 + 140));
  qmemcpy((void *)(this + 156), (const void *)(a2 + 156), 0x40u);
  qmemcpy((void *)(this + 220), (const void *)(a2 + 220), 0x40u);
  qmemcpy((void *)(this + 284), (const void *)(a2 + 284), 0x41u);
  *(_DWORD *)(this + 352) = *(_DWORD *)(a2 + 352);
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364);
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368);
  *(_DWORD *)(this + 372) = *(_DWORD *)(a2 + 372);
  *(_DWORD *)(this + 376) = *(_DWORD *)(a2 + 376);
  *(_DWORD *)(this + 380) = *(_DWORD *)(a2 + 380);
  *(_DWORD *)(this + 384) = *(_DWORD *)(a2 + 384);
  *(float *)(this + 388) = *(float *)(a2 + 388);
  result = this;
  *(float *)(this + 392) = *(float *)(a2 + 392);
  *(float *)(this + 396) = *(float *)(a2 + 396);
  *(float *)(this + 400) = *(float *)(a2 + 400);
  *(float *)(this + 404) = *(float *)(a2 + 404);
  *(float *)(this + 408) = *(float *)(a2 + 408);
  *(float *)(this + 412) = *(float *)(a2 + 412);
  *(_DWORD *)(this + 416) = *(_DWORD *)(a2 + 416);
  return result;
}
