/*
 * func-name: sub_1003923F
 * func-address: 0x1003923f
 * callers: 0x10039036, 0x10039999, 0x100421df
 * callees: 0x10037392, 0x1003966f
 */

int __cdecl sub_1003923F(_DWORD *a1)
{
  if ( a1 && dword_1005B614 )
  {
    *a1 = dword_1005B620;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter(0, 0, 0, 0, 0);
    return 22;
  }
}
