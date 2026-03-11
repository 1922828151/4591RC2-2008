/*
 * func-name: sub_1000DB6F
 * func-address: 0x1000db6f
 * callers: 0x1000d966, 0x10010541, 0x100142b2
 * callees: 0x1000ddb2, 0x1000fd0e
 */

int __cdecl sub_1000DB6F(_DWORD *a1)
{
  if ( a1 && dword_1002FC84 )
  {
    *a1 = dword_1002FC90;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}
