/*
 * func-name: sub_1001CAD0
 * func-address: 0x1001cad0
 * callers: 0x1001e4d0
 * callees: none
 */

int __cdecl sub_1001CAD0(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  _DWORD *v5; // edx
  _DWORD *v6; // ecx
  int v7; // ebx

  result = a3;
  v4 = a2;
  if ( a1 != a2 )
  {
    v5 = (_DWORD *)(a3 + 16);
    v6 = (_DWORD *)(a2 + 16);
    do
    {
      v7 = *(v6 - 13);
      v6 -= 10;
      v5 -= 10;
      *(v5 - 3) = v7;
      *(v5 - 2) = *(v6 - 2);
      *(v5 - 1) = *(v6 - 1);
      *v5 = *v6;
      v5[1] = v6[1];
      v5[2] = v6[2];
      v5[3] = v6[3];
      v5[4] = v6[4];
      v4 -= 40;
      result -= 40;
      v5[5] = v6[5];
    }
    while ( v4 != a1 );
  }
  return result;
}
