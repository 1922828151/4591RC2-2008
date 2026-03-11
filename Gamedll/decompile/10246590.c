/*
 * func-name: ?performCreate@?$ProductorTemplate@VFWheelVehicle@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10246590
 * callers: 0x10011860
 * callees: 0x1000993f, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FWheelVehicle>::performCreate(char *this)
{
  GameClient::FWheelVehicle *v2; // eax
  int v3; // esi

  v2 = (GameClient::FWheelVehicle *)operator new(0x4E4u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FWheelVehicle::FWheelVehicle(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
