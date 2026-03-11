/*
 * func-name: sub_10305D70
 * func-address: 0x10305d70
 * callers: 0x10303e60
 * callees: none
 */

void __cdecl sub_10305D70()
{
  GameClient::ProductorTemplate<GameClient::FWheelVehicle>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FWheelVehicle>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FWheelVehicle>::_instance);
}
