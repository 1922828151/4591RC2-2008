/*
 * func-name: ?CreateInstance@FEstabDoor@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1022a2a0
 * callers: 0x100045a2
 * callees: 0x10001514, 0x100091c4, 0x1000adc6, 0x1000e26e, 0x10012df5, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FEstabDoor::CreateInstance(
        GameClient::FEstabDoor *this,
        unsigned int a2)
{
  GameClient::EstabDoor *v3; // eax
  int v4; // esi
  GameClient::EstabManager *v5; // eax

  v3 = (GameClient::EstabDoor *)operator new(0x330u);
  v4 = 0;
  if ( v3 )
    v4 = GameClient::EstabDoor::EstabDoor(v3, a2);
  (*(void (__thiscall **)(int, GameClient::FEstabDoor *))(*(_DWORD *)v4 + 4))(v4, this);
  v5 = GameClient::EstabManager::Instance();
  GameClient::EstabManager::AddEstablishment(v5, (struct GameClient::Establishment *)v4);
  GameClient::DamageManager::AddDamageUnit(
    GameClient::DamageManager::ms_pInstance,
    a2,
    (struct GameClient::DamageUnit *)(v4 + 148));
  sub_10001514(v4);
  return (struct GameClient::DataObject *)v4;
}
