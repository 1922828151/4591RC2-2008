/*
 * func-name: ??0DynamicLasers@@QAE@PAVWorld@@IKAAVVector@@MMMMPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x1007c4c0
 * callers: 0x10017e95
 * callees: 0x10006b77, 0x1000c3fb, 0x1000f1dc
 */

int __thiscall DynamicLasers::DynamicLasers(
        int this,
        struct World *a2,
        int a3,
        int a4,
        _DWORD *a5,
        float a6,
        float a7,
        float a8,
        float a9,
        int a10,
        int a11)
{
  int v12; // eax
  unsigned int v13; // eax
  int v14; // ebx
  int v15; // eax
  int v16; // eax

  FXSystem::FXSystem((FXSystem *)this, a2);
  *(_DWORD *)this = &DynamicLasers::`vftable';
  sub_1000F1DC();
  *(_DWORD *)(this + 260) = 0;
  *(_DWORD *)(this + 264) = 0;
  *(_DWORD *)(this + 268) = 0;
  *(_DWORD *)(this + 20) = *a5;
  *(_DWORD *)(this + 24) = a5[1];
  v12 = a5[2];
  *(float *)(this + 236) = a7;
  *(float *)(this + 240) = a8;
  *(_DWORD *)(this + 28) = v12;
  *(float *)(this + 244) = a9;
  *(_DWORD *)(this + 248) = a10;
  v13 = a3;
  *(float *)(this + 232) = a6;
  *(_DWORD *)(this + 228) = a4;
  *(_DWORD *)(this + 252) = 0;
  *(_DWORD *)(this + 224) = a11;
  if ( !a3 )
    v13 = 1;
  v14 = v13;
  if ( v13 < 2 )
    v14 = 2;
  v15 = *(_DWORD *)(this + 260);
  if ( v15 )
    v16 = (*(_DWORD *)(this + 264) - v15) / 48;
  else
    v16 = 0;
  if ( v14 != v16 )
  {
    sub_10006B77((void *)(this + 256), v14);
    DynamicLasers::Initialize((DynamicLasers *)this);
  }
  return this;
}
