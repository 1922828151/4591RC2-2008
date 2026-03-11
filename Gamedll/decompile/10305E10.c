/*
 * func-name: sub_10305E10
 * func-address: 0x10305e10
 * callers: 0x10303f00
 * callees: none
 */

void __cdecl sub_10305E10()
{
  GameClient::ProductorTemplate<GameClient::FADamage>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FADamage>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FADamage>::_instance);
}
