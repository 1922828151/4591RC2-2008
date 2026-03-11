/*
 * func-name: sub_101E1FF0
 * func-address: 0x101e1ff0
 * callers: 0x100172ba
 * callees: 0x10010f0f
 */

void __thiscall sub_101E1FF0(_DWORD **this)
{
  _DWORD **v1; // esi
  _DWORD *i; // edi

  v1 = this + 13;
  for ( i = (_DWORD *)*this[14]; i != v1[1]; i = (_DWORD *)*i )
  {
    sub_10010F0F();
    if ( i == v1[1] )
      _invalid_parameter_noinfo();
  }
}
