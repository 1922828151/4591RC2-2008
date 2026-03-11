/*
 * func-name: sub_10018450
 * func-address: 0x10018450
 * callers: none
 * callees: none
 */

_BYTE **__cdecl sub_10018450(int a1, _BYTE **a2, _BYTE *a3, _DWORD *a4, int a5)
{
  _BYTE **result; // eax
  _BYTE *v6; // ebp
  __int16 v7; // bx

  result = a2;
  v6 = a3;
  if ( a3 - *a2 > (int)((a5 - *a4) & 0xFFFFFFFE) && (*(a3 - 2) & 0xF8) == 0xD8 )
    v6 = a3 - 2;
  for ( ; *a2 != v6; *a2 += 2 )
  {
    if ( *a4 == a5 )
      break;
    HIBYTE(v7) = **a2;
    LOBYTE(v7) = (*a2)[1];
    *(_WORD *)*a4 = v7;
    *a4 += 2;
  }
  return result;
}
