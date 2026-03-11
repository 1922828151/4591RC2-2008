/*
 * func-name: sub_10047AB5
 * func-address: 0x10047ab5
 * callers: 0x100430f4
 * callees: 0x10037392, 0x1003966f
 */

int __cdecl sub_10047AB5(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_1005BF58;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}
