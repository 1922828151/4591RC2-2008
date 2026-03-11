/*
 * func-name: ?RenderCut@CProgressBar@@QAEXPAUIDirect3DDevice9@@MMAAUtagRECT@@@Z
 * func-address: 0x101507a0
 * callers: 0x10155030
 * callees: 0x100a5e50, 0x100b5820
 */

void __thiscall CProgressBar::RenderCut(
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
    REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 175) + 36), 0, a3, 0.0);
  }
}
