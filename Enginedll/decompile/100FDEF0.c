/*
 * func-name: sub_100FDEF0
 * func-address: 0x100fdef0
 * callers: 0x100fe930
 * callees: none
 */

_DWORD *__cdecl sub_100FDEF0(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 17) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 17) );
  }
  return result;
}
