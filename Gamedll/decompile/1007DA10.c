/*
 * func-name: ??0DynamicLasers@@QAE@ABV0@@Z_0
 * func-address: 0x1007da10
 * callers: 0x10010212
 * callees: 0x10017c5b
 */

DynamicLasers *__thiscall DynamicLasers::DynamicLasers(DynamicLasers *this, const struct DynamicLasers *a2)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &DynamicLasers::`vftable';
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 46) = &Volume::`vftable';
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((_DWORD *)this + 49) = *((_DWORD *)a2 + 49);
  *((_DWORD *)this + 46) = &BBox::`vftable';
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 50);
  *((_DWORD *)this + 51) = *((_DWORD *)a2 + 51);
  *((_DWORD *)this + 52) = *((_DWORD *)a2 + 52);
  *((_DWORD *)this + 53) = *((_DWORD *)a2 + 53);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 54);
  *((_DWORD *)this + 55) = *((_DWORD *)a2 + 55);
  *((_DWORD *)this + 56) = *((_DWORD *)a2 + 56);
  *((_DWORD *)this + 57) = *((_DWORD *)a2 + 57);
  *((float *)this + 58) = *((float *)a2 + 58);
  *((float *)this + 59) = *((float *)a2 + 59);
  *((float *)this + 60) = *((float *)a2 + 60);
  *((float *)this + 61) = *((float *)a2 + 61);
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((_DWORD *)this + 63) = *((_DWORD *)a2 + 63);
  sub_10017C5B((int)a2 + 256);
  return this;
}
