/*
 * func-name: ??4SurfaceDecal@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x100a6290
 * callers: 0x10015a46
 * callees: 0x1000c2d9
 */

int __thiscall SurfaceDecal::operator=(int this, int a2)
{
  FXSystem::operator=(a2);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  *(_DWORD *)(this + 192) = *(_DWORD *)(a2 + 192);
  *(float *)(this + 196) = *(float *)(a2 + 196);
  *(float *)(this + 200) = *(float *)(a2 + 200);
  *(float *)(this + 204) = *(float *)(a2 + 204);
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
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(this + 260) = *(_DWORD *)(a2 + 260);
  *(_BYTE *)(this + 264) = *(_BYTE *)(a2 + 264);
  *(_BYTE *)(this + 265) = *(_BYTE *)(a2 + 265);
  sub_1000C2D9(a2 + 268);
  *(float *)(this + 284) = *(float *)(a2 + 284);
  return this;
}
