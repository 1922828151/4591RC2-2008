/*
 * func-name: sub_1014C940
 * func-address: 0x1014c940
 * callers: 0x10015dbb
 * callees: 0x1000b53c, 0x1000cf40, 0x1000fe8e
 */

int __thiscall sub_1014C940(int this, int a2)
{
  *(_DWORD *)this = &GameClient::DataObject::`vftable';
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)this = &GameClient::Bullet::`vftable';
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(float *)(this + 48) = 0.0;
  *(float *)(this + 52) = 0.0;
  *(float *)(this + 56) = 0.0;
  *(float *)(this + 64) = 0.0;
  *(float *)(this + 68) = 0.0;
  *(float *)(this + 72) = 0.0;
  *(float *)(this + 80) = 0.0;
  *(float *)(this + 84) = 0.0;
  *(float *)(this + 88) = 0.0;
  *(float *)(this + 96) = 0.0;
  *(float *)(this + 100) = 0.0;
  *(float *)(this + 104) = 0.0;
  qmemcpy((void *)(this + 48), (const void *)(a2 + 48), 0x41u);
  sub_1000FE8E(a2 + 116);
  *(_DWORD *)(this + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  *(float *)(this + 140) = *(float *)(a2 + 140);
  *(float *)(this + 144) = *(float *)(a2 + 144);
  *(double *)(this + 152) = *(double *)(a2 + 152);
  *(_DWORD *)(this + 160) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(this + 164) = *(_DWORD *)(a2 + 164);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(this + 172) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  sub_1000CF40((void *)(a2 + 180));
  sub_1000CF40((void *)(a2 + 260));
  sub_1000B53C((void *)(a2 + 340));
  sub_1000B53C((void *)(a2 + 460));
  return this;
}
