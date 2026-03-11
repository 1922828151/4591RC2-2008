/*
 * func-name: sub_10165440
 * func-address: 0x10165440
 * callers: 0x100195a6
 * callees: 0x1001803e
 */

int __cdecl sub_10165440(_DWORD *a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax
  int v5; // [esp-Ch] [ebp-14h]

  v3 = a2 - (_DWORD)a1;
  result = (a2 - (int)a1) >> 2;
  if ( result > 1 )
  {
    do
    {
      v5 = *(_DWORD *)((char *)a1 + v3 - 4);
      *(_DWORD *)((char *)a1 + v3 - 4) = *a1;
      sub_1001803E((int)a1, 0, (v3 - 4) >> 2, v5, a3);
      v3 -= 4;
      result = v3 >> 2;
    }
    while ( v3 >> 2 > 1 );
  }
  return result;
}
