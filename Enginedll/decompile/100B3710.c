/*
 * func-name: ?RemoveAllItems@CREComboBox@@QAEXXZ
 * func-address: 0x100b3710
 * callers: 0x100b4970, 0x100cbde0
 * callees: 0x100a3c30, 0x101a2500
 */

void __thiscall CREComboBox::RemoveAllItems(CREComboBox *this)
{
  int i; // edi
  int v3; // edx
  int v4; // eax

  for ( i = 0; i < *((_DWORD *)this + 381); ++i )
  {
    if ( *(_DWORD *)(*((_DWORD *)this + 380) + 4 * i) )
      operator delete(*(void **)(*((_DWORD *)this + 380) + 4 * i));
  }
  if ( *((_DWORD *)this + 380) )
  {
    free(*((void **)this + 380));
    *((_DWORD *)this + 380) = 0;
  }
  *((_DWORD *)this + 382) = 0;
  *((_DWORD *)this + 381) = 0;
  v3 = *((_DWORD *)this + 357);
  *((_DWORD *)this + 359) = 0;
  *((_DWORD *)this + 360) = 1;
  if ( v3 < 0 || (v4 = *((_DWORD *)this + 358), v4 >= 1) )
  {
    *((_DWORD *)this + 357) = 0;
  }
  else if ( v4 + v3 > 1 )
  {
    *((_DWORD *)this + 357) = 1 - v4;
  }
  CREScrollBar::UpdateThumbRect((CREComboBox *)((char *)this + 828));
  *((_DWORD *)this + 204) = -1;
  *((_DWORD *)this + 205) = -1;
}
