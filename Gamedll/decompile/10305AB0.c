/*
 * func-name: sub_10305AB0
 * func-address: 0x10305ab0
 * callers: 0x10303ba0
 * callees: none
 */

void __cdecl sub_10305AB0()
{
  GameClient::ProductorTemplate<GameClient::FEstabDoor>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FEstabDoor>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FEstabDoor>::_instance);
}
