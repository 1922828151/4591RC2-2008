/*
 * func-name: sub_10305CF0
 * func-address: 0x10305cf0
 * callers: 0x10303de0
 * callees: none
 */

void __cdecl sub_10305CF0()
{
  GameClient::ProductorTemplate<GameClient::FSuspendVehicle>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FSuspendVehicle>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FSuspendVehicle>::_instance);
}
