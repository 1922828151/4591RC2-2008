/*
 * func-name: sub_10305C50
 * func-address: 0x10305c50
 * callers: 0x10303d40
 * callees: none
 */

void __cdecl sub_10305C50()
{
  GameClient::ProductorTemplate<GameClient::FRobotArmor>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FRobotArmor>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FRobotArmor>::_instance);
}
