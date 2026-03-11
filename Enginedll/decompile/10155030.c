/*
 * func-name: ?Render@CProgressBar@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10155030
 * callers: none
 * callees: 0x100a5e50, 0x100b5820, 0x100b5e40, 0x100bb2f0, 0x100cdd20, 0x100cdd30, 0x10150580, 0x10150600, 0x101507a0, 0x10150820, 0x10153a50, 0x101a26c0
 */

void __thiscall CProgressBar::Render(CProgressBar *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int *v5; // eax
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // [esp+4h] [ebp-24h]
  struct tagRECT rc; // [esp+18h] [ebp-10h] BYREF
  float v13; // [esp+2Ch] [ebp+4h]

  v5 = (unsigned int *)*((_DWORD *)this + 174);
  if ( v5 )
  {
    if ( !v5[5] || !v5[6] )
    {
      *(_DWORD *)(*((_DWORD *)this + 174) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v5)
                                                  + 131);
      *(_DWORD *)(*((_DWORD *)this + 174) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                *((CREDialog **)this + 28),
                                                                **((_DWORD **)this + 174))
                                                  + 132);
    }
    REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 174) + 36), 0, a3, 0.0);
    CREDialog::DrawSprite(
      *((CREDialog **)this + 28),
      *((struct CREElement **)this + 174),
      (struct tagRECT *)((char *)this + 164),
      *((float *)this + 132));
  }
  else if ( *((_BYTE *)this + 747) )
  {
    CProgressBar::RenderBG(this, a2, a3);
  }
  v13 = 100.0;
  if ( *((float *)this + 178) < (double)*((float *)this + 177) )
    v13 = (*((float *)this + 176) - *((float *)this + 178)) / (*((float *)this + 177) - *((float *)this + 178));
  v6 = (_DWORD *)*((_DWORD *)this + 185);
  if ( *((_BYTE *)this + 744) )
  {
    if ( v6 )
      v9 = sub_100CDD30((int)v6);
    else
      v9 = sub_100CDD30((int)this + 164);
    v10 = (int)((double)v9 * v13);
    if ( v10 < 0 )
      v10 = 0;
    if ( v10 > v9 )
      v10 = v9;
    if ( *((_DWORD *)this + 185) )
    {
      if ( *((_BYTE *)this + 745) )
        SetRect(
          &rc,
          **((_DWORD **)this + 185),
          *(_DWORD *)(*((_DWORD *)this + 185) + 4),
          *(_DWORD *)(*((_DWORD *)this + 185) + 8),
          *(_DWORD *)(*((_DWORD *)this + 185) + 4) + v10);
      else
        SetRect(
          &rc,
          **((_DWORD **)this + 185),
          *(_DWORD *)(*((_DWORD *)this + 185) + 12) - v10,
          *(_DWORD *)(*((_DWORD *)this + 185) + 8),
          *(_DWORD *)(*((_DWORD *)this + 185) + 12));
    }
    else if ( *((_BYTE *)this + 745) )
    {
      SetRect(&rc, *((_DWORD *)this + 41), *((_DWORD *)this + 42), *((_DWORD *)this + 43), *((_DWORD *)this + 42) + v10);
    }
    else
    {
      SetRect(&rc, *((_DWORD *)this + 41), *((_DWORD *)this + 44) - v10, *((_DWORD *)this + 43), *((_DWORD *)this + 44));
    }
  }
  else
  {
    if ( v6 )
      v7 = sub_100CDD20(v6);
    else
      v7 = sub_100CDD20((_DWORD *)this + 41);
    v8 = (int)((double)v7 * v13);
    if ( v8 < 0 )
      v8 = 0;
    if ( v8 > v7 )
      v8 = v7;
    if ( *((_DWORD *)this + 185) )
    {
      if ( *((_BYTE *)this + 745) )
        SetRect(
          &rc,
          *(_DWORD *)(*((_DWORD *)this + 185) + 8) - v8,
          *(_DWORD *)(*((_DWORD *)this + 185) + 4),
          *(_DWORD *)(*((_DWORD *)this + 185) + 8),
          *(_DWORD *)(*((_DWORD *)this + 185) + 12));
      else
        SetRect(
          &rc,
          **((_DWORD **)this + 185),
          *(_DWORD *)(*((_DWORD *)this + 185) + 4),
          **((_DWORD **)this + 185) + v8,
          *(_DWORD *)(*((_DWORD *)this + 185) + 12));
    }
    else
    {
      v11 = *((_DWORD *)this + 44);
      if ( *((_BYTE *)this + 745) )
        SetRect(&rc, *((_DWORD *)this + 43) - v8, *((_DWORD *)this + 42), *((_DWORD *)this + 43), v11);
      else
        SetRect(&rc, *((_DWORD *)this + 41), *((_DWORD *)this + 42), *((_DWORD *)this + 41) + v8, v11);
    }
  }
  switch ( *((_DWORD *)this + 188) )
  {
    case 1:
      CProgressBar::RenderStretch(this, a2, a3, v13, &rc);
      break;
    case 2:
      CProgressBar::RenderPaste(this, a2, a3, v13, &rc);
      break;
    case 3:
      CProgressBar::RenderCut(this, a2, a3, v13, &rc);
      break;
    case 4:
      CProgressBar::RenderColor(this, a2, a3, v13, &rc);
      break;
    default:
      break;
  }
  if ( *((_BYTE *)this + 746) )
  {
    if ( !*((_BYTE *)this + 744) )
      CREStatic::Render(this, a2, a3);
  }
}
