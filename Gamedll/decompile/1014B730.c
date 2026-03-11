/*
 * func-name: sub_1014B730
 * func-address: 0x1014b730
 * callers: 0x1001aaf0
 * callees: 0x102c9d98
 */

_DWORD *__stdcall sub_1014B730(int a1, int a2, _DWORD *a3)
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
