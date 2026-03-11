/*
 * func-name: sub_10305A30
 * func-address: 0x10305a30
 * callers: 0x10303b20
 * callees: none
 */

void __cdecl sub_10305A30()
{
  GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::_instance);
}
