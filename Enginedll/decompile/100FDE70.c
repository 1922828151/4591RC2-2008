/*
 * func-name: sub_100FDE70
 * func-address: 0x100fde70
 * callers: 0x100ff960
 * callees: none
 */

_DWORD *__cdecl sub_100FDE70(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 41) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 41) );
  }
  return result;
}
