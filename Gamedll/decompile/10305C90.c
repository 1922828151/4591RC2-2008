/*
 * func-name: sub_10305C90
 * func-address: 0x10305c90
 * callers: 0x10303d80
 * callees: none
 */

void __cdecl sub_10305C90()
{
  GameClient::ProductorTemplate<GameClient::FRobotCore>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FRobotCore>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FRobotCore>::_instance);
}
