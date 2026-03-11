/*
 * func-name: sub_102C6C30
 * func-address: 0x102c6c30
 * callers: 0x102c6cd0
 * callees: 0x102c6b50
 */

_DWORD *__cdecl sub_102C6C30(
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
    _invalid_parameter_noinfo();
  if ( !a5 )
    _invalid_parameter_noinfo();
  if ( !a2 )
    _invalid_parameter_noinfo();
  sub_102C6B50(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return a1;
}
