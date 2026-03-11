/*
 * func-name: ??4RobotCore@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1015fe60
 * callers: 0x10016707
 * callees: 0x1000f088
 */

_DWORD *__thiscall GameClient::RobotCore::operator=(_DWORD *this, int a2)
{
  GameClient::WorldObject::operator=(a2);
  this[37] = *(_DWORD *)(a2 + 148);
  this[38] = *(_DWORD *)(a2 + 152);
  return this;
}
