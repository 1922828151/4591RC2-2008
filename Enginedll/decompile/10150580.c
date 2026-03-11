/*
 * func-name: ?RenderStretch@CProgressBar@@QAEXPAUIDirect3DDevice9@@MMAAUtagRECT@@@Z
 * func-address: 0x10150580
 * callers: 0x10155030
 * callees: 0x100b5820, 0x100b5e40
 */

void __thiscall CProgressBar::RenderStretch(
        CProgressBar *this,
        struct IDirect3DDevice9 *a2,
        float a3,
        float a4,
        struct tagRECT *a5)
{
  unsigned int *v6; // eax

  v6 = (unsigned int *)*((_DWORD *)this + 175);
  if ( v6 )
  {
    if ( !v6[5] || !v6[6] )
    {
      *(_DWORD *)(*((_DWORD *)this + 175) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v6)
                                                  + 131);
      *(_DWORD *)(*((_DWORD *)this + 175) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                *((CREDialog **)this + 28),
                                                                **((_DWORD **)this + 175))
                                                  + 132);
    }
    CREDialog::DrawSprite(*((CREDialog **)this + 28), *((struct CREElement **)this + 175), a5, *((float *)this + 132));
  }
}
