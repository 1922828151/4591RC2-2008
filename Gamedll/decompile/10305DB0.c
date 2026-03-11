/*
 * func-name: sub_10305DB0
 * func-address: 0x10305db0
 * callers: 0x10303ea0
 * callees: none
 */

void __cdecl sub_10305DB0()
{
  GameClient::ProductorTemplate<GameClient::FAAlarm>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FAAlarm>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FAAlarm>::_instance);
}
