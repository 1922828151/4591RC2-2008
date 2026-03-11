/*
 * func-name: ?RemoveAllItems@CREListBox@@QAEXXZ
 * func-address: 0x100b3800
 * callers: 0x100c7d60
 * callees: 0x101a2500
 */

void __thiscall CREListBox::RemoveAllItems(CREListBox *this)
{
  int i; // edi
  CREScrollBar *v3; // ecx
  int v4; // edx
  int v5; // eax

  for ( i = 0; i < *((_DWORD *)this + 304); ++i )
    operator delete(*(void **)(*((_DWORD *)this + 303) + 4 * i));
  if ( *((_DWORD *)this + 303) )
  {
    free(*((void **)this + 303));
    *((_DWORD *)this + 303) = 0;
  }
  v3 = (CREListBox *)((char *)this + 564);
  *((_DWORD *)this + 305) = 0;
  *((_DWORD *)this + 304) = 0;
  v4 = *((_DWORD *)this + 291);
  *((_DWORD *)this + 293) = 0;
  *((_DWORD *)this + 294) = 1;
  if ( v4 < 0 || (v5 = *((_DWORD *)this + 292), v5 >= 1) )
  {
    *((_DWORD *)this + 291) = 0;
  }
  else if ( v5 + v4 > 1 )
  {
    *((_DWORD *)this + 291) = 1 - v5;
    CREScrollBar::UpdateThumbRect(v3);
    return;
  }
  CREScrollBar::UpdateThumbRect(v3);
}
