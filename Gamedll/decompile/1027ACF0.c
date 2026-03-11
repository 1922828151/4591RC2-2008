/*
 * func-name: ?SetOutside@CRadarMapUI@@QAEXXZ_0
 * func-address: 0x1027acf0
 * callers: 0x10009151
 * callees: none
 */

void __thiscall CRadarMapUI::SetOutside(CRadarMapUI *this)
{
  *((_BYTE *)this + 4090) = 0;
  CHotZonePic::SetPic(*((_DWORD *)this + 974), (char *)this + 3960);
}
