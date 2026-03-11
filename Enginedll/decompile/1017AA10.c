/*
 * func-name: sub_1017AA10
 * func-address: 0x1017aa10
 * callers: none
 * callees: none
 */

int __cdecl sub_1017AA10(_BYTE *a1)
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
