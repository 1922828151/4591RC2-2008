/*
 * func-name: sub_10305CD0
 * func-address: 0x10305cd0
 * callers: 0x10303dc0
 * callees: none
 */

void __cdecl sub_10305CD0()
{
  GameClient::ProductorTemplate<GameClient::FSeat>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FSeat>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FSeat>::_instance);
}
