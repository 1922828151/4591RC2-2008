/*
 * func-name: ?SetOwnerShip@SystemPart@GameClient@@QAEXPAVRobot@2@@Z_0
 * func-address: 0x100350b0
 * callers: 0x10009ad4
 * callees: none
 */

void __thiscall GameClient::SystemPart::SetOwnerShip(GameClient::SystemPart *this, struct GameClient::Robot *a2)
{
  *((_DWORD *)this + 37) = a2;
}
