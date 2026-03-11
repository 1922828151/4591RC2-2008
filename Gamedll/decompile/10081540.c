/*
 * func-name: ??0Laser@@QAE@ABV0@@Z_0
 * func-address: 0x10081540
 * callers: 0x100038c8
 * callees: none
 */

Laser *__thiscall Laser::Laser(Laser *this, const struct Laser *a2)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &Laser::`vftable';
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = &Volume::`vftable';
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 45) = &BBox::`vftable';
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((_DWORD *)this + 58) = *((_DWORD *)a2 + 58);
  *((_DWORD *)this + 59) = *((_DWORD *)a2 + 59);
  *((_DWORD *)this + 60) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 61) = *((_DWORD *)a2 + 61);
  *((float *)this + 62) = *((float *)a2 + 62);
  *((_DWORD *)this + 63) = *((_DWORD *)a2 + 63);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  return this;
}
