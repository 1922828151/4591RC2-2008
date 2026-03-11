/*
 * func-name: sub_1005DAD0
 * func-address: 0x1005dad0
 * callers: 0x1005dd80, 0x10168a40
 * callees: 0x1005d5b0
 */

_DWORD *__thiscall sub_1005DAD0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
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
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1005D5B0(a6, this[2], a4);
    v10 = (void (__thiscall ***)(_DWORD, _DWORD))this[2];
    v11 = v9;
    for ( i = (void (__thiscall ***)(_DWORD, _DWORD))v9; i != v10; i += 13 )
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
