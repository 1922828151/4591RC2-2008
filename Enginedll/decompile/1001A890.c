/*
 * func-name: sub_1001A890
 * func-address: 0x1001a890
 * callers: 0x10020500
 * callees: none
 */

_DWORD *__cdecl sub_1001A890(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 49) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 49) );
  }
  return result;
}
