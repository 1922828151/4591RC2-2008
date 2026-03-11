/*
 * func-name: ??4AAlarm@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101cf3a0
 * callers: 0x10009f3e
 * callees: 0x10016ed7
 */

_DWORD *__thiscall GameClient::AAlarm::operator=(_DWORD *this, _DWORD *a2)
{
  GameClient::Aura::operator=((int)a2);
  this[39] = a2[39];
  this[40] = a2[40];
  this[41] = a2[41];
  return this;
}
