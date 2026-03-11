/*
 * func-name: ?ClearBattlePoint@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027acb0
 * callers: 0x10015a50
 * callees: none
 */

void __thiscall CRadarMapUI::ClearBattlePoint(CHotZonePic **this)
{
  CHotZonePic::RemoveHoverPic(this[974], 10, 0);
}
