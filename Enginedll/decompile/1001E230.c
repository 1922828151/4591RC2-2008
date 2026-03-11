/*
 * func-name: sub_1001E230
 * func-address: 0x1001e230
 * callers: 0x10020ae0, 0x10020c00, 0x101702d0, 0x10170860
 * callees: 0x101a2534
 */

_DWORD *__stdcall sub_1001E230(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = a1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  if ( result != (_DWORD *)-8 )
  {
    result[2] = *a3;
    result[3] = a3[1];
  }
  return result;
}
