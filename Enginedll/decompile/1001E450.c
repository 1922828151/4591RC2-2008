/*
 * func-name: sub_1001E450
 * func-address: 0x1001e450
 * callers: 0x10021590, 0x10023d30, 0x10025310, 0x10025440
 * callees: none
 */

_DWORD *__cdecl sub_1001E450(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edx

  result = a3;
  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = a3 + 4;
    v6 = (_DWORD *)(a1 + 16);
    do
    {
      if ( result )
      {
        *result = &Volume::`vftable';
        *(v5 - 3) = *(v6 - 3);
        *(v5 - 2) = *(v6 - 2);
        *(v5 - 1) = *(v6 - 1);
        *result = &BBox::`vftable';
        *v5 = *v6;
        v5[1] = v6[1];
        v5[2] = v6[2];
        v5[3] = v6[3];
        v5[4] = v6[4];
        v5[5] = v6[5];
      }
      v4 += 40;
      result += 10;
      v5 += 10;
      v6 += 10;
    }
    while ( v4 != a2 );
  }
  return result;
}
