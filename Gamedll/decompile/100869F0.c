/*
 * func-name: ??4ParticleSystem@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100869f0
 * callers: 0x10007e19
 * callees: 0x1000c928
 */

int __thiscall ParticleSystem::operator=(int this, int a2)
{
  FXSystem::operator=(a2);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  sub_1000C928(a2 + 188);
  *(_DWORD *)(this + 204) = *(_DWORD *)(a2 + 204);
  *(float *)(this + 208) = *(float *)(a2 + 208);
  *(_BYTE *)(this + 212) = *(_BYTE *)(a2 + 212);
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216);
  *(_BYTE *)(this + 220) = *(_BYTE *)(a2 + 220);
  *(_DWORD *)(this + 224) = *(_DWORD *)(a2 + 224);
  *(float *)(this + 228) = *(float *)(a2 + 228);
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(this + 236) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(this + 240) = *(_DWORD *)(a2 + 240);
  *(float *)(this + 244) = *(float *)(a2 + 244);
  *(float *)(this + 248) = *(float *)(a2 + 248);
  *(float *)(this + 252) = *(float *)(a2 + 252);
  *(float *)(this + 256) = *(float *)(a2 + 256);
  *(float *)(this + 260) = *(float *)(a2 + 260);
  *(_DWORD *)(this + 264) = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(this + 268) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  *(float *)(this + 276) = *(float *)(a2 + 276);
  *(float *)(this + 280) = *(float *)(a2 + 280);
  *(float *)(this + 284) = *(float *)(a2 + 284);
  *(float *)(this + 288) = *(float *)(a2 + 288);
  *(float *)(this + 292) = *(float *)(a2 + 292);
  *(float *)(this + 296) = *(float *)(a2 + 296);
  *(float *)(this + 300) = *(float *)(a2 + 300);
  *(_DWORD *)(this + 304) = *(_DWORD *)(a2 + 304);
  *(_DWORD *)(this + 308) = *(_DWORD *)(a2 + 308);
  *(_DWORD *)(this + 312) = *(_DWORD *)(a2 + 312);
  *(_BYTE *)(this + 316) = *(_BYTE *)(a2 + 316);
  *(_BYTE *)(this + 317) = *(_BYTE *)(a2 + 317);
  *(_DWORD *)(this + 320) = *(_DWORD *)(a2 + 320);
  *(float *)(this + 324) = *(float *)(a2 + 324);
  *(_DWORD *)(this + 328) = *(_DWORD *)(a2 + 328);
  *(_BYTE *)(this + 332) = *(_BYTE *)(a2 + 332);
  *(float *)(this + 336) = *(float *)(a2 + 336);
  *(_BYTE *)(this + 340) = *(_BYTE *)(a2 + 340);
  *(_DWORD *)(this + 344) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(this + 348) = *(_DWORD *)(a2 + 348);
  *(_DWORD *)(this + 352) = *(_DWORD *)(a2 + 352);
  return this;
}
