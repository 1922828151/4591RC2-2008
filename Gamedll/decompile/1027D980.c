/*
 * func-name: ?ChangeToState@MapStateManager@@QAE_NW4MAP_STATE@@PAVCRadarMapUI@@@Z_0
 * func-address: 0x1027d980
 * callers: 0x1000b1e0
 * callees: 0x10007293
 */

char __thiscall MapStateManager::ChangeToState(int *this, int a2, int a3)
{
  int v4; // ecx
  char result; // al
  int MapState; // eax

  v4 = *this;
  if ( v4 )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 8))(v4, a2);
    if ( !result )
      return result;
    (*(void (__thiscall **)(int))(*(_DWORD *)*this + 16))(*this);
    *this = 0;
  }
  MapState = MapStateManager::GenerateMapState(a2);
  *this = MapState;
  if ( MapState )
  {
    this[1] = a2;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)MapState + 24))(MapState, a3);
    (*(void (__thiscall **)(int))(*(_DWORD *)*this + 12))(*this);
  }
  else
  {
    this[1] = 0;
  }
  return 1;
}
