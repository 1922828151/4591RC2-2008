/*
 * func-name: ?IntoDefenceZone@Robot@GameClient@@QAEXKW4NATION_TYPE@@@Z_0
 * func-address: 0x10173690
 * callers: 0x100064b5
 * callees: none
 */

int __thiscall GameClient::Robot::IntoDefenceZone(_DWORD *this, char a2, int a3)
{
  int result; // eax

  result = 8;
  if ( (a2 & 8) != 0 )
  {
    this[92] |= 8u;
    result = a3;
  }
  else
  {
    this[92] &= ~8u;
  }
  this[93] = a3;
  return result;
}
