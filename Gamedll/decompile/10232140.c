/*
 * func-name: ?CreateInstance@FNonControlledEstab@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10232140
 * callers: 0x1000a5b5
 * callees: 0x10001514, 0x10004c3c, 0x100091c4, 0x1000adc6, 0x1000e26e, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FNonControlledEstab::CreateInstance(
        GameClient::FNonControlledEstab *this,
        unsigned int a2)
{
  GameClient::NonControlledEstab *v3; // eax
  int v4; // esi
  GameClient::EstabManager *v5; // eax

  v3 = (GameClient::NonControlledEstab *)operator new(0x1D8u);
  v4 = 0;
  if ( v3 )
    v4 = GameClient::NonControlledEstab::NonControlledEstab(v3, a2);
  (*(void (__thiscall **)(int, GameClient::FNonControlledEstab *))(*(_DWORD *)v4 + 4))(v4, this);
  v5 = GameClient::EstabManager::Instance();
  GameClient::EstabManager::AddEstablishment(v5, (struct GameClient::Establishment *)v4);
  GameClient::DamageManager::AddDamageUnit(
    GameClient::DamageManager::ms_pInstance,
    a2,
    (struct GameClient::DamageUnit *)(v4 + 148));
  sub_10001514(v4);
  return (struct GameClient::DataObject *)v4;
}
