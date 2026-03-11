/*
 * func-name: ?ClearRebornLoc@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027ab60
 * callers: 0x1000f7fe
 * callees: none
 */

void __thiscall CRadarMapUI::ClearRebornLoc(CHotZonePic **this)
{
  CHotZonePic::RemoveAllHotZone(this[974]);
}
