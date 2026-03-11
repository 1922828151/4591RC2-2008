/*
 * func-name: ??4DynamicLasers@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1007deb0
 * callers: 0x100139a8
 * callees: 0x1000d396
 */

int __thiscall DynamicLasers::operator=(int this, int a2)
{
  FXSystem::operator=(a2);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  *(_DWORD *)(this + 192) = *(_DWORD *)(a2 + 192);
  *(_DWORD *)(this + 196) = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(this + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(this + 204) = *(_DWORD *)(a2 + 204);
  *(_DWORD *)(this + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(this + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(this + 220) = *(_DWORD *)(a2 + 220);
  *(_DWORD *)(this + 224) = *(_DWORD *)(a2 + 224);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  *(float *)(this + 232) = *(float *)(a2 + 232);
  *(float *)(this + 236) = *(float *)(a2 + 236);
  *(float *)(this + 240) = *(float *)(a2 + 240);
  *(float *)(this + 244) = *(float *)(a2 + 244);
  *(_DWORD *)(this + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(this + 252) = *(_DWORD *)(a2 + 252);
  sub_1000D396(a2 + 256);
  return this;
}
