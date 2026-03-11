/*
 * func-name: sub_10305EB0
 * func-address: 0x10305eb0
 * callers: 0x10303fa0
 * callees: none
 */

void __cdecl sub_10305EB0()
{
  GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FASatelliteCapability>::_instance);
}
