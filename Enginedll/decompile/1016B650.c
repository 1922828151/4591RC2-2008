/*
 * func-name: sub_1016B650
 * func-address: 0x1016b650
 * callers: 0x1016bc60
 * callees: 0x10058a90
 */

int __cdecl sub_1016B650(int a1, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v4; // esi
  int result; // eax

  v3 = a1;
  if ( a1 != a2 )
  {
    v4 = (_DWORD *)(a1 + 8);
    do
    {
      *(v4 - 1) = a3[1];
      *v4 = a3[2];
      v4[1] = a3[3];
      v4[2] = a3[4];
      v4[3] = a3[5];
      v4[4] = a3[6];
      v4[5] = a3[7];
      result = sub_10058A90((int)(v4 + 6), (int)(a3 + 8));
      v4[10] = a3[12];
      v3 += 52;
      v4 += 13;
    }
    while ( v3 != a2 );
  }
  return result;
}
