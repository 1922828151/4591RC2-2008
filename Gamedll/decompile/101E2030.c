/*
 * func-name: sub_101E2030
 * func-address: 0x101e2030
 * callers: 0x1000194c
 * callees: none
 */

int __thiscall sub_101E2030(_DWORD *this, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  if ( !this[15] )
    return 0;
  v3 = (_DWORD *)this[14];
  v4 = (_DWORD *)*v3;
  if ( (_DWORD *)*v3 == v3 )
    _invalid_parameter_noinfo();
  return v4[3];
}
