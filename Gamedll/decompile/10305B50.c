/*
 * func-name: sub_10305B50
 * func-address: 0x10305b50
 * callers: 0x10303c40
 * callees: none
 */

void __cdecl sub_10305B50()
{
  GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FFunc_VehicleReceive>::_instance);
}
