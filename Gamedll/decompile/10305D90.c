/*
 * func-name: sub_10305D90
 * func-address: 0x10305d90
 * callers: 0x10303e80
 * callees: none
 */

void __cdecl sub_10305D90()
{
  GameClient::ProductorTemplate<GameClient::FWheelVehicleWheel>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FWheelVehicleWheel>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FWheelVehicleWheel>::_instance);
}
