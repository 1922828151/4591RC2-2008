/*
 * func-name: ??1?$ProductorTemplate@VFBooty@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x102238f0
 * callers: 0x1000ccca
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FBooty>::~ProductorTemplate<GameClient::FBooty>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FBooty>::`vftable';
  GameClient::Productor::~Productor(this);
}
