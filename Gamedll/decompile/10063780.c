/*
 * func-name: sub_10063780
 * func-address: 0x10063780
 * callers: 0x1000a830
 * callees: 0x1000358f, 0x102c6f80
 */

void __thiscall sub_10063780(_DWORD **this, int a2, void *a3)
{
  _DWORD **v3; // ebx
  _DWORD *i; // esi

  v3 = this + 1;
  for ( i = (_DWORD *)*this[2]; i != v3[1]; i = (_DWORD *)*i )
  {
    if ( (unsigned __int8)sub_102C6F80(i[3] + 24) )
    {
      if ( i == v3[1] )
        _invalid_parameter_noinfo();
      sub_1000358F(a3, (int)(i + 3));
    }
    if ( i == v3[1] )
      _invalid_parameter_noinfo();
  }
}
