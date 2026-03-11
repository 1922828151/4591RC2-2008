/*
 * func-name: ??0Laser@@QAE@PAVWorld@@KAAVVector@@1MPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100a9370
 * callers: 0x10012b70
 * callees: 0x1000f1dc
 */

int __thiscall Laser::Laser(int this, struct World *a2, int a3, _DWORD *a4, _DWORD *a5, float a6, int a7, int a8)
{
  int v9; // ecx

  FXSystem::FXSystem((FXSystem *)this, a2);
  *(_DWORD *)this = &Laser::`vftable';
  sub_1000F1DC();
  *(float *)(this + 220) = 0.0;
  *(float *)(this + 224) = 0.0;
  *(float *)(this + 228) = 0.0;
  *(float *)(this + 232) = 0.0;
  *(float *)(this + 236) = 0.0;
  *(float *)(this + 240) = 0.0;
  *(_DWORD *)(this + 176) = a8;
  *(_DWORD *)(this + 252) = a7;
  *(_DWORD *)(this + 256) = 0;
  *(_DWORD *)(this + 244) = a3;
  *(_DWORD *)(this + 220) = *a4;
  *(_DWORD *)(this + 224) = a4[1];
  *(_DWORD *)(this + 228) = a4[2];
  *(_DWORD *)(this + 232) = *a5;
  *(_DWORD *)(this + 236) = a5[1];
  v9 = a5[2];
  *(float *)(this + 248) = a6;
  *(_DWORD *)(this + 240) = v9;
  *(_DWORD *)(this + 20) = *a4;
  *(_DWORD *)(this + 24) = a4[1];
  *(_DWORD *)(this + 28) = a4[2];
  return this;
}
