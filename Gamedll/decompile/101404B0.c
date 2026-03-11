/*
 * func-name: ?GetAuraID@Aura@GameClient@@QBEKXZ_0
 * func-address: 0x101404b0
 * callers: 0x1000c081
 * callees: none
 */

unsigned int __thiscall GameClient::Aura::GetAuraID(GameClient::Aura *this)
{
  return *((_DWORD *)this + 3);
}
