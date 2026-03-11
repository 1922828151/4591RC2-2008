/*
 * func-name: sub_100EB250
 * func-address: 0x100eb250
 * callers: 0x1000da2b
 * callees: 0x102c9d98
 */

_DWORD *__stdcall sub_100EB250(int a1, int a2, const void *a3)
{
  _DWORD *result; // eax

  result = operator new(0x38u);
  if ( result )
    *result = a1;
  if ( result != (_DWORD *)-4 )
    result[1] = a2;
  if ( result != (_DWORD *)-8 )
    qmemcpy(result + 2, a3, 0x30u);
  return result;
}
