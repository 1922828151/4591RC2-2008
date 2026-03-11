/*
 * func-name: sub_101162A0
 * func-address: 0x101162a0
 * callers: 0x1010cb00, 0x1010d330
 * callees: 0x10115c90, 0x10115fc0
 */

_DWORD *__thiscall sub_101162A0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v8; // ecx
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int i; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  v8 = a4;
  if ( a4 != a6 )
  {
    v9 = sub_10115FC0(a6, this[2], a4);
    v10 = this[2];
    v11 = v9;
    for ( i = v9; i != v10; i += 60 )
      sub_10115C90(i);
    v8 = a4;
    v6 = a3;
    this[2] = v11;
  }
  result = a2;
  *a2 = v6;
  a2[1] = v8;
  return result;
}
