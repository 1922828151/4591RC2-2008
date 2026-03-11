/*
 * func-name: sub_10305C10
 * func-address: 0x10305c10
 * callers: 0x10303d00
 * callees: none
 */

void __cdecl sub_10305C10()
{
  GameClient::ProductorTemplate<GameClient::FProductInfo>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FProductInfo>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FProductInfo>::_instance);
}
