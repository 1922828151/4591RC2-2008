/*
 * func-name: sub_10305A50
 * func-address: 0x10305a50
 * callers: 0x10303b40
 * callees: none
 */

void __cdecl sub_10305A50()
{
  GameClient::ProductorTemplate<GameClient::FBooty>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FBooty>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FBooty>::_instance);
}
