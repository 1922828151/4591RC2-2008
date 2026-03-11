/*
 * func-name: sub_10069660
 * func-address: 0x10069660
 * callers: 0x100070a4
 * callees: none
 */

_DWORD *__cdecl sub_10069660(_DWORD *a1)
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
