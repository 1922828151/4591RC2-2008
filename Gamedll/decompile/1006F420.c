/*
 * func-name: sub_1006F420
 * func-address: 0x1006f420
 * callers: 0x100013d9
 * callees: 0x102c9d98
 */

_DWORD *sub_1006F420()
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
