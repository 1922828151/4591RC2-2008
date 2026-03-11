/*
 * func-name: sub_10305E50
 * func-address: 0x10305e50
 * callers: 0x10303f40
 * callees: none
 */

void __cdecl sub_10305E50()
{
  GameClient::ProductorTemplate<GameClient::FAMovement>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FAMovement>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FAMovement>::_instance);
}
