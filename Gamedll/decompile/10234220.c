/*
 * func-name: ?performCreate@?$ProductorTemplate@VFPedrailVehicle@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10234220
 * callers: 0x10013101
 * callees: 0x1000e935, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::performCreate(char *this)
{
  GameClient::FPedrailVehicle *v2; // eax
  int v3; // esi

  v2 = (GameClient::FPedrailVehicle *)operator new(0x548u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FPedrailVehicle::FPedrailVehicle(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
