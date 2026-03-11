/*
 * func-name: sub_1001B070
 * func-address: 0x1001b070
 * callers: none
 * callees: 0x10017ef0
 */

unsigned __int8 *__cdecl sub_1001B070(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *i; // edx
  char v3; // al
  int v4; // eax

  for ( i = a2; ; i += 2 )
  {
    v3 = i[1];
    v4 = v3 ? sub_10017EF0(v3, *i) : *(unsigned __int8 *)(*i + a1 + 72);
    if ( v4 < 9 || v4 > 10 && v4 != 21 )
      break;
  }
  return i;
}
