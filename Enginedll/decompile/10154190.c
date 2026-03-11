/*
 * func-name: ?Render@CSeperateLine@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10154190
 * callers: none
 * callees: 0x100a5e50, 0x100b5850, 0x100b5e40
 */

void __thiscall CSeperateLine::Render(CSeperateLine *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // edi

  if ( *((_BYTE *)this + 536) )
  {
    CREDialog::DrawRect(
      *((CREDialog **)this + 28),
      (struct tagRECT *)((char *)this + 164),
      *((_DWORD *)this + 135),
      *((float *)this + 132));
  }
  else
  {
    v4 = *((_DWORD *)this + 133);
    if ( v4 || (v4 = **((_DWORD **)this + 30)) != 0 )
    {
      REBlendColor::Blend((REBlendColor *)(v4 + 36), 0, a3, 1.0);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        (struct CREElement *)v4,
        (struct tagRECT *)((char *)this + 164),
        *((float *)this + 132));
    }
  }
}
