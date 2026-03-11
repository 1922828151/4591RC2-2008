/*
 * func-name: sub_100B5410
 * func-address: 0x100b5410
 * callers: none
 * callees: 0x100b52e0
 */

BOOL __cdecl sub_100B5410(LPRECT lprc, int a2, int a3)
{
  OffsetRect(lprc, *(_DWORD *)(a2 + 692), *(_DWORD *)(a2 + 696));
  sub_100B52E0(lprc->left, lprc->top, lprc->right - lprc->left, lprc->bottom - lprc->top, *(float *)&a3);
  return OffsetRect(lprc, -*(_DWORD *)(a2 + 692), -*(_DWORD *)(a2 + 696));
}
