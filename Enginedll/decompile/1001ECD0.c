/*
 * func-name: sub_1001ECD0
 * func-address: 0x1001ecd0
 * callers: 0x100217e0, 0x100250d0, 0x1002ed40
 * callees: none
 */

void __cdecl sub_1001ECD0(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v4; // edx
  _DWORD *v5; // eax

  v3 = a2;
  if ( a2 )
  {
    v4 = a1;
    v5 = a1 + 4;
    do
    {
      if ( v4 )
      {
        *v4 = &Volume::`vftable';
        *(v5 - 3) = a3[1];
        *(v5 - 2) = a3[2];
        *(v5 - 1) = a3[3];
        *v4 = &BBox::`vftable';
        *v5 = a3[4];
        v5[1] = a3[5];
        v5[2] = a3[6];
        v5[3] = a3[7];
        v5[4] = a3[8];
        v5[5] = a3[9];
      }
      --v3;
      v4 += 10;
      v5 += 10;
    }
    while ( v3 );
  }
}
