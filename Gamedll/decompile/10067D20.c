/*
 * func-name: ?SetMapUI@MapState@@UAEXPAVCRadarMapUI@@@Z_0
 * func-address: 0x10067d20
 * callers: 0x10018237
 * callees: none
 */

void __thiscall MapState::SetMapUI(MapState *this, struct CRadarMapUI *a2)
{
  *((_DWORD *)this + 1) = a2;
}
