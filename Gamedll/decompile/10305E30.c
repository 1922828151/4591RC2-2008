/*
 * func-name: sub_10305E30
 * func-address: 0x10305e30
 * callers: 0x10303f20
 * callees: none
 */

void __cdecl sub_10305E30()
{
  GameClient::ProductorTemplate<GameClient::FAEnergy>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FAEnergy>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FAEnergy>::_instance);
}
