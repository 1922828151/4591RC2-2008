/*
 * func-name: sub_100F5B70
 * func-address: 0x100f5b70
 * callers: 0x10020950, 0x100f5510, 0x100f5df0, 0x10101920, 0x1010a6c0, 0x1010bc60, 0x1010bd80, 0x1010be70, 0x1010bf60, 0x1010c090, 0x1010c960, 0x1016f260, 0x1016f450, 0x1016fa20
 * callees: 0x101a2534
 */

_DWORD *__stdcall sub_100F5B70(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = operator new(0xCu);
  if ( result )
    *result = a1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  if ( result != (_DWORD *)-8 )
    result[2] = *a3;
  return result;
}
