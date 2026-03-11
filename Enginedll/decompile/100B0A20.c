/*
 * func-name: ?AddItem@CREListBox@@QAEJPB_WPAX@Z
 * func-address: 0x100b0a20
 * callers: 0x1014a750
 * callees: 0x1006c5d0, 0x100ab130, 0x101a2534
 */

int __thiscall CREListBox::AddItem(CREListBox *this, LPCWSTR lpString2, void *a3)
{
  char *v4; // edi
  int result; // eax

  v4 = (char *)operator new(0x218u);
  if ( !v4 )
    return -2147024882;
  lstrcpyW((LPWSTR)v4, lpString2);
  *((_DWORD *)v4 + 128) = a3;
  SetRect((LPRECT)(v4 + 516), 0, 0, 0, 0);
  v4[532] = 0;
  result = sub_1006C5D0((int)this + 1212, *((_DWORD *)this + 304) + 1);
  if ( result >= 0 )
  {
    *(_DWORD *)(*((_DWORD *)this + 303) + 4 * (*((_DWORD *)this + 304))++) = v4;
    CREScrollBar::SetTrackRange((CREListBox *)((char *)this + 564), 0, *((_DWORD *)this + 304));
    return 0;
  }
  return result;
}
