/*
 * func-name: ?SetForceOutside@CRadarMapUI@@QAEX_N@Z_0
 * func-address: 0x1027bc40
 * callers: 0x1000bac8
 * callees: none
 */

void __thiscall CRadarMapUI::SetForceOutside(CRadarMapUI *this, bool a2)
{
  *((_BYTE *)this + 4091) = a2;
  if ( a2 && !*((_BYTE *)this + 4090) )
  {
    *((_BYTE *)this + 4090) = 0;
    CHotZonePic::SetPic(*((_DWORD *)this + 974), (char *)this + 3960);
  }
}
