/*
 * func-name: sub_1014D300
 * func-address: 0x1014d300
 * callers: 0x100107df
 * callees: 0x1000ce8c
 */

_DWORD *__thiscall sub_1014D300(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  void (__thiscall ***v10)(_DWORD, _DWORD); // edi
  int v11; // ebx
  void (__thiscall ***i)(_DWORD, _DWORD); // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1000CE8C(a6, this[2], a4);
    v10 = (void (__thiscall ***)(_DWORD, _DWORD))this[2];
    v11 = v9;
    for ( i = (void (__thiscall ***)(_DWORD, _DWORD))v9; i != v10; i += 146 )
      (**i)(i, 0);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
