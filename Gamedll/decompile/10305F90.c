/*
 * func-name: sub_10305F90
 * func-address: 0x10305f90
 * callers: 0x10304080
 * callees: none
 */

void __cdecl sub_10305F90()
{
  GameClient::ProductorTemplate<GameClient::FSOccupy>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FSOccupy>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FSOccupy>::_instance);
}
