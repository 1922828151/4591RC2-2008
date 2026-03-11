/*
 * func-name: sub_1005A490
 * func-address: 0x1005a490
 * callers: 0x1000cc4d
 * callees: 0x1000b5a5
 */

_DWORD *__thiscall sub_1005A490(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
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
    _invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1000B5A5(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 40 )
      std::string::~string((void *)(i + 8));
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
