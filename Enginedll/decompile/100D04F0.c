/*
 * func-name: sub_100D04F0
 * func-address: 0x100d04f0
 * callers: 0x100d29b0
 * callees: 0x100ceb10
 */

int __cdecl sub_100D04F0(_DWORD *a1, int a2, int (__cdecl *a3)(_DWORD, int))
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
      sub_100CEB10((int)a1, 0, (v3 - 4) >> 2, v5, a3);
      v3 -= 4;
      result = v3 >> 2;
    }
    while ( v3 >> 2 > 1 );
  }
  return result;
}
