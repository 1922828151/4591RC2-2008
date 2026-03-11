/*
 * func-name: ?Render@CREStatic@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bb2f0
 * callers: 0x100c33b0, 0x10155030
 * callees: 0x100a5e50, 0x100b6890
 */

void __thiscall CREStatic::Render(CREStatic *this, struct IDirect3DDevice9 *a2, float a3)
{
  float *v4; // edi
  const wchar_t *v5; // eax

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v4 = (float *)**((_DWORD **)this + 30);
    REBlendColor::Blend((REBlendColor *)(v4 + 29), *((_BYTE *)this + 156) == 0, a3, 0.69999999);
    v4[48] = *((float *)this + 132);
    if ( *((_DWORD *)this + 139) < 8u )
      v5 = (const wchar_t *)((char *)this + 536);
    else
      v5 = (const wchar_t *)*((_DWORD *)this + 134);
    CREDialog::DrawTextW(
      *((CREDialog **)this + 28),
      v5,
      (struct CREElement *)v4,
      (struct tagRECT *)((char *)this + 164),
      1,
      -1);
  }
}
