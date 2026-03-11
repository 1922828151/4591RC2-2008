/*
 * func-name: ??4WaterDecal@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100a6440
 * callers: 0x10019b05
 * callees: 0x1000abd2
 */

int __thiscall WaterDecal::operator=(int this, int a2)
{
  FXSystem::operator=(a2);
  sub_1000ABD2(a2 + 176);
  *(float *)(this + 192) = *(float *)(a2 + 192);
  *(float *)(this + 196) = *(float *)(a2 + 196);
  *(float *)(this + 200) = *(float *)(a2 + 200);
  *(float *)(this + 204) = *(float *)(a2 + 204);
  *(float *)(this + 208) = *(float *)(a2 + 208);
  *(float *)(this + 212) = *(float *)(a2 + 212);
  *(float *)(this + 216) = *(float *)(a2 + 216);
  *(float *)(this + 220) = *(float *)(a2 + 220);
  *(float *)(this + 224) = *(float *)(a2 + 224);
  *(float *)(this + 228) = *(float *)(a2 + 228);
  *(float *)(this + 232) = *(float *)(a2 + 232);
  *(float *)(this + 236) = *(float *)(a2 + 236);
  *(float *)(this + 240) = *(float *)(a2 + 240);
  *(_DWORD *)(this + 244) = *(_DWORD *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(this + 260) = *(_DWORD *)(a2 + 260);
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(this + 268) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  qmemcpy((void *)(this + 276), (const void *)(a2 + 276), 0x50u);
  return this;
}
