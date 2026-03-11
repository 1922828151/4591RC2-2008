/*
 * func-name: sub_10305E70
 * func-address: 0x10305e70
 * callers: 0x10303f60
 * callees: none
 */

void __cdecl sub_10305E70()
{
  GameClient::ProductorTemplate<GameClient::FARepair>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FARepair>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FARepair>::_instance);
}
