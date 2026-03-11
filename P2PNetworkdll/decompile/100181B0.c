/*
 * func-name: sub_100181B0
 * func-address: 0x100181b0
 * callers: none
 * callees: none
 */

_WORD **__cdecl sub_100181B0(int a1, _WORD **a2, _WORD *a3, _DWORD *a4, int a5)
{
  _WORD **result; // eax
  _WORD *v6; // ebp

  result = a2;
  v6 = a3;
  if ( (char *)a3 - (char *)*a2 > (int)((a5 - *a4) & 0xFFFFFFFE) && (*((_BYTE *)a3 - 1) & 0xF8) == 0xD8 )
    v6 = a3 - 1;
  for ( ; *a2 != v6; ++*a2 )
  {
    if ( *a4 == a5 )
      break;
    *(_WORD *)*a4 = **a2;
    *a4 += 2;
  }
  return result;
}
