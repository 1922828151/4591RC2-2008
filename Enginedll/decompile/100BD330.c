/*
 * func-name: ?UpdateRects@CREListBox@@UAEXXZ
 * func-address: 0x100bd330
 * callers: none
 * callees: 0x1006a3d0, 0x100a3ce0, 0x100b5280
 */

void __thiscall CREListBox::UpdateRects(CREListBox *this)
{
  _DWORD *v2; // ebx
  int v3; // ecx
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // ebp
  int v12; // ecx
  int v13; // [esp-8h] [ebp-18h]

  v2 = (_DWORD *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  v3 = *((_DWORD *)this + 42);
  v4 = *((_DWORD *)this + 43);
  *((_DWORD *)this + 137) = *v2;
  v5 = *((_DWORD *)this + 44);
  *((_DWORD *)this + 138) = v3;
  v6 = *((_DWORD *)this + 295);
  *((_DWORD *)this + 139) = v4;
  *((_DWORD *)this + 140) = v5;
  v7 = *((_DWORD *)this + 296);
  *((_DWORD *)this + 139) -= v6;
  InflateRect((LPRECT)((char *)this + 548), -v7, -v7);
  v8 = *((_DWORD *)this + 138);
  v9 = *((_DWORD *)this + 139);
  *((_DWORD *)this + 133) = *((_DWORD *)this + 137);
  v10 = *((_DWORD *)this + 140);
  *((_DWORD *)this + 134) = v8;
  v13 = -*((_DWORD *)this + 297);
  *((_DWORD *)this + 135) = v9;
  *((_DWORD *)this + 136) = v10;
  InflateRect((LPRECT)((char *)this + 532), v13, 0);
  (*(void (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 141) + 156))(
    (char *)this + 564,
    *((_DWORD *)this + 43) - *((_DWORD *)this + 295),
    *((_DWORD *)this + 42));
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*((_DWORD *)this + 141) + 160))(
    (char *)this + 564,
    *((_DWORD *)this + 295),
    *((_DWORD *)this + 27));
  if ( *((int *)this + 31) > 0 )
  {
    v11 = *(_DWORD *)(**((_DWORD **)this + 30) + 4);
    v12 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v11);
    if ( v12 )
    {
      if ( *(_DWORD *)(v12 + 524) )
      {
        CREScrollBar::SetPageSize(
          (CREListBox *)((char *)this + 564),
          (*((_DWORD *)this + 136) - *((_DWORD *)this + 134)) / *(_DWORD *)(v12 + 528));
        CREScrollBar::ShowItem((CREListBox *)((char *)this + 564), *((_DWORD *)this + 300));
      }
    }
  }
}
