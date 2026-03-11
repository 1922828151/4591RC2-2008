/*
 * func-name: sub_100245C0
 * func-address: 0x100245c0
 * callers: 0x10023520, 0x10023ca0
 * callees: 0x10024bb0
 */

int __userpurge sub_100245C0@<eax>(_DWORD *a1@<edi>, int a2, int a3, int a4)
{
  ldiv_t v4; // rax
  unsigned int v5; // eax
  unsigned int i; // ebx
  int v7; // ecx
  _DWORD *v8; // esi
  int v9; // ecx
  _DWORD *v10; // esi

  if ( !a3 )
    invalid_parameter_noinfo();
  if ( a4 == *(_DWORD *)(a3 + 4) )
    invalid_parameter_noinfo();
  v4 = ldiv(*(unsigned __int16 *)(a4 + 8) ^ 0xDEADBEEF, 127773);
  v5 = (16807 * v4.rem - 2836 * v4.quot + (16807 * v4.rem - 2836 * v4.quot < 0 ? 0x7FFFFFFF : 0)) & a1[8];
  if ( a1[9] <= v5 )
    v5 += -1 - (a1[8] >> 1);
  for ( i = v5; ; --i )
  {
    v7 = a1[5];
    if ( !v7 || i >= (a1[6] - v7) >> 3 )
      invalid_parameter_noinfo();
    v8 = (_DWORD *)(8 * i + a1[5]);
    if ( a3 != *v8 )
      invalid_parameter_noinfo();
    if ( a4 != v8[1] )
      break;
    v9 = a1[5];
    if ( !v9 || i >= (a1[6] - v9) >> 3 )
      invalid_parameter_noinfo();
    v10 = (_DWORD *)(8 * i + a1[5]);
    if ( !*v10 )
      invalid_parameter_noinfo();
    if ( v10[1] == *(_DWORD *)(*v10 + 4) )
      invalid_parameter_noinfo();
    v10[1] = *(_DWORD *)v10[1];
    if ( !i )
      break;
  }
  sub_10024BB0(a2, a3, a4);
  return a2;
}
