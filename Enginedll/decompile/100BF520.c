/*
 * func-name: ?Render@CREIMEEditBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bf520
 * callers: 0x100c4b70
 * callees: 0x100b5280, 0x100b66a0, 0x100bdfc0
 */

void __thiscall CREIMEEditBox::Render(CREIMEEditBox *this, struct IDirect3DDevice9 *a2, int a3)
{
  const wchar_t *v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ebp
  int v10; // edi
  int v11; // edi
  int v12; // [esp+1Ch] [ebp-24h]
  struct tagRECT v13; // [esp+30h] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    if ( !*((_DWORD *)this + 214) )
    {
      v4 = CREIMEEditBox::s_aszIndicator;
      do
      {
        v5 = *((_DWORD *)this + 30);
        memset(&v13, 0, sizeof(v13));
        CREDialog::CalcTextRect(*((CREDialog **)this + 28), v4, *(struct CREElement **)(v5 + 36), &v13, -1);
        v6 = v13.right - v13.left;
        if ( *((_DWORD *)this + 214) > v13.right - v13.left )
          v6 = *((_DWORD *)this + 214);
        v4 += 3;
        *((_DWORD *)this + 214) = v6;
      }
      while ( (int)v4 < (int)&word_102815FA );
      (*(void (__thiscall **)(CREIMEEditBox *))(*(_DWORD *)this + 164))(this);
    }
    CREEditBox::Render(this, a2, a3);
    v7 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
    if ( v7 )
    {
      v8 = *(_DWORD *)(v7 + 4);
      v9 = *((_DWORD *)this + 28);
      if ( REGetGlobalDialogResourceManager() )
      {
        v11 = *(_DWORD *)(*(_DWORD *)(v9 + 752) + 4 * v8);
        v10 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v11);
      }
      else
      {
        v10 = 0;
      }
      dword_1123E234 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v10 + 520) + 32))(*(_DWORD *)(v10 + 520));
      dword_11240AA4 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(v10 + 520) + 32))(*(_DWORD *)(v10 + 520));
    }
    if ( *((_BYTE *)this + 92) )
    {
      (*(void (__thiscall **)(CREIMEEditBox *, struct IDirect3DDevice9 *, int))(*(_DWORD *)this + 184))(this, a2, a3);
      byte_1123E238 = 1;
      if ( *CREIMEEditBox::s_CompString )
        (*(void (__thiscall **)(CREIMEEditBox *, struct IDirect3DDevice9 *, int))(*(_DWORD *)this + 180))(this, a2, a3);
      if ( CREIMEEditBox::s_bShowReadingWindow )
      {
        v12 = 1;
      }
      else
      {
        if ( !byte_11240AC8 )
          return;
        v12 = 0;
      }
      (*(void (__thiscall **)(CREIMEEditBox *, struct IDirect3DDevice9 *, int, int))(*(_DWORD *)this + 176))(
        this,
        a2,
        a3,
        v12);
    }
  }
}
