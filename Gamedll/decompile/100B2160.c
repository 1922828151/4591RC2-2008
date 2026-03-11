/*
 * func-name: ??0ParticleSystem@@QAE@PAVWorld@@HKMMPAVTexture@@W4BlendMode@@@Z_0
 * func-address: 0x100b2160
 * callers: 0x10014155
 * callees: 0x10014966
 */

int __thiscall ParticleSystem::ParticleSystem(
        int this,
        struct World *a2,
        int a3,
        int a4,
        float a5,
        float a6,
        int a7,
        int a8)
{
  int v9; // ebx
  unsigned int i; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int result; // eax

  FXSystem::FXSystem((FXSystem *)this, a2);
  v9 = 0;
  *(_DWORD *)this = &ParticleSystem::`vftable';
  *(_DWORD *)(this + 192) = 0;
  *(_DWORD *)(this + 196) = 0;
  *(_DWORD *)(this + 200) = 0;
  *(float *)(this + 232) = 0.0;
  *(float *)(this + 236) = 0.0;
  *(float *)(this + 240) = 0.0;
  *(float *)(this + 264) = 0.0;
  *(float *)(this + 268) = 0.0;
  *(float *)(this + 272) = 0.0;
  *(float *)(this + 304) = 0.0;
  *(float *)(this + 308) = 0.0;
  *(float *)(this + 312) = 0.0;
  *(float *)(this + 344) = 0.0;
  *(float *)(this + 348) = 0.0;
  *(float *)(this + 352) = 0.0;
  *(_DWORD *)(this + 224) = a8;
  *(_DWORD *)(this + 204) = a3;
  sub_10014966((void *)(this + 188), a3);
  *(float *)(this + 324) = 1.0;
  *(_DWORD *)(this + 176) = a7;
  *(_DWORD *)(this + 180) = 0;
  *(_DWORD *)(this + 328) = 0;
  *(_BYTE *)(this + 317) = 1;
  for ( i = 0; ; ++i )
  {
    v11 = *(_DWORD *)(this + 192);
    if ( !v11 || i >= (*(_DWORD *)(this + 196) - v11) / 96 )
      break;
    v12 = *(_DWORD *)(this + 192);
    if ( !v12 || i >= (*(_DWORD *)(this + 196) - v12) / 96 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(v9 + *(_DWORD *)(this + 192) + 44) = a4;
    v13 = *(_DWORD *)(this + 192);
    if ( !v13 || i >= (*(_DWORD *)(this + 196) - v13) / 96 )
      _invalid_parameter_noinfo();
    *(float *)(*(_DWORD *)(this + 192) + v9 + 60) = a5;
    v14 = *(_DWORD *)(this + 192);
    if ( !v14 || i >= (*(_DWORD *)(this + 196) - v14) / 96 )
      _invalid_parameter_noinfo();
    *(float *)(*(_DWORD *)(this + 192) + v9 + 64) = a6;
    v15 = *(_DWORD *)(this + 192);
    if ( !v15 || i >= (*(_DWORD *)(this + 196) - v15) / 96 )
      _invalid_parameter_noinfo();
    *(float *)(v9 + *(_DWORD *)(this + 192) + 52) = 0.0;
    v9 += 96;
  }
  result = this;
  *(_DWORD *)(this + 184) = 0;
  return result;
}
