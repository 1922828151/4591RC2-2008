/*
 * func-name: sub_102A5BD0
 * func-address: 0x102a5bd0
 * callers: 0x1000af33
 * callees: none
 */

int __stdcall sub_102A5BD0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // eax

  if ( a2 == 24 && !a5 )
  {
    result = GSeconds;
    *(float *)(a1 + 3992) = *(float *)&GSeconds;
  }
  return result;
}
