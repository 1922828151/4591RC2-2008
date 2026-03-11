/*
 * func-name: sub_10305B10
 * func-address: 0x10305b10
 * callers: 0x10303c00
 * callees: none
 */

void __cdecl sub_10305B10()
{
  GameClient::ProductorTemplate<GameClient::FFunc_RobotReceive>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FFunc_RobotReceive>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FFunc_RobotReceive>::_instance);
}
