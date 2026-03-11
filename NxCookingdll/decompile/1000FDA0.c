/*
 * func-name: sub_1000FDA0
 * func-address: 0x1000fda0
 * callers: 0x1002f3a0
 * callees: none
 */

int __thiscall sub_1000FDA0(_DWORD *this)
{
  int result; // eax

  result = this[27];
  *this = &PenetrationMap::`vftable';
  if ( result )
  {
    result = (*(int (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, result);
    this[27] = 0;
  }
  return result;
}
