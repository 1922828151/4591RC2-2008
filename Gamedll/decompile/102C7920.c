/*
 * func-name: sub_102C7920
 * func-address: 0x102c7920
 * callers: none
 * callees: none
 */

int __cdecl sub_102C7920(_BYTE *a1)
{
  _BYTE *v1; // esi
  int result; // eax
  int v3; // ecx

  v1 = a1;
  result = tolower((char)*a1);
  for ( *a1 = result; (_BYTE)result; *v1 = result )
  {
    v3 = (char)*++v1;
    result = tolower(v3);
  }
  return result;
}
