/*
 * func-name: ?SetEstab@PedrailVehicleController@GameClient@@UAE_NPAVEstablishment@2@@Z_0
 * func-address: 0x101be650
 * callers: 0x10003d32
 * callees: 0x10009e8f, 0x102c9ea8
 */

char __thiscall GameClient::PedrailVehicleController::SetEstab(
        GameClient::PedrailVehicleController *this,
        struct GameClient::Establishment *a2)
{
  int v3; // eax

  GameClient::ICtlEstabController::SetEstab(this, a2);
  v3 = _RTDynamicCast(
         a2,
         0,
         &GameClient::Establishment `RTTI Type Descriptor',
         &GameClient::PedrailVehicle `RTTI Type Descriptor',
         0);
  if ( !v3 )
    return 0;
  *((_DWORD *)this + 3) = v3;
  return 1;
}
