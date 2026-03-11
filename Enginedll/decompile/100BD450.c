/*
 * func-name: ?Render@CREListBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bd450
 * callers: none
 * callees: 0x1006a3d0, 0x100a5e50, 0x100b5280, 0x100b5e40, 0x100b6890
 */

void __thiscall CREListBox::Render(CREListBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  _DWORD *v4; // edi
  LONG v5; // ecx
  LONG v6; // edx
  LONG v7; // eax
  LONG v8; // ecx
  LONG v9; // edx
  LONG v10; // eax
  LONG v11; // ecx
  int v12; // edi
  int v13; // ecx
  int v14; // eax
  LONG bottom; // ebp
  int v16; // edi
  bool v17; // cc
  int v18; // edx
  int v19; // ebx
  int v20; // ecx
  int v21; // eax
  bool v22; // zf
  CREDialog *v23; // ecx
  struct CREElement *v24; // [esp+14h] [ebp-28h]
  struct CREElement *v25; // [esp+18h] [ebp-24h]
  struct tagRECT rc; // [esp+1Ch] [ebp-20h] BYREF
  struct tagRECT v27; // [esp+2Ch] [ebp-10h] BYREF

  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v4 = (_DWORD *)**((_DWORD **)this + 30);
    v25 = (struct CREElement *)v4;
    REBlendColor::Blend((REBlendColor *)(v4 + 9), 0, a3, 0.69999999);
    REBlendColor::Blend((REBlendColor *)(v4 + 29), 0, a3, 0.69999999);
    v24 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
    REBlendColor::Blend((struct CREElement *)((char *)v24 + 36), 0, a3, 0.69999999);
    REBlendColor::Blend((struct CREElement *)((char *)v24 + 116), 0, a3, 0.69999999);
    CREDialog::DrawSprite(
      *((CREDialog **)this + 28),
      (struct CREElement *)v4,
      (struct tagRECT *)((char *)this + 164),
      1.0);
    if ( *((int *)this + 304) > 0 )
    {
      v22 = *((_BYTE *)this + 1209) == 0;
      v5 = *((_DWORD *)this + 134);
      v6 = *((_DWORD *)this + 135);
      rc.left = *((_DWORD *)this + 133);
      v7 = *((_DWORD *)this + 136);
      rc.top = v5;
      v8 = *((_DWORD *)this + 137);
      rc.right = v6;
      v9 = *((_DWORD *)this + 138);
      rc.bottom = v7;
      v10 = *((_DWORD *)this + 139);
      v27.left = v8;
      v11 = *((_DWORD *)this + 140);
      v27.top = v9;
      v27.right = v10;
      v27.bottom = v11;
      if ( v22 )
      {
        v12 = v4[1];
        *((_DWORD *)this + 298) = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v12)
                                            + 528);
      }
      v13 = *((_DWORD *)this + 298);
      v14 = *((_DWORD *)this + 136) - *((_DWORD *)this + 134);
      bottom = v13 + rc.top;
      rc.bottom = v13 + rc.top;
      if ( v13 )
        v14 /= v13;
      CREScrollBar::SetPageSize((CREListBox *)((char *)this + 564), v14);
      v16 = *((_DWORD *)this + 291);
      v17 = v16 < *((_DWORD *)this + 304);
      rc.right = *((_DWORD *)this + 135);
      if ( v17 )
      {
        while ( 1 )
        {
          if ( bottom > *((_DWORD *)this + 136) )
            goto LABEL_26;
          v18 = *((_DWORD *)this + 303);
          v19 = *(_DWORD *)(v18 + 4 * v16);
          if ( (*((_DWORD *)this + 299) & 1) == 0 && v16 == *((_DWORD *)this + 300) )
          {
LABEL_22:
            v27.bottom = bottom;
            v23 = (CREDialog *)*((_DWORD *)this + 28);
            v27.top = rc.top;
            CREDialog::DrawSprite(v23, v24, &v27, 1.0);
            CREDialog::DrawTextW(*((CREDialog **)this + 28), (const wchar_t *)v19, v24, &rc, 0, -1);
            goto LABEL_25;
          }
          if ( (*((_DWORD *)this + 299) & 1) != 0 )
            break;
LABEL_24:
          CREDialog::DrawTextW(*((CREDialog **)this + 28), (const wchar_t *)v19, v25, &rc, 0, -1);
LABEL_25:
          OffsetRect(&rc, 0, *((_DWORD *)this + 298));
          if ( ++v16 >= *((_DWORD *)this + 304) )
            goto LABEL_26;
          bottom = rc.bottom;
        }
        if ( *((_BYTE *)this + 1208) )
        {
          v20 = *((_DWORD *)this + 300);
          if ( v16 < v20 )
            goto LABEL_19;
          v21 = *((_DWORD *)this + 301);
          if ( v16 < v21 )
          {
LABEL_20:
            v22 = *(_BYTE *)(*(_DWORD *)(v18 + 4 * v21) + 532) == 0;
            goto LABEL_21;
          }
          if ( v16 <= v20 )
          {
LABEL_19:
            v21 = *((_DWORD *)this + 301);
            if ( v16 > v21 )
              goto LABEL_20;
          }
        }
        v22 = *(_BYTE *)(v19 + 532) == 0;
LABEL_21:
        if ( !v22 )
          goto LABEL_22;
        goto LABEL_24;
      }
    }
LABEL_26:
    (*(void (__stdcall **)(struct IDirect3DDevice9 *, _DWORD))(*((_DWORD *)this + 141) + 20))(a2, LODWORD(a3));
  }
}
