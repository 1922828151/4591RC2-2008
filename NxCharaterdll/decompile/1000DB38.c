/*
 * func-name: sub_1000DB38
 * func-address: 0x1000db38
 * callers: 0x1000a846, 0x1000d966, 0x10010541, 0x100142b2, 0x10014538
 * callees: 0x1000ddb2, 0x1000fd0e
 */

int __cdecl sub_1000DB38(_DWORD *a1)
{
  if ( a1 && dword_1002FC84 )
  {
    *a1 = dword_1002FC84;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}
