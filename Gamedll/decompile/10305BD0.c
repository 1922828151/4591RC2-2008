/*
 * func-name: sub_10305BD0
 * func-address: 0x10305bd0
 * callers: 0x10303cc0
 * callees: none
 */

void __cdecl sub_10305BD0()
{
  GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::_instance);
}
