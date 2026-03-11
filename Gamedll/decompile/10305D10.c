/*
 * func-name: sub_10305D10
 * func-address: 0x10305d10
 * callers: 0x10303e00
 * callees: none
 */

void __cdecl sub_10305D10()
{
  GameClient::ProductorTemplate<GameClient::FSuspendVehicleWheel>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FSuspendVehicleWheel>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FSuspendVehicleWheel>::_instance);
}
