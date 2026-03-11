/*
 * func-name: ?CopyToClipboard@CREEditBox@@MAEXXZ
 * func-address: 0x100a43d0
 * callers: none
 * callees: 0x101a252e
 */

void __thiscall CREEditBox::CopyToClipboard(CREEditBox *this)
{
  HGLOBAL v2; // eax
  void *v3; // edi
  void *v4; // ebp
  int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // esi

  if ( *((_DWORD *)this + 187) != *((_DWORD *)this + 189) && OpenClipboard(0) )
  {
    EmptyClipboard();
    v2 = GlobalAlloc(2u, 2 * *((_DWORD *)this + 135) + 2);
    v3 = v2;
    if ( v2 )
    {
      v4 = GlobalLock(v2);
      if ( v4 )
      {
        v5 = *((_DWORD *)this + 187);
        v6 = *((_DWORD *)this + 189);
        v7 = v5;
        if ( v5 < v6 || (v7 = *((_DWORD *)this + 189), v5 <= v6) )
          v5 = *((_DWORD *)this + 189);
        v8 = v5 - v7;
        if ( v5 - v7 > 0 )
          memcpy(v4, (const void *)(*((_DWORD *)this + 133) + 2 * v7), 2 * v8);
        *((_WORD *)v4 + v8) = 0;
        GlobalUnlock(v3);
      }
      SetClipboardData(0xDu, v3);
    }
    CloseClipboard();
    if ( v3 )
      GlobalFree(v3);
  }
}
