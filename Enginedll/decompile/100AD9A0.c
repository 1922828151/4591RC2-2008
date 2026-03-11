/*
 * func-name: ?PasteFromClipboard@CRENumericEditBox@@MAEXXZ
 * func-address: 0x100ad9a0
 * callers: none
 * callees: 0x100a5620, 0x100ac120, 0x100ac3f0
 */

void __thiscall CRENumericEditBox::PasteFromClipboard(CRENumericEditBox *this)
{
  HANDLE ClipboardData; // eax
  void *v3; // ebp
  wchar_t *v4; // eax
  wchar_t *v5; // ebx
  wchar_t v6; // ax
  _BYTE *v7; // edi
  int (__thiscall **v8)(CRENumericEditBox *, _DWORD, LPVOID, int); // edi
  LPVOID v9; // eax
  char v10; // al
  int v11; // [esp-4h] [ebp-18h]
  _BYTE *i; // [esp+10h] [ebp-4h]

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
        v6 = *v4;
        v7 = (_BYTE *)*((_DWORD *)this + 198);
        for ( i = v7; v6; ++v5 )
        {
          if ( v7[696]
            || (*(unsigned __int8 (__thiscall **)(CRENumericEditBox *, _DWORD))(*(_DWORD *)this + 180))(this, v6)
            && (v7[696]
             || (v11 = *((_DWORD *)this + 133),
                 v8 = (int (__thiscall **)(CRENumericEditBox *, _DWORD, LPVOID, int))(*(_DWORD *)this + 184),
                 v9 = GlobalLock(v3),
                 v10 = (*v8)(this, *v5, v9, v11),
                 v7 = i,
                 v10)) )
          {
            if ( CREEditBox::CUniBuffer::InsertChar(
                   (CRENumericEditBox *)((char *)this + 532),
                   *((_DWORD *)this + 187),
                   *v5) )
            {
              CREEditBox::PlaceCaret(this, *((_DWORD *)this + 187) + 1);
            }
          }
          v6 = v5[1];
        }
        *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
        GlobalUnlock(v3);
        (*(void (__thiscall **)(_BYTE *, _DWORD, _DWORD))(*(_DWORD *)v7 + 208))(v7, *((_DWORD *)this + 133), 0);
      }
    }
    CloseClipboard();
  }
}
