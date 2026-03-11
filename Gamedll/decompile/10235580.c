/*
 * func-name: ??1?$ProductorTemplate@VFRobot@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10235580
 * callers: 0x10018e30
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FRobot>::~ProductorTemplate<GameClient::FRobot>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FRobot>::`vftable';
  GameClient::Productor::~Productor(this);
}
