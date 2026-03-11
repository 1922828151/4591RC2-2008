/*
 * func-name: sub_10305C30
 * func-address: 0x10305c30
 * callers: 0x10303d20
 * callees: none
 */

void __cdecl sub_10305C30()
{
  GameClient::ProductorTemplate<GameClient::FRobot>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FRobot>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FRobot>::_instance);
}
