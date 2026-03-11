/*
 * func-name: ?GetControlEnable@ControlledEstab@GameClient@@QBE_NXZ_0
 * func-address: 0x1019cba0
 * callers: 0x10008661
 * callees: none
 */

bool __thiscall GameClient::ControlledEstab::GetControlEnable(GameClient::ControlledEstab *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 114);
  if ( v1 )
    return *(_BYTE *)(v1 + 168);
  else
    return 0;
}
