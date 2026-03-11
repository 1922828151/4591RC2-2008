/*
 * func-name: sub_10305DD0
 * func-address: 0x10305dd0
 * callers: 0x10303ec0
 * callees: none
 */

void __cdecl sub_10305DD0()
{
  GameClient::ProductorTemplate<GameClient::FAArmor>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FAArmor>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FAArmor>::_instance);
}
