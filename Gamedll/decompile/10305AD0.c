/*
 * func-name: sub_10305AD0
 * func-address: 0x10305ad0
 * callers: 0x10303bc0
 * callees: none
 */

void __cdecl sub_10305AD0()
{
  GameClient::ProductorTemplate<GameClient::FFunc_Power>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FFunc_Power>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FFunc_Power>::_instance);
}
