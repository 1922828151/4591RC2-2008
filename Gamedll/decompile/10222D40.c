/*
 * func-name: ?OnReadVarComplete@FAircraftVehicle@GameClient@@UAEXXZ_0
 * func-address: 0x10222d40
 * callers: 0x10014ddf
 * callees: 0x1000a795
 */

void __thiscall GameClient::FAircraftVehicle::OnReadVarComplete(GameClient::FAircraftVehicle *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax

  GameClient::FControlledEstab::OnReadVarComplete(this);
  v2 = *((_DWORD *)this + 156);
  if ( v2 )
    v3 = (*((_DWORD *)this + 157) - v2) / 28;
  else
    v3 = 0;
  v4 = *((_DWORD *)this + 156);
  if ( v4 )
    v4 = (*((_DWORD *)this + 157) - v4) / 28;
  if ( v3 != v4 )
    Error("FxSpoutForward and FxSpoutForward is incompatible.");
}
