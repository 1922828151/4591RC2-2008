/*
 * func-name: sub_1001C890
 * func-address: 0x1001c890
 * callers: 0x1001eab0
 * callees: none
 */

int __cdecl sub_1001C890(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  _DWORD *v5; // ecx
  _DWORD *v6; // edx

  result = a3;
  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = (_DWORD *)(a3 + 16);
    v6 = (_DWORD *)(a1 + 16);
    do
    {
      *(v5 - 3) = *(v6 - 3);
      *(v5 - 2) = *(v6 - 2);
      *(v5 - 1) = *(v6 - 1);
      *v5 = *v6;
      v5[1] = v6[1];
      v5[2] = v6[2];
      v5[3] = v6[3];
      v5[4] = v6[4];
      v5[5] = v6[5];
      v4 += 40;
      result += 40;
      v5 += 10;
      v6 += 10;
    }
    while ( v4 != a2 );
  }
  return result;
}
