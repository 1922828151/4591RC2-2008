/*
 * func-name: sub_1000B900
 * func-address: 0x1000b900
 * callers: 0x1000be90
 * callees: 0x1000b680
 */

_DWORD *__cdecl sub_1000B900(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_1000B680(v4, v3);
    v3 += 140;
    v4 += 35;
  }
  while ( v3 != a2 );
  return v4;
}
