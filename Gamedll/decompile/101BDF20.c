/*
 * func-name: ?SetEstab@ICtlEstabController@GameClient@@UAE_NPAVEstablishment@2@@Z_0
 * func-address: 0x101bdf20
 * callers: 0x10009e8f
 * callees: 0x102c9ea8
 */

bool __thiscall GameClient::ICtlEstabController::SetEstab(
        GameClient::ICtlEstabController *this,
        struct GameClient::Establishment *a2)
{
  int v3; // eax

  v3 = _RTDynamicCast(
         a2,
         0,
         &GameClient::Establishment `RTTI Type Descriptor',
         &GameClient::ControlledEstab `RTTI Type Descriptor',
         0);
  *((_DWORD *)this + 2) = v3;
  return v3 != 0;
}
