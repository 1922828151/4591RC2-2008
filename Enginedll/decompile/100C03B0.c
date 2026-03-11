/*
 * func-name: ?Render@CRENumericEdit@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c03b0
 * callers: none
 * callees: 0x100a5e50, 0x100b6890
 */

void __thiscall CRENumericEdit::Render(CRENumericEdit *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // edi
  const wchar_t *v5; // eax

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(**((_DWORD **)this + 190) + 20))(a2, LODWORD(a3));
    if ( !*((_BYTE *)this + 732) || *((_BYTE *)this + 91) || *(_BYTE *)(*((_DWORD *)this + 190) + 92) )
    {
      (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(**((_DWORD **)this + 191) + 20))(a2, LODWORD(a3));
      (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(**((_DWORD **)this + 192) + 20))(a2, LODWORD(a3));
    }
    v4 = **((_DWORD **)this + 30);
    REBlendColor::Blend((REBlendColor *)(v4 + 116), *((_BYTE *)this + 156) == 0, a3, 0.69999999);
    if ( *((_DWORD *)this + 139) < 8u )
      v5 = (const wchar_t *)((char *)this + 536);
    else
      v5 = (const wchar_t *)*((_DWORD *)this + 134);
    CREDialog::DrawTextW(
      *((CREDialog **)this + 28),
      v5,
      (struct CREElement *)v4,
      (struct tagRECT *)((char *)this + 744),
      1,
      -1);
  }
}
