/*
 * func-name: sub_10232530
 * func-address: 0x10232530
 * callers: 0x1000d5d0
 * callees: 0x10001514, 0x1000167c, 0x100091c4, 0x1000adc6, 0x1000e26e, 0x102c9d98
 */

struct GameClient::Establishment *__stdcall sub_10232530(unsigned int a1)
{
  GameClient::OccupyIcon *v1; // eax
  struct GameClient::Establishment *v2; // esi
  GameClient::EstabManager *v3; // eax
  struct GameClient::DamageUnit *v4; // eax

  v1 = (GameClient::OccupyIcon *)operator new(0x210u);
  if ( v1 )
    v2 = (struct GameClient::Establishment *)GameClient::OccupyIcon::OccupyIcon(v1, a1);
  else
    v2 = 0;
  v3 = GameClient::EstabManager::Instance();
  GameClient::EstabManager::AddEstablishment(v3, v2);
  sub_10001514((int)v2);
  if ( v2 )
    v4 = (struct GameClient::Establishment *)((char *)v2 + 148);
  else
    v4 = 0;
  GameClient::DamageManager::AddDamageUnit(GameClient::DamageManager::ms_pInstance, a1, v4);
  return v2;
}
