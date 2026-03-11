/*
 * func-name: sub_1006D1B0
 * func-address: 0x1006d1b0
 * callers: 0x1006f000
 * callees: 0x101a2534
 */

char *__stdcall sub_1006D1B0(int a1, int a2, int a3)
{
  char *result; // eax
  float *v4; // ecx

  result = (char *)operator new(0x24u);
  if ( result )
    *(_DWORD *)result = a1;
  if ( result != (char *)-4 )
    *((_DWORD *)result + 1) = a2;
  v4 = (float *)(result + 8);
  if ( result != (char *)-8 )
  {
    *v4 = 0.0;
    *((float *)result + 3) = 0.0;
    *((float *)result + 4) = 0.0;
    *v4 = *(float *)a3;
    *((_DWORD *)result + 3) = *(_DWORD *)(a3 + 4);
    *((_DWORD *)result + 4) = *(_DWORD *)(a3 + 8);
    *((_DWORD *)result + 5) = *(_DWORD *)(a3 + 12);
    *((_DWORD *)result + 6) = *(_DWORD *)(a3 + 16);
    *((float *)result + 7) = *(float *)(a3 + 20);
    *((float *)result + 8) = *(float *)(a3 + 24);
  }
  return result;
}
