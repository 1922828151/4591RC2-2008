/*
 * func-name: ?Render@CTYChatIME@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c4b70
 * callers: none
 * callees: 0x1006ab80, 0x100a5480, 0x100a56d0, 0x100b5280, 0x100b6890, 0x100bf520
 */

void __thiscall CTYChatIME::Render(CTYChatIME *this, struct IDirect3DDevice9 *a2, int a3)
{
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  struct CREDialogResourceManager *v7; // eax
  int v8; // edi
  const wchar_t *v9; // eax
  bool v10; // zf
  int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  int v19; // ecx
  const wchar_t *v20; // eax
  int v21; // [esp+Ch] [ebp-4h] BYREF

  v4 = **((_DWORD **)this + 30);
  if ( v4 )
  {
    v5 = *((_DWORD *)this + 28);
    v6 = *(_DWORD *)(v4 + 4);
    v7 = REGetGlobalDialogResourceManager();
    if ( v7 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(v5 + 752) + 4 * v6);
      v7 = *(struct CREDialogResourceManager **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v8);
    }
    *((_DWORD *)this + 230) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)v7 + 130) + 32))(*((_DWORD *)v7 + 130));
    CREEditBox::CUniBuffer::Analyse((CTYChatIME *)((char *)this + 908));
    if ( *((_DWORD *)this + 226) < 8u )
      v9 = (const wchar_t *)((char *)this + 884);
    else
      v9 = (const wchar_t *)*((_DWORD *)this + 221);
    CREEditBox::CUniBuffer::SetText((CTYChatIME *)((char *)this + 908), v9);
    v10 = *((_DWORD *)this + 229) == 0;
    v11 = *((_DWORD *)this + 229);
    v21 = 0;
    if ( v10
      || (!*((_BYTE *)this + 924) || CREEditBox::CUniBuffer::Analyse((CTYChatIME *)((char *)this + 908)) >= 0)
      && CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 232), v11, 1, &v21) >= 0 )
    {
      v12 = *((_DWORD *)this + 42);
      *((_DWORD *)this + 141) = *((_DWORD *)this + 41);
      v13 = *((_DWORD *)this + 43);
      *((_DWORD *)this + 142) = v12;
      v14 = *((_DWORD *)this + 44);
      *((_DWORD *)this + 143) = v13;
      v15 = *((_DWORD *)this + 140);
      *((_DWORD *)this + 144) = v14;
      InflateRect(
        (LPRECT)((char *)this + 564),
        -*((_DWORD *)this + 139) - 2 * v15 - v21,
        -*((_DWORD *)this + 139) - 4 * v15);
      v16 = *((_DWORD *)this + 42);
      *((_DWORD *)this + 233) = *((_DWORD *)this + 41);
      v17 = *((_DWORD *)this + 43);
      *((_DWORD *)this + 234) = v16;
      v18 = *((_DWORD *)this + 44);
      *((_DWORD *)this + 235) = v17;
      v19 = *((_DWORD *)this + 139);
      *((_DWORD *)this + 236) = v18;
      InflateRect((LPRECT)((char *)this + 932), -v19 - 2 * *((_DWORD *)this + 140), -v19 - 4 * *((_DWORD *)this + 140));
    }
  }
  CREIMEEditBox::Render(this, a2, a3);
  if ( *((_DWORD *)this + 226) < 8u )
    v20 = (const wchar_t *)((char *)this + 884);
  else
    v20 = (const wchar_t *)*((_DWORD *)this + 221);
  CREDialog::DrawTextW(
    *((CREDialog **)this + 28),
    v20,
    **((struct CREElement ***)this + 30),
    (struct tagRECT *)((char *)this + 932),
    0,
    -1);
}
