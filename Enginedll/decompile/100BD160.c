/*
 * func-name: ?Render@CREHScrollBar@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bd160
 * callers: none
 * callees: 0x100a5e50, 0x100b5e40
 */

void __thiscall CREHScrollBar::Render(CREHScrollBar *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int v4; // edi
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx

  if ( *((_BYTE *)this + 90) )
  {
    v4 = 0;
    if ( *((_BYTE *)this + 89) )
    {
      v4 = 2;
    }
    else if ( *((_BYTE *)this + 156) && *((_BYTE *)this + 532) )
    {
      if ( *((_BYTE *)this + 91) )
      {
        v4 = 4;
      }
      else if ( *((_BYTE *)this + 92) )
      {
        v4 = 3;
      }
    }
    else
    {
      v4 = 1;
    }
    if ( *((_BYTE *)this + 516) )
    {
      REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 123) + 36), v4, a3, 0.80000001);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        *((struct CREElement **)this + 123),
        (struct tagRECT *)((char *)this + 536),
        1.0);
      REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 125) + 36), v4, a3, 0.80000001);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        *((struct CREElement **)this + 125),
        (struct tagRECT *)((char *)this + 584),
        1.0);
      REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 124) + 36), v4, a3, 0.80000001);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        *((struct CREElement **)this + 124),
        (struct tagRECT *)((char *)this + 552),
        1.0);
    }
    else
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 30) + 4);
      REBlendColor::Blend((REBlendColor *)(v5 + 36), v4, a3, 0.80000001);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        (struct CREElement *)v5,
        (struct tagRECT *)((char *)this + 536),
        1.0);
      v6 = *(_DWORD *)(*((_DWORD *)this + 30) + 8);
      REBlendColor::Blend((REBlendColor *)(v6 + 36), v4, a3, 0.80000001);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        (struct CREElement *)v6,
        (struct tagRECT *)((char *)this + 552),
        1.0);
      v7 = *(_DWORD *)(*((_DWORD *)this + 30) + 12);
      REBlendColor::Blend((REBlendColor *)(v7 + 36), v4, a3, 0.80000001);
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        (struct CREElement *)v7,
        (struct tagRECT *)((char *)this + 584),
        1.0);
    }
  }
}
