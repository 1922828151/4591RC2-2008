/*
 * func-name: sub_10305EF0
 * func-address: 0x10305ef0
 * callers: 0x10303fe0
 * callees: none
 */

void __cdecl sub_10305EF0()
{
  GameClient::ProductorTemplate<GameClient::FASummon>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FASummon>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FASummon>::_instance);
}
