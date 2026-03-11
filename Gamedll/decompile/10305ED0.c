/*
 * func-name: sub_10305ED0
 * func-address: 0x10305ed0
 * callers: 0x10303fc0
 * callees: none
 */

void __cdecl sub_10305ED0()
{
  GameClient::ProductorTemplate<GameClient::FASearch>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FASearch>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FASearch>::_instance);
}
