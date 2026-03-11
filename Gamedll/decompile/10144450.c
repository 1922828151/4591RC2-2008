/*
 * func-name: ?SetCurEnergy@Booty@GameClient@@QAEXM@Z_0
 * func-address: 0x10144450
 * callers: 0x1000aa3d
 * callees: none
 */

void __thiscall GameClient::Booty::SetCurEnergy(GameClient::Booty *this, float a2)
{
  *((float *)this + 42) = a2;
}
