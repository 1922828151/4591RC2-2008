/*
 * func-name: ?SetControlEnable@ControlledEstab@GameClient@@QAEX_N@Z_0
 * func-address: 0x1019cb80
 * callers: 0x1000cabd
 * callees: none
 */

void __thiscall GameClient::ControlledEstab::SetControlEnable(GameClient::ControlledEstab *this, bool a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 114);
  if ( v2 )
    *(_BYTE *)(v2 + 168) = a2;
}
