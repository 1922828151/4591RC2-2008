/*
 * func-name: ?CreateInstance@FBooty@GameClient@@UAEPAVDataObject@2@K@Z_0
 * func-address: 0x10223490
 * callers: 0x10003f76
 * callees: 0x10001514, 0x10002fc2, 0x102c9d98
 */

struct GameClient::DataObject *__thiscall GameClient::FBooty::CreateInstance(GameClient::FBooty *this, unsigned int a2)
{
  GameClient::Booty *v2; // eax
  int v3; // esi

  v2 = (GameClient::Booty *)operator new(0xBCu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::Booty::Booty(v2, a2);
  if ( a2 != -1 )
    sub_10001514(v3);
  return (struct GameClient::DataObject *)v3;
}
