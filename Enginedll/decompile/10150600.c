/*
 * func-name: ?RenderPaste@CProgressBar@@QAEXPAUIDirect3DDevice9@@MMAAUtagRECT@@@Z
 * func-address: 0x10150600
 * callers: 0x10155030
 * callees: 0x100a5e50, 0x100b5820, 0x100b5e40, 0x100cdd20, 0x100cdd30
 */

void __thiscall CProgressBar::RenderPaste(
        CProgressBar *this,
        struct IDirect3DDevice9 *a2,
        float a3,
        float a4,
        struct tagRECT *a5)
{
  unsigned int *v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  LONG left; // ebx
  int v11; // [esp-4h] [ebp-2Ch]
  int v12; // [esp+0h] [ebp-28h]
  LONG right; // [esp+0h] [ebp-28h]
  LONG v14; // [esp+4h] [ebp-24h]
  LONG bottom; // [esp+4h] [ebp-24h]
  struct tagRECT rc; // [esp+18h] [ebp-10h] BYREF

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
    if ( *((_BYTE *)this + 744) )
    {
      v7 = *((_DWORD *)this + 189) - sub_100CDD30(*((_DWORD *)this + 175) + 12);
      v8 = sub_100CDD30((int)a5);
    }
    else
    {
      v7 = *((_DWORD *)this + 189) - sub_100CDD20((_DWORD *)(*((_DWORD *)this + 175) + 12));
      v8 = sub_100CDD20(a5);
    }
    v9 = (v7 + v8) / *((_DWORD *)this + 189);
    if ( *((_BYTE *)this + 744) )
    {
      bottom = a5->bottom;
      right = a5->right;
      v11 = bottom - sub_100CDD30(*((_DWORD *)this + 175) + 12);
      SetRect(&rc, a5->left, v11, right, bottom);
    }
    else
    {
      left = a5->left;
      v14 = a5->bottom;
      v12 = left + sub_100CDD20((_DWORD *)(*((_DWORD *)this + 175) + 12));
      SetRect(&rc, left, a5->top, v12, v14);
    }
    if ( v9 > 0 )
    {
      do
      {
        CREDialog::DrawSprite(
          *((CREDialog **)this + 28),
          *((struct CREElement **)this + 175),
          &rc,
          *((float *)this + 132));
        if ( *((_BYTE *)this + 744) )
          OffsetRect(&rc, 0, -*((_DWORD *)this + 189));
        else
          OffsetRect(&rc, *((_DWORD *)this + 189), 0);
        --v9;
      }
      while ( v9 );
    }
  }
}
