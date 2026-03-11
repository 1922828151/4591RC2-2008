/*
 * func-name: sub_10305BB0
 * func-address: 0x10305bb0
 * callers: 0x10303ca0
 * callees: none
 */

void __cdecl sub_10305BB0()
{
  GameClient::ProductorTemplate<FOccupyIcon>::_instance[0] = &GameClient::ProductorTemplate<FOccupyIcon>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<FOccupyIcon>::_instance);
}
