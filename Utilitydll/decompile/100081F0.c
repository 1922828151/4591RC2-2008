/*
 * func-name: sub_100081F0
 * func-address: 0x100081f0
 * callers: 0x10004190, 0x10004430, 0x10005b10
 * callees: 0x10008810
 */

void __cdecl sub_100081F0(char a1, int a2, int a3, int a4, unsigned int a5)
{
  int v5; // ebx
  int v6; // esi
  unsigned int v7; // edi

  v5 = a4;
  if ( !a2 || a2 != a4 )
    invalid_parameter_noinfo();
  v6 = a3;
  v7 = a5;
  if ( a3 != a5 )
  {
    if ( !v5 )
      invalid_parameter_noinfo();
    if ( v7 <= *(_DWORD *)(v5 + 4) )
      invalid_parameter_noinfo();
    if ( (int)(v7 - 4 - v6) >> 2 > 0 )
      sub_10008810(v6, &a1, (int)(v7 - 4 - v6) >> 2);
  }
}
