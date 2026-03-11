/*
 * func-name: sub_10056BE0
 * func-address: 0x10056be0
 * callers: 0x10057fa0
 * callees: none
 */

_DWORD *__cdecl sub_10056BE0(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 53) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 53) );
  }
  return result;
}
