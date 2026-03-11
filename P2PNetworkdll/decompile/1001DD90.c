/*
 * func-name: sub_1001DD90
 * func-address: 0x1001dd90
 * callers: none
 * callees: 0x10017ef0
 */

int __cdecl sub_1001DD90(int a1, int a2)
{
  int i; // edx
  int v3; // eax

  for ( i = a2; ; i += 2 )
  {
    v3 = *(_BYTE *)i
       ? sub_10017EF0(*(_BYTE *)i, *(_BYTE *)(i + 1))
       : *(unsigned __int8 *)(*(unsigned __int8 *)(i + 1) + a1 + 72);
    if ( v3 < 9 || v3 > 10 && v3 != 21 )
      break;
  }
  return i;
}
