/*
 * func-name: ??1?$ProductorTemplate@VFRobotBody@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1023a800
 * callers: 0x100060be
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FRobotBody>::~ProductorTemplate<GameClient::FRobotBody>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FRobotBody>::`vftable';
  GameClient::Productor::~Productor(this);
}
