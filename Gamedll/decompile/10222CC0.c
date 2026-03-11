/*
 * func-name: ??1FAircraftVehicle@GameClient@@UAE@XZ_0
 * func-address: 0x10222cc0
 * callers: 0x10015e88
 * callees: 0x10007054
 */

void __thiscall GameClient::FAircraftVehicle::~FAircraftVehicle(GameClient::FAircraftVehicle *this)
{
  *(_DWORD *)this = &GameClient::FAircraftVehicle::`vftable';
  std::string::~string((char *)this + 1236);
  std::string::~string((char *)this + 1208);
  GameClient::FControlledEstab::~FControlledEstab(this);
}
