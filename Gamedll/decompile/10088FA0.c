/*
 * func-name: ??0LightBeam@@QAE@ABV0@@Z_0
 * func-address: 0x10088fa0
 * callers: 0x1000d4c7
 * callees: 0x1000c0cc
 */

LightBeam *__thiscall LightBeam::LightBeam(LightBeam *this, const struct LightBeam *a2)
{
  LightBeam *result; // eax

  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &LightBeam::`vftable';
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  sub_1000C0CC((int)a2 + 184);
  *((float *)this + 50) = *((float *)a2 + 50);
  *((_DWORD *)this + 51) = &Volume::`vftable';
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 51) = &BBox::`vftable';
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((float *)this + 63) = *((float *)a2 + 63);
  *((float *)this + 64) = *((float *)a2 + 64);
  *((float *)this + 65) = *((float *)a2 + 65);
  *((float *)this + 66) = *((float *)a2 + 66);
  *((float *)this + 67) = *((float *)a2 + 67);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 69);
  *((_DWORD *)this + 70) = *((_DWORD *)a2 + 70);
  *((float *)this + 71) = *((float *)a2 + 71);
  result = this;
  *((float *)this + 72) = *((float *)a2 + 72);
  *((float *)this + 73) = *((float *)a2 + 73);
  *((float *)this + 74) = *((float *)a2 + 74);
  *((float *)this + 75) = *((float *)a2 + 75);
  *((float *)this + 76) = *((float *)a2 + 76);
  return result;
}
