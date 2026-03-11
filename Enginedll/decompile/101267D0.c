/*
 * func-name: sub_101267D0
 * func-address: 0x101267d0
 * callers: 0x101268c0
 * callees: none
 */

_BYTE *__cdecl sub_101267D0(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v3; // esi
  _BYTE *v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 60;
    v4 -= 60;
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
    v4[56] = v3[56];
    v4[57] = v3[57];
    v4[58] = v3[58];
  }
  while ( v3 != a1 );
  return v4;
}
