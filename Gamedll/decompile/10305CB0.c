/*
 * func-name: sub_10305CB0
 * func-address: 0x10305cb0
 * callers: 0x10303da0
 * callees: none
 */

void __cdecl sub_10305CB0()
{
  GameClient::ProductorTemplate<GameClient::FRobotFramework>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FRobotFramework>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FRobotFramework>::_instance);
}
