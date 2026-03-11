/*
 * func-name: sub_10063FD0
 * func-address: 0x10063fd0
 * callers: 0x10064030, 0x10064480
 * callees: 0x1000b610
 */

_DWORD *__cdecl sub_10063FD0(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // edi
  _DWORD *result; // eax

  for ( i = a2; i; a1 += 35 )
  {
    if ( a1 )
      result = sub_1000B610(a1, a3);
    --i;
  }
  return result;
}
