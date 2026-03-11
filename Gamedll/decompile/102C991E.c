/*
 * func-name: PtInRect
 * func-address: 0x102c991e
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall PtInRect(const RECT *lprc, POINT pt)
{
  return __imp_PtInRect(lprc, pt);
}
