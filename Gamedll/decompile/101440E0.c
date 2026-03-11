/*
 * func-name: ?GetCurEnergy@Booty@GameClient@@QAEMXZ_0
 * func-address: 0x101440e0
 * callers: 0x100181b0
 * callees: none
 */

double __thiscall GameClient::Booty::GetCurEnergy(GameClient::Booty *this)
{
  return *((float *)this + 42);
}
