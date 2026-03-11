/*
 * func-name: sub_102812E0
 * func-address: 0x102812e0
 * callers: 0x10010591
 * callees: 0x10005fce, 0x102c6f80
 */

void __thiscall sub_102812E0(_DWORD **this, int a2, void *a3)
{
  _DWORD **v3; // ebx
  _DWORD *i; // esi

  v3 = this + 2;
  for ( i = (_DWORD *)*this[3]; i != v3[1]; i = (_DWORD *)*i )
  {
    if ( (unsigned __int8)sub_102C6F80(i[3] + 24) )
    {
      if ( i == v3[1] )
        _invalid_parameter_noinfo();
      sub_10005FCE(a3, (int)(i + 3));
    }
    if ( i == v3[1] )
      _invalid_parameter_noinfo();
  }
}
