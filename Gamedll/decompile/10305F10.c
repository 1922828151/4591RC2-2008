/*
 * func-name: sub_10305F10
 * func-address: 0x10305f10
 * callers: 0x10304000
 * callees: none
 */

void __cdecl sub_10305F10()
{
  GameClient::ProductorTemplate<GameClient::FAura>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FAura>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FAura>::_instance);
}
