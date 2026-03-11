/*
 * func-name: sub_10057850
 * func-address: 0x10057850
 * callers: 0x100585f0, 0x10162160, 0x10167c60
 * callees: 0x101a2534
 */

_DWORD *__stdcall sub_10057850(int a1, int a2, int a3)
{
  _DWORD *result; // eax

  result = operator new(0x10u);
  if ( result )
    *result = a1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  if ( result != (_DWORD *)-8 )
  {
    result[2] = *(_DWORD *)a3;
    *((_WORD *)result + 6) = *(_WORD *)(a3 + 4);
  }
  return result;
}
