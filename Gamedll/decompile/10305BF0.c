/*
 * func-name: sub_10305BF0
 * func-address: 0x10305bf0
 * callers: 0x10303ce0
 * callees: none
 */

void __cdecl sub_10305BF0()
{
  GameClient::ProductorTemplate<GameClient::FPedrailVehicleWheel>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FPedrailVehicleWheel>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FPedrailVehicleWheel>::_instance);
}
