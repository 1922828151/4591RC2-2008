/*
 * func-name: sub_10007360
 * func-address: 0x10007360
 * callers: 0x100052d0, 0x10006550, 0x1000a7c0, 0x1000aca0, 0x10017750, 0x10017e00
 * callees: 0x10018cf2, 0x10018e10, 0x10019586
 */

_DWORD *sub_10007360()
{
  _DWORD *result; // eax
  _DWORD v1[10]; // [esp+0h] [ebp-28h] BYREF

  v1[6] = v1;
  result = operator new(0xCu);
  v1[5] = result;
  v1[9] = 0;
  if ( result )
    *result = result;
  v1[4] = 1;
  if ( result != (_DWORD *)-4 )
    result[1] = result;
  return result;
}
