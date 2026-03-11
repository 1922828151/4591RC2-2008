/*
 * func-name: sub_1006FB80
 * func-address: 0x1006fb80
 * callers: 0x100701c0
 * callees: 0x1006d580
 */

_DWORD *__thiscall sub_1006FB80(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // esi
  char *v8; // ecx
  char *v9; // eax
  char *v10; // edi
  char *v11; // ebx
  char *i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = (char *)sub_1006D580(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 40 )
      std::wstring::~wstring(i + 12);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
