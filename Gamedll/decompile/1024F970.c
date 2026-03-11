/*
 * func-name: sub_1024F970
 * func-address: 0x1024f970
 * callers: 0x1000b3b1
 * callees: 0x1001abbd
 */

int __cdecl sub_1024F970(int a1, void *a2, int a3, int a4, char a5)
{
  int result; // eax
  _DWORD *v6; // [esp-Ch] [ebp-10h]

  if ( !a3 || a3 != a1 )
    _invalid_parameter_noinfo();
  result = a4;
  if ( (int)((a4 - (_DWORD)a2) & 0xFFFFFFFC) > 4 )
  {
    v6 = *(_DWORD **)(a4 - 4);
    if ( v6 )
      ++v6[9];
    return sub_1001ABBD(a2, a4 - 4, a4 - 4, v6, a5);
  }
  return result;
}
