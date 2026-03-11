/*
 * func-name: sub_1006FBF0
 * func-address: 0x1006fbf0
 * callers: 0x10070200, 0x100d6e70
 * callees: 0x1006d5e0
 */

_DWORD *__thiscall sub_1006FBF0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  char *v10; // edi
  int v11; // ebx
  char *i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_1006D5E0(a6, this[2], a4);
    v10 = (char *)this[2];
    v11 = v9;
    for ( i = (char *)v9; i != v10; i += 36 )
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
