/*
 * func-name: sub_1006FDC0
 * func-address: 0x1006fdc0
 * callers: 0x1001002d
 * callees: 0x102c9d98
 */

_DWORD *__stdcall sub_1006FDC0(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  _DWORD *result; // eax

  result = operator new(0x18u);
  if ( result )
  {
    *result = a1;
    result[2] = a3;
    result[1] = a2;
    result[3] = *a4;
    result[4] = a4[1];
    *((_BYTE *)result + 20) = a5;
    *((_BYTE *)result + 21) = 0;
  }
  return result;
}
