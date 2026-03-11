/*
 * func-name: ?GetOwnerShip@SystemPart@GameClient@@QBEPAVRobot@2@XZ_0
 * func-address: 0x100350c0
 * callers: 0x10001c35
 * callees: none
 */

struct GameClient::Robot *__thiscall GameClient::SystemPart::GetOwnerShip(GameClient::SystemPart *this)
{
  return (struct GameClient::Robot *)*((_DWORD *)this + 37);
}
