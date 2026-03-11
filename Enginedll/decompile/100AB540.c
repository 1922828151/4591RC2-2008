/*
 * func-name: ?RemoveItem@CREListBox@@QAEXH@Z
 * func-address: 0x100ab540
 * callers: 0x100ab5d0
 * callees: 0x100ab130, 0x100ce3c0, 0x101a2500
 */

void __thiscall CREListBox::RemoveItem(CREListBox *this, int a2)
{
  int v3; // eax
  int v4; // eax
  void (__stdcall *v5)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD); // ecx

  if ( a2 >= 0 && a2 < *((_DWORD *)this + 304) )
  {
    operator delete(*(void **)(*((_DWORD *)this + 303) + 4 * a2));
    sub_100CE3C0(a2);
    CREScrollBar::SetTrackRange((CREListBox *)((char *)this + 564), 0, *((_DWORD *)this + 304));
    v3 = *((_DWORD *)this + 304);
    if ( *((_DWORD *)this + 300) >= v3 )
      *((_DWORD *)this + 300) = v3 - 1;
    v4 = *((_DWORD *)this + 28);
    if ( v4 )
    {
      v5 = *(void (__stdcall **)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD))(v4 + 736);
      if ( v5 )
        v5(v4, 1794, *((_DWORD *)this + 34), this, 0, 0);
    }
  }
}
