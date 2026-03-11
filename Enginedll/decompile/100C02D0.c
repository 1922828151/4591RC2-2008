/*
 * func-name: ?Render@CRENumericButton@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c02d0
 * callers: none
 * callees: 0x1006b1f0, 0x1006b230, 0x100a5e50, 0x100b5e40
 */

void __thiscall CRENumericButton::Render(CRENumericButton *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int v4; // ebp
  double v5; // st7
  int v6; // edi
  float v7; // [esp+18h] [ebp-4h]

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v4 = 0;
    if ( *((_BYTE *)this + 156) )
    {
      if ( *((_BYTE *)this + 816) )
      {
        if ( !CRENumericEdit::ValueMax(*((CRENumericEdit **)this + 205)) )
          goto LABEL_8;
      }
      else if ( !CRENumericEdit::ValueMin(*((CRENumericEdit **)this + 205)) )
      {
LABEL_8:
        if ( *((_BYTE *)this + 779) )
        {
          v5 = 0.0;
          v4 = 5;
LABEL_13:
          v7 = v5;
          v6 = *(_DWORD *)(*((_DWORD *)this + 30) + 4 * (*((_BYTE *)this + 816) == 0));
          REBlendColor::Blend((REBlendColor *)(v6 + 36), v4, a3, v7);
          CREDialog::DrawSprite(
            *((CREDialog **)this + 28),
            (struct CREElement *)v6,
            (struct tagRECT *)((char *)this + 164),
            1.0);
          return;
        }
        if ( *((_BYTE *)this + 91) )
        {
          v4 = 4;
        }
        else if ( *((_BYTE *)this + 92) )
        {
          v4 = 3;
        }
LABEL_12:
        v5 = 0.80000001;
        goto LABEL_13;
      }
    }
    v4 = 1;
    goto LABEL_12;
  }
}
