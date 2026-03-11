/*
 * func-name: sub_10009D30
 * func-address: 0x10009d30
 * callers: 0x10058270, 0x1006dd10, 0x1009a150, 0x1016cfe0
 * callees: none
 */

_DWORD *__cdecl sub_10009D30(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 45) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 45) );
  }
  return result;
}
