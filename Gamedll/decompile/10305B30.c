/*
 * func-name: sub_10305B30
 * func-address: 0x10305b30
 * callers: 0x10303c20
 * callees: none
 */

void __cdecl sub_10305B30()
{
  GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::_instance);
}
