/*
 * func-name: sub_1024FE10
 * func-address: 0x1024fe10
 * callers: 0x100165b8
 * callees: 0x10015b86
 */

int __thiscall sub_1024FE10(_DWORD *this, int a2, int a3, _DWORD *a4)
{
  ldiv_t v5; // rax
  unsigned int v6; // eax
  unsigned int i; // ebx
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // esi

  if ( !a3 )
    _invalid_parameter_noinfo();
  if ( a4 == *(_DWORD **)(a3 + 4) )
    _invalid_parameter_noinfo();
  v5 = ldiv(a4[2] ^ 0xDEADBEEF, 127773);
  v6 = (16807 * v5.rem - 2836 * v5.quot + (16807 * v5.rem - 2836 * v5.quot < 0 ? 0x7FFFFFFF : 0)) & this[8];
  if ( this[9] <= v6 )
    v6 += -1 - (this[8] >> 1);
  for ( i = v6; ; --i )
  {
    v8 = this[5];
    if ( !v8 || i >= (this[6] - v8) >> 3 )
      _invalid_parameter_noinfo();
    v9 = 8 * i + this[5];
    if ( a3 != *(_DWORD *)v9 )
      _invalid_parameter_noinfo();
    if ( a4 != *(_DWORD **)(v9 + 4) )
      break;
    v10 = this[5];
    if ( !v10 || i >= (this[6] - v10) >> 3 )
      _invalid_parameter_noinfo();
    v11 = (_DWORD *)(8 * i + this[5]);
    if ( !*v11 )
      _invalid_parameter_noinfo();
    if ( v11[1] == *(_DWORD *)(*v11 + 4) )
      _invalid_parameter_noinfo();
    v11[1] = *(_DWORD *)v11[1];
    if ( !i )
      break;
  }
  sub_10015B86(a2, a3, a4);
  return a2;
}
