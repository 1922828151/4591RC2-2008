/*
 * func-name: ??4CREControl@@QAEAAV0@ABV0@@Z
 * func-address: 0x10071450
 * callers: 0x100718a0, 0x10071e70, 0x100720b0, 0x10072370, 0x10072640, 0x100727e0, 0x10072cd0, 0x10072f40, 0x100738a0, 0x10073b80, 0x10074310, 0x100747f0, 0x100d4140, 0x100d4190, 0x100d4210, 0x100d44f0, 0x100d45e0
 * callees: 0x100711d0
 */

int __thiscall CREControl::operator=(int this, int a2)
{
  int v4; // ebx
  int v5; // ebp
  int v7; // [esp+14h] [ebp+4h]

  sub_100711D0((int **)this, a2);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_BYTE *)(this + 84) = *(_BYTE *)(a2 + 84);
  *(_BYTE *)(this + 85) = *(_BYTE *)(a2 + 85);
  *(_BYTE *)(this + 86) = *(_BYTE *)(a2 + 86);
  *(_BYTE *)(this + 87) = *(_BYTE *)(a2 + 87);
  *(_BYTE *)(this + 88) = *(_BYTE *)(a2 + 88);
  *(_BYTE *)(this + 89) = *(_BYTE *)(a2 + 89);
  *(_BYTE *)(this + 90) = *(_BYTE *)(a2 + 90);
  *(_BYTE *)(this + 91) = *(_BYTE *)(a2 + 91);
  *(_BYTE *)(this + 92) = *(_BYTE *)(a2 + 92);
  *(_BYTE *)(this + 93) = *(_BYTE *)(a2 + 93);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(this + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(this + 128) = *(_DWORD *)(a2 + 128);
  *(_BYTE *)(this + 132) = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  *(_BYTE *)(this + 156) = *(_BYTE *)(a2 + 156);
  *(_BYTE *)(this + 157) = *(_BYTE *)(a2 + 157);
  *(float *)(this + 160) = *(float *)(a2 + 160);
  *(_DWORD *)(this + 164) = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(this + 172) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  v4 = this + 180;
  v5 = a2 - this;
  v7 = 7;
  do
  {
    std::wstring::operator=(v4, v4 + v5);
    v4 += 28;
    --v7;
  }
  while ( v7 );
  *(_DWORD *)(this + 376) = *(_DWORD *)(a2 + 376);
  *(_DWORD *)(this + 380) = *(_DWORD *)(a2 + 380);
  *(_DWORD *)(this + 384) = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(this + 388) = *(_DWORD *)(a2 + 388);
  *(_DWORD *)(this + 392) = *(_DWORD *)(a2 + 392);
  *(_DWORD *)(this + 396) = *(_DWORD *)(a2 + 396);
  *(_DWORD *)(this + 400) = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(this + 404) = *(_DWORD *)(a2 + 404);
  *(_DWORD *)(this + 408) = *(_DWORD *)(a2 + 408);
  *(_DWORD *)(this + 412) = *(_DWORD *)(a2 + 412);
  *(_DWORD *)(this + 416) = *(_DWORD *)(a2 + 416);
  *(_DWORD *)(this + 420) = *(_DWORD *)(a2 + 420);
  *(_DWORD *)(this + 424) = *(_DWORD *)(a2 + 424);
  *(_DWORD *)(this + 428) = *(_DWORD *)(a2 + 428);
  *(_DWORD *)(this + 432) = *(_DWORD *)(a2 + 432);
  *(_DWORD *)(this + 436) = *(_DWORD *)(a2 + 436);
  *(_DWORD *)(this + 440) = *(_DWORD *)(a2 + 440);
  *(_DWORD *)(this + 444) = *(_DWORD *)(a2 + 444);
  *(_DWORD *)(this + 448) = *(_DWORD *)(a2 + 448);
  *(_DWORD *)(this + 452) = *(_DWORD *)(a2 + 452);
  *(_DWORD *)(this + 456) = *(_DWORD *)(a2 + 456);
  *(_DWORD *)(this + 460) = *(_DWORD *)(a2 + 460);
  *(_DWORD *)(this + 464) = *(_DWORD *)(a2 + 464);
  *(_DWORD *)(this + 468) = *(_DWORD *)(a2 + 468);
  *(_DWORD *)(this + 472) = *(_DWORD *)(a2 + 472);
  *(_DWORD *)(this + 476) = *(_DWORD *)(a2 + 476);
  *(_DWORD *)(this + 480) = *(_DWORD *)(a2 + 480);
  *(_DWORD *)(this + 484) = *(_DWORD *)(a2 + 484);
  *(_DWORD *)(this + 488) = *(_DWORD *)(a2 + 488);
  *(_DWORD *)(this + 492) = *(_DWORD *)(a2 + 492);
  *(_DWORD *)(this + 496) = *(_DWORD *)(a2 + 496);
  *(_DWORD *)(this + 500) = *(_DWORD *)(a2 + 500);
  *(_DWORD *)(this + 504) = *(_DWORD *)(a2 + 504);
  *(_DWORD *)(this + 508) = *(_DWORD *)(a2 + 508);
  *(_DWORD *)(this + 512) = *(_DWORD *)(a2 + 512);
  *(_BYTE *)(this + 516) = *(_BYTE *)(a2 + 516);
  *(_DWORD *)(this + 520) = *(_DWORD *)(a2 + 520);
  *(_DWORD *)(this + 524) = *(_DWORD *)(a2 + 524);
  *(float *)(this + 528) = *(float *)(a2 + 528);
  return this;
}
