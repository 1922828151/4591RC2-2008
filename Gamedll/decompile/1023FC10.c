/*
 * func-name: ??1?$ProductorTemplate@VFSeat@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1023fc10
 * callers: 0x1000a30d
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FSeat>::~ProductorTemplate<GameClient::FSeat>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FSeat>::`vftable';
  GameClient::Productor::~Productor(this);
}
