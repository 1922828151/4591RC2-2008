/*
 * func-name: sub_10002960
 * func-address: 0x10002960
 * callers: 0x100027a0, 0x100031b0, 0x100052a0, 0x10007530, 0x100075d0, 0x10018320, 0x1001ab90, 0x100250e0
 * callees: 0x100294f2, 0x100295c0, 0x10029d92
 */

_DWORD *sub_10002960()
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
