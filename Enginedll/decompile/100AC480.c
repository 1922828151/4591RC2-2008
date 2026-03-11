/*
 * func-name: ?PasteFromClipboard@CREEditBox@@MAEXXZ
 * func-address: 0x100ac480
 * callers: none
 * callees: 0x100a5620, 0x100ac120, 0x100ac3f0
 */

void __thiscall CREEditBox::PasteFromClipboard(CREEditBox *this)
{
  HANDLE ClipboardData; // eax
  void *v3; // ebx
  wchar_t *v4; // eax
  wchar_t *v5; // edi
  wchar_t i; // ax
  int v7; // ecx

  CREEditBox::DeleteSelectionText(this);
  if ( OpenClipboard(0) )
  {
    ClipboardData = GetClipboardData(0xDu);
    v3 = ClipboardData;
    if ( ClipboardData )
    {
      v4 = (wchar_t *)GlobalLock(ClipboardData);
      v5 = v4;
      if ( v4 )
      {
        for ( i = *v4; i; ++v5 )
        {
          v7 = *((_DWORD *)this + 195);
          if ( v7 != -1 && *((_DWORD *)this + 135) >= v7 )
            break;
          if ( CREEditBox::CUniBuffer::InsertChar((CREEditBox *)((char *)this + 532), *((_DWORD *)this + 187), i) )
            CREEditBox::PlaceCaret(this, *((_DWORD *)this + 187) + 1);
          i = v5[1];
        }
        *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
        GlobalUnlock(v3);
      }
    }
    CloseClipboard();
  }
}
