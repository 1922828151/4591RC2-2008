/*
 * func-name: sub_10013480
 * func-address: 0x10013480
 * callers: 0x100136b0
 * callees: 0x10012b10
 */

_DWORD *__cdecl sub_10013480(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        int a10)
{
  if ( !a8 )
    invalid_parameter_noinfo();
  if ( !a5 )
    invalid_parameter_noinfo();
  if ( !a2 )
    invalid_parameter_noinfo();
  sub_10012B10(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return a1;
}
