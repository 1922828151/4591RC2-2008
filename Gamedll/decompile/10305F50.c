/*
 * func-name: sub_10305F50
 * func-address: 0x10305f50
 * callers: 0x10304040
 * callees: none
 */

void __cdecl sub_10305F50()
{
  GameClient::ProductorTemplate<GameClient::FSkill>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FSkill>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FSkill>::_instance);
}
