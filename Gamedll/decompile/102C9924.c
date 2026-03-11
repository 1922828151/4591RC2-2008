/*
 * func-name: OffsetRect
 * func-address: 0x102c9924
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall OffsetRect(LPRECT lprc, int dx, int dy)
{
  return __imp_OffsetRect(lprc, dx, dy);
}
