/*
 * func-name: ?performCreate@?$ProductorTemplate@VFPedrailVehicleWheel@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10234700
 * callers: 0x10017107
 * callees: 0x1001057d, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FPedrailVehicleWheel>::performCreate(char *this)
{
  GameClient::FPedrailVehicleWheel *v2; // eax
  int v3; // esi

  v2 = (GameClient::FPedrailVehicleWheel *)operator new(0xA0u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FPedrailVehicleWheel::FPedrailVehicleWheel(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
