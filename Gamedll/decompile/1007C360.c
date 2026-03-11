/*
 * func-name: ??0DynamicLasers@@QAE@PAVWorld@@IKAAVVector@@MMPAVMaterial@@@Z_0
 * func-address: 0x1007c360
 * callers: 0x10018444
 * callees: 0x1000f1dc
 */

DynamicLasers *__thiscall DynamicLasers::DynamicLasers(
        DynamicLasers *this,
        struct World *a2,
        unsigned int a3,
        unsigned int a4,
        struct Vector *a5,
        float a6,
        float a7,
        struct Material *a8)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &DynamicLasers::`vftable';
  sub_1000F1DC();
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  return this;
}
