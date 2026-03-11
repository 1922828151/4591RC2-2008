/*
 * func-name: ??0LightBeam@@QAE@PAVWorld@@PAVTexture@@HMMMMK@Z_0
 * func-address: 0x100ab4f0
 * callers: 0x100044b7
 * callees: 0x10006c5d, 0x1000d6cf, 0x1000f1dc, 0x10014ee8
 */

LightBeam *__thiscall LightBeam::LightBeam(
        LightBeam *this,
        struct World *a2,
        struct Texture *a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        unsigned int a9)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &LightBeam::`vftable';
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  sub_1000F1DC();
  *((float *)this + 68) = 0.0;
  *((float *)this + 69) = 0.0;
  *((float *)this + 70) = 0.0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 44) = a3;
  sub_10006C5D(a4);
  *((float *)this + 61) = *(float *)&a4;
  LightBeam::setColor(this, a9);
  *((float *)this + 64) = a5;
  *((_BYTE *)this + 124) = 1;
  *((float *)this + 66) = a6;
  *((float *)this + 67) = a7;
  *((float *)this + 65) = a8;
  *((float *)this + 71) = 0.0;
  *((float *)this + 72) = 0.0;
  *((float *)this + 73) = 0.0;
  *((float *)this + 74) = 0.0;
  *((float *)this + 75) = 0.0;
  *((float *)this + 76) = 1.0;
  LightBeam::UpdateBeamsInfos(this);
  return this;
}
