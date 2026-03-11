/*
 * func-name: ??4ParticleTrail@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100b8730
 * callers: 0x100192f4
 * callees: 0x1000b52d
 */

int __thiscall ParticleTrail::operator=(int this, int a2)
{
  FXSystem::operator=(a2);
  *(_BYTE *)(this + 176) = *(_BYTE *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  sub_1000B52D(a2 + 184);
  *(_DWORD *)(this + 200) = *(_DWORD *)(a2 + 200);
  std::vector<Material *>::operator=(this + 204, a2 + 204);
  *(float *)(this + 220) = *(float *)(a2 + 220);
  *(float *)(this + 224) = *(float *)(a2 + 224);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  *(_BYTE *)(this + 232) = *(_BYTE *)(a2 + 232);
  *(_DWORD *)(this + 240) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(this + 244) = *(_DWORD *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(_BYTE *)(this + 252) = *(_BYTE *)(a2 + 252);
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256);
  *(float *)(this + 260) = *(float *)(a2 + 260);
  *(float *)(this + 264) = *(float *)(a2 + 264);
  *(_DWORD *)(this + 268) = *(_DWORD *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(this + 276) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(this + 280) = *(_DWORD *)(a2 + 280);
  *(_DWORD *)(this + 284) = *(_DWORD *)(a2 + 284);
  *(_DWORD *)(this + 288) = *(_DWORD *)(a2 + 288);
  *(float *)(this + 292) = *(float *)(a2 + 292);
  *(float *)(this + 296) = *(float *)(a2 + 296);
  *(float *)(this + 300) = *(float *)(a2 + 300);
  *(float *)(this + 304) = *(float *)(a2 + 304);
  *(float *)(this + 308) = *(float *)(a2 + 308);
  *(_DWORD *)(this + 312) = *(_DWORD *)(a2 + 312);
  *(float *)(this + 316) = *(float *)(a2 + 316);
  *(float *)(this + 320) = *(float *)(a2 + 320);
  *(_DWORD *)(this + 324) = *(_DWORD *)(a2 + 324);
  *(_DWORD *)(this + 328) = *(_DWORD *)(a2 + 328);
  *(_DWORD *)(this + 332) = *(_DWORD *)(a2 + 332);
  *(float *)(this + 336) = *(float *)(a2 + 336);
  *(float *)(this + 340) = *(float *)(a2 + 340);
  *(_DWORD *)(this + 344) = *(_DWORD *)(a2 + 344);
  *(float *)(this + 348) = *(float *)(a2 + 348);
  *(float *)(this + 352) = *(float *)(a2 + 352);
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364);
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368);
  return this;
}
