/*
 * func-name: ??0Laser@@QAE@PAVWorld@@KAAVVector@@1MPAVMaterial@@@Z_0
 * func-address: 0x100a9480
 * callers: 0x10008431
 * callees: 0x1000f1dc
 */

Laser *__thiscall Laser::Laser(
        Laser *this,
        struct World *a2,
        unsigned int a3,
        struct Vector *a4,
        struct Vector *a5,
        float a6,
        struct Material *a7)
{
  int v8; // ecx

  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &Laser::`vftable';
  sub_1000F1DC();
  *((float *)this + 55) = 0.0;
  *((float *)this + 56) = 0.0;
  *((float *)this + 57) = 0.0;
  *((float *)this + 58) = 0.0;
  *((float *)this + 59) = 0.0;
  *((float *)this + 60) = 0.0;
  *((_DWORD *)this + 64) = a7;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 61) = a3;
  *((_DWORD *)this + 55) = *(_DWORD *)a4;
  *((_DWORD *)this + 56) = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 57) = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 58) = *(_DWORD *)a5;
  *((_DWORD *)this + 59) = *((_DWORD *)a5 + 1);
  v8 = *((_DWORD *)a5 + 2);
  *((float *)this + 62) = a6;
  *((_DWORD *)this + 60) = v8;
  *((_DWORD *)this + 5) = *(_DWORD *)a4;
  *((_DWORD *)this + 6) = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 7) = *((_DWORD *)a4 + 2);
  return this;
}
