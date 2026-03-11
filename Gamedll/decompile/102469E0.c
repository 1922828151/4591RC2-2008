/*
 * func-name: ?performCreate@?$ProductorTemplate@VFWheelVehicleWheel@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x102469e0
 * callers: 0x1000c22a
 * callees: 0x10016685, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FWheelVehicleWheel>::performCreate(char *this)
{
  GameClient::FWheelVehicleWheel *v2; // eax
  int v3; // esi

  v2 = (GameClient::FWheelVehicleWheel *)operator new(0x9Cu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FWheelVehicleWheel::FWheelVehicleWheel(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
