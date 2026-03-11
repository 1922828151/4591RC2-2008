/*
 * func-name: ??1?$ProductorTemplate@VFFunc_Sheild@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1022cc40
 * callers: 0x1000e66f
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::~ProductorTemplate<GameClient::FFunc_Sheild>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FFunc_Sheild>::`vftable';
  GameClient::Productor::~Productor(this);
}
