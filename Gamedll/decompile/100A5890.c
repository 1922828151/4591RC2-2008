/*
 * func-name: ??0WaterDecal@@QAE@ABV0@@Z_0
 * func-address: 0x100a5890
 * callers: 0x1000c32e
 * callees: 0x1000bff5
 */

WaterDecal *__thiscall WaterDecal::WaterDecal(WaterDecal *this, const struct WaterDecal *a2)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &WaterDecal::`vftable';
  sub_1000BFF5((int)a2 + 176);
  *((float *)this + 48) = *((float *)a2 + 48);
  *((float *)this + 49) = *((float *)a2 + 49);
  *((float *)this + 50) = *((float *)a2 + 50);
  *((float *)this + 51) = *((float *)a2 + 51);
  *((float *)this + 52) = *((float *)a2 + 52);
  *((float *)this + 53) = *((float *)a2 + 53);
  *((float *)this + 54) = *((float *)a2 + 54);
  *((float *)this + 55) = *((float *)a2 + 55);
  *((float *)this + 56) = *((float *)a2 + 56);
  *((float *)this + 57) = *((float *)a2 + 57);
  *((float *)this + 58) = *((float *)a2 + 58);
  *((float *)this + 59) = *((float *)a2 + 59);
  *((float *)this + 60) = *((float *)a2 + 60);
  *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((_DWORD *)this + 63) = *((_DWORD *)a2 + 63);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  *((_DWORD *)this + 67) = *((_DWORD *)a2 + 67);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 68);
  *((float *)this + 69) = 0.0;
  *((float *)this + 70) = 0.0;
  *((float *)this + 71) = 0.0;
  *((float *)this + 73) = 0.0;
  *((float *)this + 74) = 0.0;
  *((float *)this + 75) = 0.0;
  *((float *)this + 77) = 0.0;
  *((float *)this + 78) = 0.0;
  *((float *)this + 79) = 0.0;
  *((float *)this + 81) = 0.0;
  *((float *)this + 82) = 0.0;
  *((float *)this + 83) = 0.0;
  qmemcpy((char *)this + 276, (char *)a2 + 276, 0x50u);
  return this;
}
