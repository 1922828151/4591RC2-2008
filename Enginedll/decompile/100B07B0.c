/*
 * func-name: ?AddItem@CREComboBox@@QAEJPB_WPAX@Z
 * func-address: 0x100b07b0
 * callers: 0x1014a750
 * callees: 0x1006c5d0, 0x100aa770, 0x100ab130, 0x101a251c, 0x101a2534
 */

int __thiscall CREComboBox::AddItem(CREComboBox *this, wchar_t *Source, void *a3)
{
  int Item; // eax
  int v6; // eax
  wchar_t *v7; // eax
  wchar_t *v8; // ebp
  int v9; // eax
  void (__stdcall *v10)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx

  if ( !Source )
    return -2147024809;
  Item = CREComboBox::FindItem(this, Source);
  if ( Item == -1 )
  {
    v7 = (wchar_t *)operator new(0x218u);
    v8 = v7;
    if ( v7 )
    {
      memset(v7, 0, 0x218u);
      wcsncpy(v8, Source, 0xFFu);
      *((_DWORD *)v8 + 128) = a3;
      if ( sub_1006C5D0((int)this + 1520, *((_DWORD *)this + 381) + 1) >= 0 )
        *(_DWORD *)(*((_DWORD *)this + 380) + 4 * (*((_DWORD *)this + 381))++) = v8;
      CREScrollBar::SetTrackRange((CREComboBox *)((char *)this + 828), 0, *((_DWORD *)this + 381));
      if ( *((_DWORD *)this + 381) == 1 )
      {
        v9 = *((_DWORD *)this + 28);
        *((_DWORD *)this + 204) = 0;
        *((_DWORD *)this + 205) = 0;
        if ( v9 )
        {
          v10 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v9 + 736);
          if ( v10 )
          {
            if ( *(_BYTE *)(v9 + 84) )
              v10(v9, 513, *((_DWORD *)this + 34), this, 0, 0);
          }
        }
      }
      return 0;
    }
    else
    {
      return -2147024882;
    }
  }
  else
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 380) + 4 * Item);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 512) = a3;
      return 0;
    }
    else
    {
      return -2147467259;
    }
  }
}
