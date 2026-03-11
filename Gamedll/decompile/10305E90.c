/*
 * func-name: sub_10305E90
 * func-address: 0x10305e90
 * callers: 0x10303f80
 * callees: none
 */

void __cdecl sub_10305E90()
{
  GameClient::ProductorTemplate<GameClient::FARetrieval>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FARetrieval>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FARetrieval>::_instance);
}
