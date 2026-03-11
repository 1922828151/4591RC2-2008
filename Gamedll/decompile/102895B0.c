/*
 * func-name: sub_102895B0
 * func-address: 0x102895b0
 * callers: 0x1000c2b1
 * callees: 0x10013aac
 */

int __cdecl sub_102895B0(int a1, void *Source, int a3, int a4)
{
  if ( !a3 || a3 != a1 )
    _invalid_parameter_noinfo();
  return sub_10013AAC(Source, a4, (a4 - (int)Source) >> 2);
}
