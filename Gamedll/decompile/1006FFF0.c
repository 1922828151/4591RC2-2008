/*
 * func-name: sub_1006FFF0
 * func-address: 0x1006fff0
 * callers: 0x10007bd0
 * callees: 0x102c9d98
 */

_DWORD *__stdcall sub_1006FFF0(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  _DWORD *result; // eax

  result = operator new(0x14u);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
    result[3] = *a4;
    *((_BYTE *)result + 16) = a5;
    *((_BYTE *)result + 17) = 0;
  }
  return result;
}
