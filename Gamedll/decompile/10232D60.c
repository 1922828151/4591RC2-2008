/*
 * func-name: ?CreateInstance@FPedrailVehicle@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10232d60
 * callers: 0x10001bcc
 * callees: 0x10001514, 0x100091c4, 0x10009b88, 0x1000adc6, 0x1000e26e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FPedrailVehicle::CreateInstance(
        GameClient::FPedrailVehicle *this,
        unsigned int a2)
{
  GameClient::PedrailVehicle *v2; // eax
  struct GameClient::Establishment *v3; // esi
  GameClient::EstabManager *v4; // eax
  struct GameClient::DamageUnit *v5; // eax

  v2 = (GameClient::PedrailVehicle *)operator new(0x250u);
  if ( v2 )
    v3 = (struct GameClient::Establishment *)GameClient::PedrailVehicle::PedrailVehicle(v2, a2);
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
