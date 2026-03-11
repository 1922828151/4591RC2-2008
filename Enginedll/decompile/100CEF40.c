/*
 * func-name: sub_100CEF40
 * func-address: 0x100cef40
 * callers: 0x100c8fd0
 * callees: 0x100cde30
 */

unsigned int __thiscall sub_100CEF40(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // esi

  v3 = this[1];
  if ( !v3 || (v4 = this[2], (int)(this[2] - v3) >> 2 <= a2) )
    sub_100CDE30();
  if ( v3 > v4 )
    invalid_parameter_noinfo();
  v5 = v3 + 4 * a2;
  if ( v5 > this[2] || v5 < this[1] )
    invalid_parameter_noinfo();
  if ( v5 >= this[2] )
    invalid_parameter_noinfo();
  return v5;
}
