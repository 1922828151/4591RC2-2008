/*
 * func-name: sub_100EB410
 * func-address: 0x100eb410
 * callers: 0x1000609b
 * callees: 0x102c9d98
 */

_DWORD *__stdcall sub_100EB410(int a1, int a2, _DWORD *a3)
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
