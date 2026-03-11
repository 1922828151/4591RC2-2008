/*
 * func-name: sub_10305F70
 * func-address: 0x10305f70
 * callers: 0x10304060
 * callees: none
 */

void __cdecl sub_10305F70()
{
  GameClient::ProductorTemplate<GameClient::FSLock>::_instance[0] = &GameClient::ProductorTemplate<GameClient::FSLock>::`vftable';
  GameClient::Productor::~Productor((GameClient::Productor *)GameClient::ProductorTemplate<GameClient::FSLock>::_instance);
}
