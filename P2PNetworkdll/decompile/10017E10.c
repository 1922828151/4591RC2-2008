/*
 * func-name: sub_10017E10
 * func-address: 0x10017e10
 * callers: none
 * callees: none
 */

void __cdecl sub_10017E10(int a1, char **a2, char *a3, char **a4, char *a5)
{
  char v5; // cl
  char *v6; // edx

  for ( ; *a2 != a3; ++*a2 )
  {
    v5 = **a2;
    if ( v5 >= 0 )
    {
      v6 = *a4;
      if ( *a4 == a5 )
        return;
    }
    else
    {
      if ( a5 - *a4 < 2 )
        return;
      *(*a4)++ = ((unsigned __int8)v5 >> 6) | 0xC0;
      v6 = *a4;
      v5 = v5 & 0x3F | 0x80;
    }
    *v6 = v5;
    ++*a4;
  }
}
