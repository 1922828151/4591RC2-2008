/*
 * func-name: ??1?$ProductorTemplate@VFSOccupy@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1024d040
 * callers: 0x1000a934
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FSOccupy>::~ProductorTemplate<GameClient::FSOccupy>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FSOccupy>::`vftable';
  GameClient::Productor::~Productor(this);
}
