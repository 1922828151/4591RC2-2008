/*
 * func-name: sub_100DFFF0
 * func-address: 0x100dfff0
 * callers: 0x1000873d
 * callees: none
 */

_DWORD *__cdecl sub_100DFFF0(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 21) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 21) );
  }
  return result;
}
