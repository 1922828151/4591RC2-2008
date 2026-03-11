/*
 * func-name: sub_10039208
 * func-address: 0x10039208
 * callers: 0x10039036, 0x10041dbc, 0x100421df, 0x100430f4
 * callees: 0x10037392, 0x1003966f
 */

int __cdecl sub_10039208(_DWORD *a1)
{
  if ( a1 && dword_1005B614 )
  {
    *a1 = dword_1005B614;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}
