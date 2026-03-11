/*
 * func-name: sub_10001110
 * func-address: 0x10001110
 * callers: none
 * callees: none
 */

int __thiscall sub_10001110(_BYTE *this, int a2, int a3)
{
  int result; // eax

  if ( a2 == 2 && !this[48] )
  {
    result = dword_100580A4;
    if ( dword_100580A4 )
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)(dword_100580A4 + 24) + 32))(dword_100580A4 + 24, 1);
    dword_100580A4 = 0;
  }
  return result;
}
