/*
 * func-name: sub_1016AF00
 * func-address: 0x1016af00
 * callers: 0x1016b6c0
 * callees: 0x10058a90
 */

int __cdecl sub_1016AF00(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  int v7; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  v5 = (_DWORD *)(a3 + 8);
  v6 = (_DWORD *)(a2 + 8);
  do
  {
    v7 = *(v6 - 14);
    v6 -= 13;
    v5 -= 13;
    *(v5 - 1) = v7;
    *v5 = *v6;
    v5[1] = v6[1];
    v5[2] = v6[2];
    v5[3] = v6[3];
    v5[4] = v6[4];
    v3 -= 52;
    v4 -= 52;
    v5[5] = v6[5];
    sub_10058A90((int)(v5 + 6), (int)(v6 + 6));
    v5[10] = v6[10];
  }
  while ( v3 != a1 );
  return v4;
}
