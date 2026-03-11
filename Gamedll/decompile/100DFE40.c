/*
 * func-name: sub_100DFE40
 * func-address: 0x100dfe40
 * callers: 0x100130f7
 * callees: none
 */

_DWORD *__cdecl sub_100DFE40(_DWORD *a1)
{
  _DWORD *result; // eax
  int *v2; // ecx

  result = a1;
  v2 = (int *)*a1;
  if ( !*(_BYTE *)(*a1 + 33) )
  {
    do
    {
      result = v2;
      v2 = (int *)*v2;
    }
    while ( !*((_BYTE *)v2 + 33) );
  }
  return result;
}
