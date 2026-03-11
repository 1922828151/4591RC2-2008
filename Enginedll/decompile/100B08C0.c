/*
 * func-name: ?RemoveItem@CREComboBox@@QAEXI@Z
 * func-address: 0x100b08c0
 * callers: none
 * callees: 0x100ab130, 0x101a2500
 */

void __thiscall CREComboBox::RemoveItem(CREComboBox *this, signed int a2)
{
  signed int v3; // eax
  int v4; // eax

  if ( *(_DWORD *)(*((_DWORD *)this + 380) + 4 * a2) )
    operator delete(*(void **)(*((_DWORD *)this + 380) + 4 * a2));
  if ( a2 >= 0 )
  {
    v3 = *((_DWORD *)this + 381);
    if ( a2 < v3 )
    {
      memmove(
        (void *)(*((_DWORD *)this + 380) + 4 * a2),
        (const void *)(*((_DWORD *)this + 380) + 4 * a2 + 4),
        4 * (v3 - a2) - 4);
      --*((_DWORD *)this + 381);
    }
  }
  CREScrollBar::SetTrackRange((CREComboBox *)((char *)this + 828), 0, *((_DWORD *)this + 381));
  v4 = *((_DWORD *)this + 381);
  if ( *((_DWORD *)this + 204) >= v4 )
    *((_DWORD *)this + 204) = v4 - 1;
}
