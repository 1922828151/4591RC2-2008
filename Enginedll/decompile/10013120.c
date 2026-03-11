/*
 * func-name: ??0FXSystem@@QAE@PAVWorld@@@Z
 * func-address: 0x10013120
 * callers: none
 * callees: 0x10001440, 0x100130c0, 0x100a01c0, 0x101786e0, 0x101a251c
 */

FXSystem *__thiscall FXSystem::FXSystem(FXSystem *this, struct World *a2)
{
  float *v3; // edi
  FXManager *v4; // eax

  *(_DWORD *)this = &FXSystem::`vftable';
  *((float *)this + 5) = 0.0;
  *((float *)this + 6) = 0.0;
  *((float *)this + 7) = 0.0;
  v3 = (float *)((char *)this + 44);
  *((float *)this + 8) = 0.0;
  *((float *)this + 9) = 0.0;
  *((float *)this + 10) = 0.0;
  *((float *)this + 11) = 0.0;
  *((float *)this + 12) = 0.0;
  *((float *)this + 13) = 0.0;
  *((float *)this + 15) = 0.0;
  *((float *)this + 16) = 0.0;
  *((float *)this + 17) = 0.0;
  *((float *)this + 19) = 0.0;
  *((float *)this + 20) = 0.0;
  *((float *)this + 21) = 0.0;
  *((float *)this + 23) = 0.0;
  *((float *)this + 24) = 0.0;
  *((float *)this + 25) = 0.0;
  memset((char *)this + 44, 0, 0x40u);
  sub_101786E0(1.0);
  v3[15] = 1.0;
  sub_10001440((float *)this + 33);
  *((_DWORD *)this + 29) = a2;
  v4 = FXManager::Instance();
  FXManager::AddSystem(v4, this);
  *((float *)this + 27) = -1.0;
  *((_BYTE *)this + 8) = 0;
  *((_BYTE *)this + 16) = 0;
  *((float *)this + 32) = 3.4028235e38;
  *((_BYTE *)this + 112) = 0;
  *((_BYTE *)this + 124) = 0;
  *((_BYTE *)this + 113) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 172) = 0;
  *((_DWORD *)this + 30) = -1;
  return this;
}
