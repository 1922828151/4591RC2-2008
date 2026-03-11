/*
 * func-name: sub_101624F0
 * func-address: 0x101624f0
 * callers: 0x1001a681
 * callees: 0x1000e741
 */

void __thiscall sub_101624F0(_DWORD **this, int a2, void *a3)
{
  _DWORD *v3; // esi
  _DWORD **v4; // edi

  v3 = (_DWORD *)*this[3];
  v4 = this + 2;
  while ( v3 != v4[1] )
  {
    if ( *(_DWORD *)(v3[3] + 4) == a2 )
    {
      if ( v3 == v4[1] )
        _invalid_parameter_noinfo();
      sub_1000E741(a3, (int)(v3 + 3));
    }
    if ( v3 == v4[1] )
      _invalid_parameter_noinfo();
    v3 = (_DWORD *)*v3;
  }
}
