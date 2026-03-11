/*
 * func-name: ??0WaterSurface@@QAE@ABV0@@Z
 * func-address: 0x1009a9a0
 * callers: none
 * callees: 0x1002a570
 */

WaterSurface *__thiscall WaterSurface::WaterSurface(WaterSurface *this, const struct WaterSurface *a2)
{
  Prefab::Prefab(this, a2);
  *(_DWORD *)this = &WaterSurface::`vftable';
  return this;
}
