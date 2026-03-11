/*
 * func-name: ?GetArmorCount@DamageUnit@GameClient@@QAEJXZ_0
 * func-address: 0x100437d0
 * callers: 0x1000f08d
 * callees: none
 */

int __thiscall GameClient::DamageUnit::GetArmorCount(GameClient::DamageUnit *this)
{
  int result; // eax

  result = *((_DWORD *)this + 2);
  if ( result )
    return (*((_DWORD *)this + 3) - result) / 20;
  return result;
}
