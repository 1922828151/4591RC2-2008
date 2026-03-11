/*
 * func-name: sub_1000E510
 * func-address: 0x1000e510
 * callers: 0x100063d0, 0x100076e0
 * callees: 0x1000eb40
 */

_DWORD *sub_1000E510()
{
  _DWORD *result; // eax

  result = (_DWORD *)sub_1000EB40(1);
  if ( result )
    *result = result;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
