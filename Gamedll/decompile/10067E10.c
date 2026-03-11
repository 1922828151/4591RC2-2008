/*
 * func-name: ??0RadarMapState@@QAE@ABV0@@Z_0
 * func-address: 0x10067e10
 * callers: 0x1000587b
 * callees: none
 */

RadarMapState *__thiscall RadarMapState::RadarMapState(RadarMapState *this, const struct RadarMapState *a2)
{
  RadarMapState *result; // eax

  result = this;
  *(_DWORD *)this = &MapState::`vftable';
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *(_DWORD *)this = &RadarMapState::`vftable';
  return result;
}
