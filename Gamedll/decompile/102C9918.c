/*
 * func-name: SetRect
 * func-address: 0x102c9918
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall SetRect(LPRECT lprc, int xLeft, int yTop, int xRight, int yBottom)
{
  return __imp_SetRect(lprc, xLeft, yTop, xRight, yBottom);
}
