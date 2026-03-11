/*
 * func-name: sub_1000CDE0
 * func-address: 0x1000cde0
 * callers: 0x1000fe50, 0x10064070, 0x100640a0
 * callees: 0x1000b610
 */

_DWORD *__cdecl sub_1000CDE0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    if ( v4 )
      sub_1000B610(v4, v3);
    v3 += 35;
    v4 += 35;
  }
  while ( v3 != a2 );
  return v4;
}
