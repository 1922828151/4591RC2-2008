/*
 * func-name: sub_100270B0
 * func-address: 0x100270b0
 * callers: 0x1002c8f0
 * callees: 0x1001eb10
 */

_DWORD *__thiscall sub_100270B0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1001EB10(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 52 )
      std::string::~string(i + 4);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
