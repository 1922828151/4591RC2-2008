/*
 * func-name: ??1?$ProductorTemplate@VFProductInfo@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x102351e0
 * callers: 0x1001a9e2
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FProductInfo>::~ProductorTemplate<GameClient::FProductInfo>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FProductInfo>::`vftable';
  GameClient::Productor::~Productor(this);
}
