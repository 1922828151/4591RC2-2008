/*
 * func-name: sub_10141790
 * func-address: 0x10141790
 * callers: 0x10006a69
 * callees: 0x102c9d98
 */

_DWORD *__stdcall sub_10141790(int a1, int a2, _DWORD *a3)
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
