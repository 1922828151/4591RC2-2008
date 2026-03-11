/*
 * func-name: sub_10305AF0
 * func-address: 0x10305af0
 * callers: 0x10303be0
 * callees: none
 */

void __cdecl sub_10305AF0()
{
  GameClient::ProductorTemplate<GameClient::FFunc_Power_Input>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FFunc_Power_Input>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FFunc_Power_Input>::_instance);
}
