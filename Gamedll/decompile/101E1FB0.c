/*
 * func-name: sub_101E1FB0
 * func-address: 0x101e1fb0
 * callers: 0x1000b217
 * callees: 0x10007937
 */

void __thiscall sub_101E1FB0(_DWORD **this)
{
  _DWORD **v1; // esi
  _DWORD *i; // edi

  v1 = this + 13;
  for ( i = (_DWORD *)*this[14]; i != v1[1]; i = (_DWORD *)*i )
  {
    sub_10007937();
    if ( i == v1[1] )
      _invalid_parameter_noinfo();
  }
}
