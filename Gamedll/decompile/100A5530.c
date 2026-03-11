/*
 * func-name: ??0SurfaceDecal@@QAE@ABV0@@Z_0
 * func-address: 0x100a5530
 * callers: 0x10011581
 * callees: 0x1000d544
 */

SurfaceDecal *__thiscall SurfaceDecal::SurfaceDecal(SurfaceDecal *this, const struct SurfaceDecal *a2)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &SurfaceDecal::`vftable';
  *((_DWORD *)this + 44) = *((_DWORD *)a2 + 44);
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 45);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 46);
  *((_DWORD *)this + 47) = *((_DWORD *)a2 + 47);
  *((_DWORD *)this + 48) = *((_DWORD *)a2 + 48);
  *((float *)this + 49) = *((float *)a2 + 49);
  *((float *)this + 50) = *((float *)a2 + 50);
  *((float *)this + 51) = *((float *)a2 + 51);
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
  *((_DWORD *)this + 62) = *((_DWORD *)a2 + 62);
  *((_DWORD *)this + 63) = *((_DWORD *)a2 + 63);
  *((_DWORD *)this + 64) = *((_DWORD *)a2 + 64);
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *((_BYTE *)this + 264) = *((_BYTE *)a2 + 264);
  *((_BYTE *)this + 265) = *((_BYTE *)a2 + 265);
  sub_1000D544((int)a2 + 268);
  *((float *)this + 71) = *((float *)a2 + 71);
  return this;
}
