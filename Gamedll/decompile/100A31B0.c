/*
 * func-name: sub_100A31B0
 * func-address: 0x100a31b0
 * callers: 0x1001080c
 * callees: 0x102c9d98
 */

_DWORD *sub_100A31B0()
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result )
    *result = 0;
  if ( result != (_DWORD *)-4 )
    result[1] = 0;
  if ( result != (_DWORD *)-8 )
    result[2] = 0;
  *((_BYTE *)result + 20) = 1;
  *((_BYTE *)result + 21) = 0;
  return result;
}
