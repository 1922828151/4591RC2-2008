/*
 * func-name: ??0MapState@@QAE@ABV0@@Z_0
 * func-address: 0x10067d30
 * callers: 0x100051e1
 * callees: none
 */

MapState *__thiscall MapState::MapState(MapState *this, const struct MapState *a2)
{
  MapState *result; // eax

  result = this;
  *(_DWORD *)this = &MapState::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  return result;
}
