/*
 * func-name: sub_10305C70
 * func-address: 0x10305c70
 * callers: 0x10303d60
 * callees: none
 */

void __cdecl sub_10305C70()
{
  GameClient::ProductorTemplate<GameClient::FRobotBody>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FRobotBody>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FRobotBody>::_instance);
}
