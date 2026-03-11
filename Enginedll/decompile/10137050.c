/*
 * func-name: ??0WaterSurface@@QAE@PAVWorld@@@Z
 * func-address: 0x10137050
 * callers: none
 * callees: 0x10051b50
 */

WaterSurface *__thiscall WaterSurface::WaterSurface(WaterSurface *this, struct World *a2)
{
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &WaterSurface::`vftable';
  return this;
}
