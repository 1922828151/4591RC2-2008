/*
 * func-name: sub_1006BD10
 * func-address: 0x1006bd10
 * callers: 0x1006e140
 * callees: none
 */

_DWORD *__cdecl sub_1006BD10(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 81) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 81) );
  }
  return result;
}
