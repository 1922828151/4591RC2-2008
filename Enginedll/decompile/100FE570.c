/*
 * func-name: sub_100FE570
 * func-address: 0x100fe570
 * callers: 0x100fe730
 * callees: 0x101a2534
 */

_DWORD *__stdcall sub_100FE570(int a1, int a2, int a3, _DWORD *a4, char a5)
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
