/*
 * func-name: sub_10001DD0
 * func-address: 0x10001dd0
 * callers: 0x10002a80, 0x10002b70, 0x10002c60, 0x10002d40, 0x10002e20, 0x10002f00, 0x10002fe0, 0x10003120, 0x10003250, 0x10003340
 * callees: none
 */

int __cdecl sub_10001DD0(const char *a1)
{
  int result; // eax
  int v2; // edx

  result = 0;
  if ( strlen(a1) )
  {
    v2 = 1;
    do
    {
      result += v2 * a1[v2 - 1];
      ++v2;
    }
    while ( v2 - 1 < strlen(a1) );
  }
  return result;
}
