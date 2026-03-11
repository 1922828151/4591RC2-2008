/*
 * func-name: ?UpdateRects@CREPropertiesList@@UAEXXZ
 * func-address: 0x100bda20
 * callers: none
 * callees: 0x1006a3d0, 0x100a3ce0, 0x100b5280
 */

void __thiscall CREPropertiesList::UpdateRects(CREPropertiesList *this)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // ebp
  int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx
  int v10; // ecx
  int v11; // ecx

  v2 = (_DWORD *)((char *)this + 164);
  SetRect(
    (LPRECT)((char *)this + 164),
    *((_DWORD *)this + 24),
    *((_DWORD *)this + 25),
    *((_DWORD *)this + 24) + *((_DWORD *)this + 26),
    *((_DWORD *)this + 25) + *((_DWORD *)this + 27));
  v3 = *(_DWORD *)(**((_DWORD **)this + 30) + 4);
  v4 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v3);
  v5 = *((_DWORD *)this + 42);
  *((_DWORD *)this + 137) = *v2;
  v6 = *((_DWORD *)this + 43);
  *((_DWORD *)this + 138) = v5;
  v7 = *((_DWORD *)this + 44);
  *((_DWORD *)this + 139) = v6;
  *((_DWORD *)this + 133) = *v2;
  v8 = *((_DWORD *)this + 43);
  *((_DWORD *)this + 140) = v7;
  *((_DWORD *)this + 134) = *((_DWORD *)this + 42);
  v9 = *((_DWORD *)this + 44);
  *((_DWORD *)this + 135) = v8;
  v10 = *((_DWORD *)this + 304);
  *((_DWORD *)this + 136) = v9;
  v11 = *((_DWORD *)this + 133) + v10;
  *((_DWORD *)this + 139) -= *((_DWORD *)this + 295);
  *((_DWORD *)this + 135) = v11;
  InflateRect((LPRECT)((char *)this + 548), -*((_DWORD *)this + 296), 0);
  OffsetRect((LPRECT)((char *)this + 532), 0, *((_DWORD *)this + 296));
  InflateRect((LPRECT)((char *)this + 532), -*((_DWORD *)this + 296), 0);
  InflateRect((LPRECT)((char *)this + 532), -*((_DWORD *)this + 297), 0);
  (*(void (__thiscall **)(char *, int, _DWORD))(*((_DWORD *)this + 141) + 156))(
    (char *)this + 564,
    *((_DWORD *)this + 43) - *((_DWORD *)this + 295),
    *((_DWORD *)this + 42));
  (*(void (__thiscall **)(char *, _DWORD, _DWORD))(*((_DWORD *)this + 141) + 160))(
    (char *)this + 564,
    *((_DWORD *)this + 295),
    *((_DWORD *)this + 27));
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 524) )
    {
      CREScrollBar::SetPageSize(
        (CREPropertiesList *)((char *)this + 564),
        (*((_DWORD *)this + 136) - *((_DWORD *)this + 134) - 2 * *((_DWORD *)this + 296)) / (*(_DWORD *)(v4 + 528) + 5));
      CREScrollBar::ShowItem((CREPropertiesList *)((char *)this + 564), *((_DWORD *)this + 300));
    }
  }
}
