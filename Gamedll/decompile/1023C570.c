/*
 * func-name: ??1?$ProductorTemplate@VFRobotCore@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1023c570
 * callers: 0x1000732e
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FRobotCore>::~ProductorTemplate<GameClient::FRobotCore>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FRobotCore>::`vftable';
  GameClient::Productor::~Productor(this);
}
