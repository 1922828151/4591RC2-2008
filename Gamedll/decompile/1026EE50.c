/*
 * func-name: sub_1026EE50
 * func-address: 0x1026ee50
 * callers: 0x1000d77e
 * callees: 0x10012fa3
 */

_DWORD *__thiscall sub_1026EE50(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  char *v10; // ebx
  int v11; // edi
  char *i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_10012FA3(a6, this[2], a4);
    v10 = (char *)this[2];
    v11 = v9;
    for ( i = (char *)v9; i != v10; i += 28 )
      std::wstring::~wstring(i);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
