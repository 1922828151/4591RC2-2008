/*
 * func-name: sub_1006C450
 * func-address: 0x1006c450
 * callers: 0x1006d220, 0x100cf040, 0x100cf3b0
 * callees: none
 */

_DWORD *__cdecl sub_1006C450(_DWORD *a1)
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
