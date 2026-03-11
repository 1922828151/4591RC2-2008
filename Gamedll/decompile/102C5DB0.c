/*
 * func-name: sub_102C5DB0
 * func-address: 0x102c5db0
 * callers: none
 * callees: none
 */

_DWORD *__cdecl sub_102C5DB0(_DWORD *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // eax
  int v4; // ecx

  v2 = *a2 == 0;
  v3 = a2[1];
  v4 = a2[2];
  *a1 = 0;
  a1[1] = v3;
  a1[2] = v4;
  if ( v2 )
    _invalid_parameter_noinfo();
  *a1 = *a2;
  return a1;
}
