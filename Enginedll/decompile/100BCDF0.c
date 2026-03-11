/*
 * func-name: ?Render@CREScrollBar@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bcdf0
 * callers: none
 * callees: 0x100a5e50, 0x100b5e40, 0x100d5bd0, 0x100d6d20
 */

void __thiscall CREScrollBar::Render(CREScrollBar *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int v4; // ebp
  GUISystem *v5; // eax
  int v6; // eax
  int *v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // edi
  struct CREElement *v11; // [esp+18h] [ebp-2Ch]
  struct CREElement *v12; // [esp+18h] [ebp-2Ch]
  struct CREElement *v13; // [esp+18h] [ebp-2Ch]
  struct CREElement *v14; // [esp+18h] [ebp-2Ch]
  struct CREElement *v15; // [esp+18h] [ebp-2Ch]
  int v16; // [esp+1Ch] [ebp-28h]
  int v17; // [esp+20h] [ebp-24h]
  int v18; // [esp+24h] [ebp-20h]
  int v19; // [esp+28h] [ebp-1Ch]
  int v20; // [esp+28h] [ebp-1Ch]
  POINT pt; // [esp+2Ch] [ebp-18h] BYREF
  struct tagRECT rc; // [esp+34h] [ebp-10h] BYREF

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
    v5 = GUISystem::Instance();
    GUISystem::GetLogicMousePos(v5, &pt);
    v6 = *((_DWORD *)this + 28);
    pt.x -= *(_DWORD *)(v6 + 692);
    pt.y -= *(_DWORD *)(v6 + 696);
    v17 = 0;
    v16 = 0;
    v18 = 6;
    if ( PtInRect((const RECT *)((char *)this + 536), pt) )
      v17 = (*((_BYTE *)this + 533) != 0) + 1;
    if ( PtInRect((const RECT *)((char *)this + 552), pt) )
      v18 = (*((_BYTE *)this + 533) != 0) + 7;
    v7 = (int *)((char *)this + 584);
    if ( PtInRect((const RECT *)((char *)this + 584), pt) )
      v16 = (*((_BYTE *)this + 533) != 0) + 1;
    v11 = *(struct CREElement **)(*((_DWORD *)this + 30) + 60);
    REBlendColor::Blend((struct CREElement *)((char *)v11 + 36), v4, a3, 0.80000001);
    v8 = *((_DWORD *)this + 143);
    if ( v8 < *((_DWORD *)this + 145) - 2 )
    {
      do
      {
        v19 = v8 + 2;
        SetRect(&rc, *v7, v8, *((_DWORD *)this + 148), v8 + 2);
        CREDialog::DrawSprite(*((CREDialog **)this + 28), v11, &rc, 1.0);
        v8 = v19;
      }
      while ( v19 < *((_DWORD *)this + 145) - 2 );
    }
    v12 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4 * v17);
    REBlendColor::Blend((struct CREElement *)((char *)v12 + 36), v4, a3, 0.80000001);
    CREDialog::DrawSprite(*((CREDialog **)this + 28), v12, (struct tagRECT *)((char *)this + 536), 1.0);
    SetRect(&rc, *v7, *((_DWORD *)this + 147), *((_DWORD *)this + 148), *((_DWORD *)this + 147) + 2);
    v13 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4 * v16 + 36);
    REBlendColor::Blend((struct CREElement *)((char *)v13 + 36), v4, a3, 0.80000001);
    CREDialog::DrawSprite(*((CREDialog **)this + 28), v13, &rc, 1.0);
    SetRect(&rc, *v7, *((_DWORD *)this + 149) - 2, *((_DWORD *)this + 148), *((_DWORD *)this + 149));
    v14 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4 * v16 + 48);
    REBlendColor::Blend((struct CREElement *)((char *)v14 + 36), v4, a3, 0.80000001);
    CREDialog::DrawSprite(*((CREDialog **)this + 28), v14, &rc, 1.0);
    v15 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4 * v16 + 12);
    REBlendColor::Blend((struct CREElement *)((char *)v15 + 36), v4, a3, 0.80000001);
    v9 = *((_DWORD *)this + 147) + 2;
    if ( v9 < *((_DWORD *)this + 149) - 4 )
    {
      do
      {
        v20 = v9 + 2;
        SetRect(&rc, *v7, v9, *((_DWORD *)this + 148), v9 + 2);
        CREDialog::DrawSprite(*((CREDialog **)this + 28), v15, &rc, 1.0);
        v9 = v20;
      }
      while ( v20 < *((_DWORD *)this + 149) - 4 );
    }
    v10 = *(_DWORD *)(*((_DWORD *)this + 30) + 4 * v18);
    REBlendColor::Blend((REBlendColor *)(v10 + 36), v4, a3, 0.80000001);
    CREDialog::DrawSprite(
      *((CREDialog **)this + 28),
      (struct CREElement *)v10,
      (struct tagRECT *)((char *)this + 552),
      1.0);
  }
}
