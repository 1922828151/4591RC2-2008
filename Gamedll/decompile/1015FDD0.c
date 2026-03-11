/*
 * func-name: ??4RobotBody@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1015fdd0
 * callers: 0x1000696a
 * callees: 0x1000f088
 */

_DWORD *__thiscall GameClient::RobotBody::operator=(_DWORD *this, int a2)
{
  GameClient::WorldObject::operator=(a2);
  this[37] = *(_DWORD *)(a2 + 148);
  this[38] = *(_DWORD *)(a2 + 152);
  return this;
}
