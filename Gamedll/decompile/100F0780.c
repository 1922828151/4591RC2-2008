/*
 * func-name: sub_100F0780
 * func-address: 0x100f0780
 * callers: 0x10006587
 * callees: 0x102c9d98
 */

_DWORD *__stdcall sub_100F0780(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax

  result = operator new(0x20u);
  if ( result )
    *result = a1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  if ( result != (_DWORD *)-8 )
  {
    result[2] = *a3;
    result[3] = a3[1];
    result[4] = a3[2];
    result[5] = a3[3];
    result[6] = a3[4];
    result[7] = a3[5];
  }
  return result;
}
