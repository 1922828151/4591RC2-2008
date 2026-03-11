/*
 * func-name: ?Render@CPicCheckBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c0ad0
 * callers: none
 * callees: 0x100a5e50, 0x100b5820, 0x100b5e40, 0x100b6890, 0x100bc320
 */

void __thiscall CPicCheckBox::Render(CPicCheckBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int *v4; // edi
  struct RETextureNode *Texture; // eax
  unsigned int v6; // edx
  int v7; // edi
  const wchar_t *v8; // eax
  float v9; // [esp+14h] [ebp+4h]

  if ( *((_BYTE *)this + 880) )
  {
    v9 = 0.0;
    if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
    {
      if ( *((_BYTE *)this + 779) )
      {
        v4 = *(unsigned int **)(*((_DWORD *)this + 213) + 8);
        v9 = 0.80000001;
      }
      else if ( *((_BYTE *)this + 91) )
      {
        if ( *((_BYTE *)this + 816) )
          v4 = *(unsigned int **)(*((_DWORD *)this + 213) + 8);
        else
          v4 = (unsigned int *)**((_DWORD **)this + 213);
      }
      else if ( *((_BYTE *)this + 816) )
      {
        v4 = *(unsigned int **)(*((_DWORD *)this + 213) + 8);
      }
      else
      {
        v4 = (unsigned int *)**((_DWORD **)this + 213);
      }
      if ( v4 )
      {
        if ( !v4[5] || !v4[6] )
        {
          Texture = CREDialog::GetTexture(*((CREDialog **)this + 28), *v4);
          v6 = *v4;
          v4[5] = *((_DWORD *)Texture + 131);
          v4[6] = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), v6) + 132);
        }
        REBlendColor::Blend((REBlendColor *)(v4 + 9), 0, a3, v9);
        CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v4, (struct tagRECT *)this + 54, 1.0);
      }
      v7 = **((_DWORD **)this + 30);
      REBlendColor::Blend((REBlendColor *)(v7 + 36), 0, a3, v9);
      REBlendColor::Blend((REBlendColor *)(v7 + 116), 0, a3, v9);
      if ( *((_DWORD *)this + 139) < 8u )
        v8 = (const wchar_t *)((char *)this + 536);
      else
        v8 = (const wchar_t *)*((_DWORD *)this + 134);
      CREDialog::DrawTextW(
        *((CREDialog **)this + 28),
        v8,
        (struct CREElement *)v7,
        (struct tagRECT *)((char *)this + 836),
        0,
        -1);
    }
  }
  else
  {
    CRECheckBox::Render(this, a2, a3);
  }
}
