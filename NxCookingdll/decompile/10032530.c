/*
 * func-name: sub_10032530
 * func-address: 0x10032530
 * callers: 0x10032790
 * callees: 0x10031a80
 */

int __cdecl sub_10032530(_DWORD *a1, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // [esp-8h] [ebp-10h]
  float v5; // [esp-4h] [ebp-Ch]

  v2 = a2 - (_DWORD)a1;
  result = (a2 - (int)a1) >> 3;
  if ( result > 1 )
  {
    do
    {
      v5 = *(float *)((char *)a1 + v2 - 4);
      v4 = *(_DWORD *)((char *)a1 + v2 - 8);
      *(_DWORD *)((char *)a1 + v2 - 8) = *a1;
      *(_DWORD *)((char *)a1 + v2 - 4) = a1[1];
      sub_10031A80((int)a1, 0, (v2 - 8) >> 3, v4, v5);
      v2 -= 8;
      result = v2 >> 3;
    }
    while ( v2 >> 3 > 1 );
  }
  return result;
}
