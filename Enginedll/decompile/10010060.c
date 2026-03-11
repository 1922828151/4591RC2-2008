/*
 * func-name: sub_10010060
 * func-address: 0x10010060
 * callers: 0x10011c60, 0x1002dd00, 0x10139890
 * callees: 0x1000be90, 0x1017a0b0
 */

_DWORD *__thiscall sub_10010060(int *this, _DWORD *a2, int a3, _DWORD *a4, int a5, int a6)
{
  int v6; // esi
  _DWORD *v8; // ecx
  _DWORD *v9; // eax
  int v10; // ebx
  _DWORD *v11; // edi
  _DWORD *i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != (_DWORD *)a6 )
  {
    v9 = sub_1000BE90(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != (_DWORD *)v10; i += 35 )
      sub_1017A0B0(i + 25);
    v8 = a4;
    v6 = a3;
    this[2] = (int)v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
