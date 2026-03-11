/*
 * func-name: sub_10305B90
 * func-address: 0x10305b90
 * callers: 0x10303c80
 * callees: none
 */

void __cdecl sub_10305B90()
{
  GameClient::ProductorTemplate<GameClient::FNonControlledEstab>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FNonControlledEstab>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FNonControlledEstab>::_instance);
}
