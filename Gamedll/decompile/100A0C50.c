/*
 * func-name: sub_100A0C50
 * func-address: 0x100a0c50
 * callers: 0x10010b81
 * callees: none
 */

_DWORD *__cdecl sub_100A0C50(_DWORD *a1)
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
