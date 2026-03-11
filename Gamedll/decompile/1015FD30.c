/*
 * func-name: ??4RobotArmor@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1015fd30
 * callers: 0x10001f0f
 * callees: 0x1000f088
 */

_DWORD *__thiscall GameClient::RobotArmor::operator=(_DWORD *this, _DWORD *a2)
{
  GameClient::WorldObject::operator=((int)a2);
  this[37] = a2[37];
  this[38] = a2[38];
  this[39] = a2[39];
  return this;
}
