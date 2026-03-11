/*
 * func-name: sub_100131E0
 * func-address: 0x100131e0
 * callers: 0x10012e40
 * callees: none
 */

_DWORD *__cdecl sub_100131E0(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  if ( a1[3] )
    a1[3] = 0;
  if ( a1[4] )
    a1[4] = 0;
  if ( a1[5] )
  {
    if ( !a1[6] )
      return result;
    a1[5] = 0;
  }
  if ( a1[6] )
    a1[6] = 0;
  return result;
}
