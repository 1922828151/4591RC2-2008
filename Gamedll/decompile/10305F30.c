/*
 * func-name: sub_10305F30
 * func-address: 0x10305f30
 * callers: 0x10304020
 * callees: none
 */

void __cdecl sub_10305F30()
{
  GameClient::ProductorTemplate<GameClient::FSAlarm>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FSAlarm>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FSAlarm>::_instance);
}
