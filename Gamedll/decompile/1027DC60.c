/*
 * func-name: ?ChangeMapState@CRadarMapUI@@QAEXW4MAP_STATE@@@Z_0
 * func-address: 0x1027dc60
 * callers: 0x100072cf
 * callees: 0x1000b1e0
 */

int __thiscall CRadarMapUI::ChangeMapState(void *this, int a2)
{
  return MapStateManager::ChangeToState(a2, (int)this);
}
