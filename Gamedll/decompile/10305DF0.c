/*
 * func-name: sub_10305DF0
 * func-address: 0x10305df0
 * callers: 0x10303ee0
 * callees: none
 */

void __cdecl sub_10305DF0()
{
  GameClient::ProductorTemplate<GameClient::FACapability>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FACapability>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FACapability>::_instance);
}
