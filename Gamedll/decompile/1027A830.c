/*
 * func-name: ?ClearEntity@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027a830
 * callers: 0x1001ab8b
 * callees: none
 */

void __thiscall CRadarMapUI::ClearEntity(CHotZonePic **this)
{
  CHotZonePic::RemoveHoverPic(this[974], 1, 0);
}
