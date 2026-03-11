/*
 * func-name: sub_1009FB40
 * func-address: 0x1009fb40
 * callers: 0x1000cdd3
 * callees: 0x102c1270, 0x102c9ea2
 */

int __thiscall sub_1009FB40(int this)
{
  *(_DWORD *)this = &FXWrapper::`vftable';
  std::string::string((void *)(this + 8));
  *(float *)(this + 44) = 0.0;
  *(float *)(this + 48) = 0.0;
  *(float *)(this + 52) = 0.0;
  *(float *)(this + 56) = 0.0;
  *(float *)(this + 60) = 0.0;
  *(float *)(this + 64) = 0.0;
  *(float *)(this + 72) = 0.0;
  *(float *)(this + 76) = 0.0;
  *(float *)(this + 80) = 0.0;
  *(float *)(this + 88) = 0.0;
  *(float *)(this + 92) = 0.0;
  *(float *)(this + 96) = 0.0;
  *(float *)(this + 104) = 0.0;
  *(float *)(this + 108) = 0.0;
  *(float *)(this + 112) = 0.0;
  memset((void *)(this + 56), 0, 0x40u);
  sub_102C1270(1.0);
  *(float *)(this + 116) = 1.0;
  *(float *)(this + 132) = 0.0;
  *(float *)(this + 136) = 0.0;
  *(float *)(this + 140) = 0.0;
  *(float *)(this + 144) = 0.0;
  *(float *)(this + 148) = 0.0;
  *(float *)(this + 152) = 0.0;
  *(float *)(this + 120) = 1.0;
  *(_BYTE *)(this + 156) = 1;
  *(float *)(this + 124) = 1.0;
  *(_BYTE *)(this + 128) = 1;
  *(_DWORD *)(this + 4) = 0;
  *(float *)(this + 144) = 0.0;
  *(float *)(this + 132) = 0.0;
  *(float *)(this + 148) = 0.0;
  *(float *)(this + 136) = 0.0;
  *(float *)(this + 152) = 0.0;
  *(float *)(this + 140) = 0.0;
  return this;
}
