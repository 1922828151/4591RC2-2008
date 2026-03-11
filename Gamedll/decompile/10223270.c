/*
 * func-name: ?performCreate@?$ProductorTemplate@VFAircraftVehicle@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10223270
 * callers: 0x10017986
 * callees: 0x10017f58, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::performCreate(char *this)
{
  GameClient::FAircraftVehicle *v2; // eax
  int v3; // esi

  v2 = (GameClient::FAircraftVehicle *)operator new(0x4F4u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FAircraftVehicle::FAircraftVehicle(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
