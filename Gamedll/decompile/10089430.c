/*
 * func-name: ??4LightBeam@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x10089430
 * callers: 0x1000cbbc
 * callees: 0x10010695
 */

int __thiscall LightBeam::operator=(int this, int a2)
{
  int result; // eax

  FXSystem::operator=(a2);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  sub_10010695(a2 + 184);
  *(float *)(this + 200) = *(float *)(a2 + 200);
  *(_DWORD *)(this + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(this + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(this + 220) = *(_DWORD *)(a2 + 220);
  *(_DWORD *)(this + 224) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232);
  *(_DWORD *)(this + 236) = *(_DWORD *)(a2 + 236);
  *(_DWORD *)(this + 240) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(this + 244) = *(_DWORD *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(float *)(this + 252) = *(float *)(a2 + 252);
  *(float *)(this + 256) = *(float *)(a2 + 256);
  *(float *)(this + 260) = *(float *)(a2 + 260);
  *(float *)(this + 264) = *(float *)(a2 + 264);
  *(float *)(this + 268) = *(float *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(this + 276) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(this + 280) = *(_DWORD *)(a2 + 280);
  *(float *)(this + 284) = *(float *)(a2 + 284);
  result = this;
  *(float *)(this + 288) = *(float *)(a2 + 288);
  *(float *)(this + 292) = *(float *)(a2 + 292);
  *(float *)(this + 296) = *(float *)(a2 + 296);
  *(float *)(this + 300) = *(float *)(a2 + 300);
  *(float *)(this + 304) = *(float *)(a2 + 304);
  return result;
}
