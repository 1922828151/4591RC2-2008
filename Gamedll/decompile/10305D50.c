/*
 * func-name: sub_10305D50
 * func-address: 0x10305d50
 * callers: 0x10303e40
 * callees: none
 */

void __cdecl sub_10305D50()
{
  GameClient::ProductorTemplate<GameClient::FWeapon>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FWeapon>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FWeapon>::_instance);
}
