/*
 * func-name: sub_10305B70
 * func-address: 0x10305b70
 * callers: 0x10303c60
 * callees: none
 */

void __cdecl sub_10305B70()
{
  GameClient::ProductorTemplate<GameClient::FItem>::_instance = &GameClient::ProductorTemplate<GameClient::FItem>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)&GameClient::ProductorTemplate<GameClient::FItem>::_instance);
}
