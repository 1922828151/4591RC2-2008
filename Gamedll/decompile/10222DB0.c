/*
 * func-name: ?CreateInstance@FAircraftVehicle@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10222db0
 * callers: 0x10003535
 * callees: 0x10001514, 0x100050ec, 0x100091c4, 0x1000adc6, 0x1000e26e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FAircraftVehicle::CreateInstance(
        GameClient::FAircraftVehicle *this,
        unsigned int a2)
{
  GameClient::AircraftVehicle *v2; // eax
  struct GameClient::Establishment *v3; // esi
  GameClient::EstabManager *v4; // eax
  struct GameClient::DamageUnit *v5; // eax

  v2 = (GameClient::AircraftVehicle *)operator new(0x290u);
  if ( v2 )
    v3 = (struct GameClient::Establishment *)GameClient::AircraftVehicle::AircraftVehicle(v2, a2);
  else
    v3 = 0;
  v4 = GameClient::EstabManager::Instance();
  GameClient::EstabManager::AddEstablishment(v4, v3);
  sub_10001514((int)v3);
  if ( v3 )
    v5 = (struct GameClient::Establishment *)((char *)v3 + 148);
  else
    v5 = 0;
  GameClient::DamageManager::AddDamageUnit(GameClient::DamageManager::ms_pInstance, a2, v5);
  return v3;
}
