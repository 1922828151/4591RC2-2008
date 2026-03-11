/*
 * func-name: sub_10009CC0
 * func-address: 0x10009cc0
 * callers: 0x10006440, 0x10006b20, 0x10007680, 0x1000cd90
 * callees: none
 */

int __cdecl sub_10009CC0(_DWORD *a1, unsigned int a2, _DWORD *a3, int a4)
{
  char *v5; // ebx
  _DWORD *v6; // eax
  char *v7; // eax
  int i; // [esp+10h] [ebp-4h]

  for ( i = -2128831035; ; i = *v5 ^ (16777619 * i) )
  {
    if ( a1 != (_DWORD *)-2 && (!a1 || a1 != a3) )
      invalid_parameter_noinfo();
    if ( a2 == a4 )
      break;
    v5 = (char *)a2;
    if ( a1 != (_DWORD *)-2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( a1[6] < 0x10u )
        v6 = a1 + 1;
      else
        v6 = (_DWORD *)a1[1];
      if ( a2 >= (unsigned int)v6 + a1[5] )
        invalid_parameter_noinfo();
    }
    ++a2;
    if ( a1 != (_DWORD *)-2 )
    {
      if ( !a1 )
        invalid_parameter_noinfo();
      if ( a1[6] < 0x10u )
        v7 = (char *)(a1 + 1);
      else
        v7 = (char *)a1[1];
      if ( v5 >= &v7[a1[5]] )
        invalid_parameter_noinfo();
    }
  }
  return i;
}
