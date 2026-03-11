/*
 * func-name: sub_101E3730
 * func-address: 0x101e3730
 * callers: 0x100074be
 * callees: 0x1000673a, 0x1000d391
 */

int __thiscall sub_101E3730(_DWORD **this)
{
  _DWORD *v2; // esi
  _DWORD **v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx

  sub_1000673A();
  sub_1000673A();
  sub_1000D391();
  v2 = (_DWORD *)*this[4];
  v3 = this + 3;
  while ( v2 != v3[1] )
  {
    if ( v2[3] )
    {
      if ( v2 == v3[1] )
        _invalid_parameter_noinfo();
      v4 = (void (__thiscall ***)(_DWORD, int))v2[3];
      if ( v4 )
        (**v4)(v4, 1);
      if ( v2 == v3[1] )
        _invalid_parameter_noinfo();
      v2[3] = 0;
    }
    if ( v2 == v3[1] )
      _invalid_parameter_noinfo();
    v2 = (_DWORD *)*v2;
  }
  return sub_10015E65();
}
