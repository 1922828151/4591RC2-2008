/*
 * func-name: ?CreateInstance@FSeat@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x1023ee30
 * callers: 0x1000ee67
 * callees: 0x1000adc6, 0x10019164, 0x10019b14, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FSeat::CreateInstance(GameClient::FSeat *this, unsigned int a2)
{
  GameClient::Seat *v3; // eax
  struct GameClient::Seat *v4; // esi
  GameClient::EstabManager *v5; // eax

  v3 = (GameClient::Seat *)operator new(0x160u);
  v4 = 0;
  if ( v3 )
    v4 = (struct GameClient::Seat *)GameClient::Seat::Seat(v3, a2);
  (*(void (__thiscall **)(struct GameClient::Seat *, GameClient::FSeat *))(*(_DWORD *)v4 + 4))(v4, this);
  v5 = GameClient::EstabManager::Instance();
  GameClient::EstabManager::AddSeat(v5, v4);
  return v4;
}
