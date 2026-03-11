/*
 * func-name: ??4FAEnergy@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x102483b0
 * callers: 0x10002824
 * callees: 0x10009395
 */

_DWORD *__thiscall GameClient::FAEnergy::operator=(_DWORD *this, int a2)
{
  GameClient::FAura::operator=(a2);
  this[65] = *(_DWORD *)(a2 + 260);
  this[66] = *(_DWORD *)(a2 + 264);
  return this;
}
