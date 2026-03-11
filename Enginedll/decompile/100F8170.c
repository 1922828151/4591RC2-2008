/*
 * func-name: sub_100F8170
 * func-address: 0x100f8170
 * callers: 0x100f5230
 * callees: 0x1003b730, 0x100f8050
 */

_DWORD *__thiscall sub_100F8170(_DWORD *this, _DWORD *a2, int a3, _DWORD **a4)
{
  unsigned int v5; // edi
  unsigned int v6; // eax
  unsigned int i; // ebx
  int v8; // ecx
  int v9; // edi
  int v10; // ecx
  _DWORD *v11; // edi

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD ***)(a3 + 4) )
    invalid_parameter_noinfo();
  v5 = this[8];
  v6 = v5 & sub_1003B730((int)(a4 + 2));
  if ( this[9] <= v6 )
    v6 += -1 - (v5 >> 1);
  for ( i = v6; ; --i )
  {
    v8 = this[5];
    if ( !v8 || i >= (this[6] - v8) >> 3 )
      invalid_parameter_noinfo();
    v9 = 8 * i + this[5];
    if ( a3 != *(_DWORD *)v9 )
      invalid_parameter_noinfo();
    if ( a4 != *(_DWORD ***)(v9 + 4) )
      break;
    v10 = this[5];
    if ( !v10 || i >= (this[6] - v10) >> 3 )
      invalid_parameter_noinfo();
    v11 = (_DWORD *)(8 * i + this[5]);
    if ( !*v11 )
      invalid_parameter_noinfo();
    if ( v11[1] == *(_DWORD *)(*v11 + 4) )
      invalid_parameter_noinfo();
    v11[1] = *(_DWORD *)v11[1];
    if ( !i )
      break;
  }
  sub_100F8050((int)(this + 1), a2, a3, a4);
  return a2;
}
