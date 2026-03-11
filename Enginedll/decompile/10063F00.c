/*
 * func-name: sub_10063F00
 * func-address: 0x10063f00
 * callers: 0x10063f70
 * callees: 0x1000b680
 */

_DWORD *__cdecl sub_10063F00(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 140;
    v4 -= 35;
    sub_1000B680(v4, v3);
  }
  while ( v3 != a1 );
  return v4;
}
