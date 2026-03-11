/*
 * func-name: ?InsertItem@CREPropertiesList@@QAEJHPB_WPAX@Z
 * func-address: 0x100b1450
 * callers: none
 * callees: 0x100ab130, 0x100ce8d0, 0x101a2534
 */

int __thiscall CREPropertiesList::InsertItem(CREPropertiesList *this, int a2, LPCWSTR lpString2, void *a4)
{
  char *v5; // esi
  int v7; // esi
  char *v8; // [esp+8h] [ebp-4h] BYREF

  v5 = (char *)operator new(0x220u);
  v8 = v5;
  if ( !v5 )
    return -2147024882;
  lstrcpyW((LPWSTR)v5, lpString2);
  *((_DWORD *)v5 + 130) = a4;
  SetRect((LPRECT)(v5 + 524), 0, 0, 0, 0);
  v5[540] = 0;
  v7 = sub_100CE8D0(a2, &v8);
  if ( v7 >= 0 )
    CREScrollBar::SetTrackRange((CREPropertiesList *)((char *)this + 564), 0, *((_DWORD *)this + 306));
  return v7;
}
