/*
 * func-name: sub_10305D30
 * func-address: 0x10305d30
 * callers: 0x10303e20
 * callees: none
 */

void __cdecl sub_10305D30()
{
  GameClient::ProductorTemplate<GameClient::FTransformItem>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FTransformItem>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FTransformItem>::_instance);
}
