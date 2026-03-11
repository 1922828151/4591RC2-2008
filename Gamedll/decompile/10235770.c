/*
 * func-name: ??0FRobot@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10235770
 * callers: 0x10013417
 * callees: 0x10019a97
 */

GameClient::FRobot *__thiscall GameClient::FRobot::FRobot(
        GameClient::FRobot *this,
        const struct GameClient::FRobot *a2)
{
  GameClient::Flyweight::Flyweight(this, a2);
  *(_DWORD *)this = &GameClient::FRobot::`vftable';
  return this;
}
