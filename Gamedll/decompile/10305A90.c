/*
 * func-name: sub_10305A90
 * func-address: 0x10305a90
 * callers: 0x10303b80
 * callees: none
 */

void __cdecl sub_10305A90()
{
  GameClient::ProductorTemplate<GameClient::FDamageEquip>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FDamageEquip>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FDamageEquip>::_instance);
}
