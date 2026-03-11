/*
 * func-name: sub_100CEDB0
 * func-address: 0x100cedb0
 * callers: 0x100cf300, 0x100cf670, 0x100d9080, 0x1014e420, 0x1014e620
 * callees: 0x101a2534
 */

_DWORD *__stdcall sub_100CEDB0(int a1, int a2, int a3, _DWORD *a4, char a5)
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
