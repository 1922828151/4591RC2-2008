/*
 * func-name: ??0WaterDecal@@QAE@PAVWorld@@PAVTexture@@1AAVVector@@MUFloatColor@@W4BlendMode@@@Z_0
 * func-address: 0x100c00f0
 * callers: 0x10005d5d
 * callees: 0x102c1270, 0x102c9ea2
 */

int __thiscall WaterDecal::WaterDecal(
        int this,
        struct World *a2,
        int a3,
        int a4,
        _DWORD *a5,
        float a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v12; // eax

  FXSystem::FXSystem((FXSystem *)this, a2);
  *(_DWORD *)this = &WaterDecal::`vftable';
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 184) = 0;
  *(_DWORD *)(this + 188) = 0;
  *(float *)(this + 244) = 0.0;
  *(float *)(this + 248) = 0.0;
  *(float *)(this + 252) = 0.0;
  *(float *)(this + 256) = 0.0;
  *(float *)(this + 264) = 0.0;
  *(float *)(this + 268) = 0.0;
  *(float *)(this + 272) = 0.0;
  *(float *)(this + 276) = 0.0;
  *(float *)(this + 280) = 0.0;
  *(float *)(this + 284) = 0.0;
  *(float *)(this + 292) = 0.0;
  *(float *)(this + 296) = 0.0;
  *(float *)(this + 300) = 0.0;
  *(float *)(this + 308) = 0.0;
  *(float *)(this + 312) = 0.0;
  *(float *)(this + 316) = 0.0;
  *(float *)(this + 324) = 0.0;
  *(float *)(this + 328) = 0.0;
  *(float *)(this + 332) = 0.0;
  memset((void *)(this + 276), 0, 0x40u);
  sub_102C1270(1.0);
  *(float *)(this + 336) = 1.0;
  *(_DWORD *)(this + 348) = a3;
  *(_DWORD *)(this + 352) = a4;
  *(_DWORD *)(this + 20) = *a5;
  *(_DWORD *)(this + 24) = a5[1];
  v12 = a5[2];
  *(float *)(this + 192) = a6;
  *(float *)(this + 196) = 1.0;
  *(_DWORD *)(this + 244) = a7;
  *(float *)(this + 200) = 1.0;
  *(float *)(this + 204) = 1.0;
  *(_DWORD *)(this + 28) = v12;
  *(float *)(this + 208) = 1.0;
  *(_DWORD *)(this + 248) = a8;
  *(float *)(this + 212) = 0.0;
  *(float *)(this + 216) = 0.0;
  *(_DWORD *)(this + 252) = a9;
  *(float *)(this + 236) = 0.0;
  *(_DWORD *)(this + 256) = a10;
  *(float *)(this + 240) = 0.0;
  *(_DWORD *)(this + 260) = a11;
  *(float *)(this + 220) = 1.0;
  *(float *)(this + 224) = 1.0;
  *(float *)(this + 228) = 1.0;
  *(float *)(this + 232) = 1.0;
  *(float *)(this + 264) = 0.0;
  *(float *)(this + 268) = 0.0;
  *(float *)(this + 340) = 0.0;
  *(float *)(this + 272) = 0.0;
  *(_DWORD *)(this + 344) = 0;
  return this;
}
