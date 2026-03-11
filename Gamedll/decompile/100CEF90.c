/*
 * func-name: sub_100CEF90
 * func-address: 0x100cef90
 * callers: 0x100055f1
 * callees: none
 */

int __thiscall sub_100CEF90(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) >> 6 )
    _invalid_parameter_noinfo();
  return this[1] + (a2 << 6);
}
