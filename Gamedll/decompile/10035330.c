/*
 * func-name: ?SetShootState@Weapon@GameClient@@QAEXW4ShootState@12@@Z_0
 * func-address: 0x10035330
 * callers: 0x1000b622
 * callees: none
 */

int __thiscall GameClient::Weapon::SetShootState(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[186] = a2;
  return result;
}
