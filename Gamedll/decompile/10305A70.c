/*
 * func-name: sub_10305A70
 * func-address: 0x10305a70
 * callers: 0x10303b60
 * callees: none
 */

void __cdecl sub_10305A70()
{
  GameClient::ProductorTemplate<GameClient::FBullet>::_instance = &GameClient::ProductorTemplate<GameClient::FBullet>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)&GameClient::ProductorTemplate<GameClient::FBullet>::_instance);
}
