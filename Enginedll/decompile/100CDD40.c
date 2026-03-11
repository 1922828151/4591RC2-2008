/*
 * func-name: sub_100CDD40
 * func-address: 0x100cdd40
 * callers: 0x100a62c0, 0x100bbba0
 * callees: none
 */

bool __cdecl sub_100CDD40(int *a1, int *a2, _DWORD *a3)
{
  int v3; // ebp
  int v4; // ebx
  int v5; // esi
  int v6; // ecx

  v3 = *a1;
  if ( *a1 <= *a2 )
    v3 = *a2;
  *a3 = v3;
  v4 = a1[2];
  if ( v4 >= a2[2] )
    v4 = a2[2];
  a3[2] = v4;
  v5 = a1[1];
  if ( v5 <= a2[1] )
    v5 = a2[1];
  a3[1] = v5;
  v6 = a1[3];
  if ( v6 >= a2[3] )
    v6 = a2[3];
  a3[3] = v6;
  return v3 < v4 && v5 < v6;
}
