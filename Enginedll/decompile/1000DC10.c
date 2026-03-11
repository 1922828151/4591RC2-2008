/*
 * func-name: sub_1000DC10
 * func-address: 0x1000dc10
 * callers: 0x100085f0, 0x1000e9c0, 0x10010020, 0x100101e0, 0x100481a0, 0x1008b740, 0x100dca50, 0x100e3c30, 0x1010cb00, 0x1010d330, 0x10125860, 0x1017e0a0
 * callees: 0x1000b7e0
 */

_DWORD *__thiscall sub_1000DC10(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1000B7E0(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 28 )
      std::string::~string(i);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
