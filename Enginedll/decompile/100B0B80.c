/*
 * func-name: ?SelectItem@CREListBox@@QAEXH@Z
 * func-address: 0x100b0b80
 * callers: none
 * callees: 0x100a3ce0
 */

void __thiscall CREListBox::SelectItem(CREListBox *this, int a2)
{
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD); // ecx
  int v8; // [esp-4h] [ebp-8h]

  v3 = *((_DWORD *)this + 304);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 300);
    *((_DWORD *)this + 300) = a2;
    if ( a2 < 0 )
      *((_DWORD *)this + 300) = 0;
    if ( *((_DWORD *)this + 300) >= v3 )
      *((_DWORD *)this + 300) = v3 - 1;
    v5 = *((_DWORD *)this + 300);
    if ( v4 != v5 )
    {
      if ( (*((_BYTE *)this + 1196) & 1) != 0 )
        *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 303) + 4 * v5) + 532) = 1;
      v8 = *((_DWORD *)this + 300);
      *((_DWORD *)this + 301) = v8;
      CREScrollBar::ShowItem((CREListBox *)((char *)this + 564), v8);
    }
    v6 = *((_DWORD *)this + 28);
    if ( v6 )
    {
      v7 = *(void (__stdcall **)(int, int, _DWORD, CREListBox *, _DWORD, _DWORD))(v6 + 736);
      if ( v7 )
        v7(v6, 1794, *((_DWORD *)this + 34), this, 0, 0);
    }
  }
}
