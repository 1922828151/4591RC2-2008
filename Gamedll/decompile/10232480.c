/*
 * func-name: ??1?$ProductorTemplate@VFOccupyIcon@@@GameClient@@UAE@XZ_0
 * func-address: 0x10232480
 * callers: 0x10009fed
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<FOccupyIcon>::~ProductorTemplate<FOccupyIcon>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<FOccupyIcon>::`vftable';
  GameClient::Productor::~Productor(this);
}
