/*
 * func-name: sub_10008120
 * func-address: 0x10008120
 * callers: 0x10004190, 0x10004430, 0x10007f30
 * callees: none
 */

_DWORD *__stdcall sub_10008120(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax

  *a1 = *a2;
  v2 = a2[1];
  a1[1] = v2;
  if ( v2 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  return a1;
}
