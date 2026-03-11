/*
 * func-name: sub_1009AF40
 * func-address: 0x1009af40
 * callers: 0x10097910, 0x1009b040
 * callees: 0x100999b0, 0x10099a20
 */

_DWORD *__thiscall sub_1009AF40(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
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
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_10099A20(a6, this[2], a4);
    v10 = (char *)this[2];
    v11 = v9;
    for ( i = (char *)v9; i != v10; i += 104 )
      sub_100999B0(i);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
