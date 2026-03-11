/*
 * func-name: sub_100D2910
 * func-address: 0x100d2910
 * callers: 0x100d3570, 0x10157030
 * callees: 0x100cf720
 */

_DWORD *__thiscall sub_100D2910(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
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
    v9 = (char *)sub_100CF720(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 36 )
      std::wstring::~wstring(i + 4);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
