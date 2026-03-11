/*
 * func-name: sub_10288FA0
 * func-address: 0x10288fa0
 * callers: 0x1000e73c
 * callees: 0x100031cf
 */

int __cdecl sub_10288FA0(_DWORD *a1, int a2)
{
  int v2; // esi
  int result; // eax
  int v4; // [esp-4h] [ebp-Ch]

  v2 = a2 - (_DWORD)a1;
  result = (a2 - (int)a1) >> 2;
  if ( result > 1 )
  {
    do
    {
      v4 = *(_DWORD *)((char *)a1 + v2 - 4);
      *(_DWORD *)((char *)a1 + v2 - 4) = *a1;
      sub_100031CF((int)a1, 0, (v2 - 4) >> 2, v4);
      v2 -= 4;
      result = v2 >> 2;
    }
    while ( v2 >> 2 > 1 );
  }
  return result;
}
