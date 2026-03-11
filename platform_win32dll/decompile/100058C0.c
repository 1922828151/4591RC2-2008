/*
 * func-name: sub_100058C0
 * func-address: 0x100058c0
 * callers: none
 * callees: none
 */

int __cdecl sub_100058C0(_BYTE *a1)
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
