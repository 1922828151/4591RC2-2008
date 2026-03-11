/*
 * func-name: ?Render@CREButton@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bb510
 * callers: 0x10153f50
 * callees: 0x100a5e50, 0x100b5280, 0x100b5e40, 0x100b6890, 0x100d5bd0, 0x100d6d20
 */

void __thiscall CREButton::Render(CREButton *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // ebp
  GUISystem *v7; // eax
  int v8; // eax
  bool v9; // al
  bool v10; // zf
  double v11; // st7
  LONG v12; // eax
  LONG v13; // ecx
  LONG v14; // edx
  int *v15; // edi
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  _WORD *v19; // eax
  int v20; // edi
  const wchar_t *v21; // eax
  _DWORD *v22; // edi
  _DWORD *v23; // edx
  _DWORD *v24; // ebp
  int v25; // edi
  _DWORD *v26; // edi
  _DWORD *v27; // edx
  _DWORD *v28; // ebp
  int v29; // edi
  _DWORD *v30; // ecx
  _DWORD *v31; // ebp
  int v32; // edi
  int v33; // eax
  _DWORD *v34; // edi
  _DWORD *v35; // ecx
  _DWORD *v36; // ebp
  int v37; // edi
  int v38; // eax
  _DWORD *v39; // edi
  float v40; // [esp+20h] [ebp-30h]
  struct CREElement *v41; // [esp+24h] [ebp-2Ch]
  struct CREElement *v42; // [esp+24h] [ebp-2Ch]
  struct tagPOINT v43; // [esp+28h] [ebp-28h] BYREF
  struct tagRECT rc; // [esp+30h] [ebp-20h] BYREF
  struct tagRECT v45; // [esp+40h] [ebp-10h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v41 = *(struct CREElement **)(*((_DWORD *)this + 30) + 32);
  v7 = GUISystem::Instance();
  GUISystem::GetLogicMousePos(v7, &v43);
  v8 = *((_DWORD *)this + 28);
  if ( v8 )
  {
    v43.x -= *(_DWORD *)(v8 + 692);
    v43.y -= *(_DWORD *)(v8 + 696);
  }
  v9 = (*(int (__thiscall **)(CREButton *, LONG, LONG))(*(_DWORD *)this + 124))(this, v43.x, v43.y) != 0;
  v10 = *((_BYTE *)this + 90) == 0;
  *((_BYTE *)this + 91) = v9;
  if ( v10 || *((_BYTE *)this + 89) )
  {
    v6 = 2;
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 156) )
  {
    v6 = 1;
LABEL_7:
    v11 = 0.80000001;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 779) )
  {
    if ( v9 )
    {
      v4 = *((_DWORD *)this + 196);
      v5 = *((_DWORD *)this + 197);
      v6 = 4;
      v41 = *(struct CREElement **)(*((_DWORD *)this + 30) + 36);
    }
    else if ( *((_BYTE *)this + 157) )
    {
      v4 = -1;
      v6 = 6;
      v5 = -1;
    }
    else if ( *((_BYTE *)this + 92) )
    {
      v6 = 3;
    }
    goto LABEL_7;
  }
  v11 = 0.0;
  v4 = *((_DWORD *)this + 198);
  v5 = *((_DWORD *)this + 199);
  v6 = 5;
  v41 = *(struct CREElement **)(*((_DWORD *)this + 30) + 40);
LABEL_8:
  v10 = *((_BYTE *)this + 516) == 0;
  v40 = v11;
  v12 = *((_DWORD *)this + 42);
  v13 = *((_DWORD *)this + 43);
  rc.left = *((_DWORD *)this + 41);
  v14 = *((_DWORD *)this + 44);
  rc.top = v12;
  rc.right = v13;
  rc.bottom = v14;
  if ( v10 )
  {
    OffsetRect(&rc, v4, v5);
    if ( *((_BYTE *)this + 777) )
    {
      if ( !*((_BYTE *)this + 778) )
      {
        REBlendColor::Blend((struct CREElement *)((char *)v41 + 36), 0, a3, v40);
        CREDialog::DrawSprite(*((CREDialog **)this + 28), v41, &rc, 1.0);
      }
      v22 = (_DWORD *)**((_DWORD **)this + 30);
      REBlendColor::Blend((REBlendColor *)(v22 + 9), 0, a3, v40);
      SetRect(&v45, rc.left, rc.top, rc.left + v22[5] - v22[3], rc.top + v22[6] - v22[4]);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v22, &v45, 1.0);
      v23 = (_DWORD *)*((_DWORD *)this + 30);
      v24 = (_DWORD *)v23[1];
      v25 = *(_DWORD *)(v23[2] + 12)
          + rc.right
          + *(_DWORD *)(*v23 + 12)
          - *(_DWORD *)(v23[2] + 20)
          - *(_DWORD *)(*v23 + 20)
          - rc.left;
      REBlendColor::Blend((REBlendColor *)(v24 + 9), 0, a3, v40);
      SetRect(
        &v45,
        rc.left + *(_DWORD *)(**((_DWORD **)this + 30) + 20) - *(_DWORD *)(**((_DWORD **)this + 30) + 12),
        rc.top,
        v25 + rc.left + *(_DWORD *)(**((_DWORD **)this + 30) + 20) - *(_DWORD *)(**((_DWORD **)this + 30) + 12),
        rc.top + v24[6] - v24[4]);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v24, &v45, 1.0);
      v26 = *(_DWORD **)(*((_DWORD *)this + 30) + 8);
      REBlendColor::Blend((REBlendColor *)(v26 + 9), 0, a3, v40);
      SetRect(&v45, rc.right + v26[3] - v26[5], rc.top, rc.right, rc.top + v26[6] - v26[4]);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v26, &v45, 1.0);
      v27 = (_DWORD *)*((_DWORD *)this + 30);
      v28 = (_DWORD *)v27[3];
      v29 = rc.bottom
          + *(_DWORD *)(*v27 + 16)
          + *(_DWORD *)(v27[5] + 16)
          - *(_DWORD *)(v27[5] + 24)
          - *(_DWORD *)(*v27 + 24)
          - rc.top;
      REBlendColor::Blend((REBlendColor *)(v28 + 9), 0, a3, v40);
      SetRect(
        &v45,
        rc.left,
        rc.top + *(_DWORD *)(**((_DWORD **)this + 30) + 24) - *(_DWORD *)(**((_DWORD **)this + 30) + 16),
        rc.left + v28[5] - v28[3],
        v29 + rc.top + *(_DWORD *)(**((_DWORD **)this + 30) + 24) - *(_DWORD *)(**((_DWORD **)this + 30) + 16));
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v28, &v45, 1.0);
      v30 = (_DWORD *)*((_DWORD *)this + 30);
      v31 = (_DWORD *)v30[4];
      v32 = rc.bottom
          + *(_DWORD *)(v30[2] + 16)
          + *(_DWORD *)(v30[7] + 16)
          - *(_DWORD *)(v30[7] + 24)
          - *(_DWORD *)(v30[2] + 24)
          - rc.top;
      REBlendColor::Blend((REBlendColor *)(v31 + 9), 0, a3, v40);
      v33 = *(_DWORD *)(*((_DWORD *)this + 30) + 8);
      SetRect(
        &v45,
        rc.right + v31[3] - v31[5],
        rc.top + *(_DWORD *)(v33 + 24) - *(_DWORD *)(v33 + 16),
        rc.right,
        v32 + rc.top + *(_DWORD *)(v33 + 24) - *(_DWORD *)(v33 + 16));
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v31, &v45, 1.0);
      v34 = *(_DWORD **)(*((_DWORD *)this + 30) + 20);
      REBlendColor::Blend((REBlendColor *)(v34 + 9), 0, a3, v40);
      SetRect(&v45, rc.left, rc.bottom + v34[4] - v34[6], rc.left + v34[5] - v34[3], rc.bottom);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v34, &v45, 1.0);
      v35 = (_DWORD *)*((_DWORD *)this + 30);
      v36 = (_DWORD *)v35[6];
      v37 = rc.right
          + *(_DWORD *)(v35[5] + 12)
          + *(_DWORD *)(v35[7] + 12)
          - *(_DWORD *)(v35[7] + 20)
          - *(_DWORD *)(v35[5] + 20)
          - rc.left;
      REBlendColor::Blend((REBlendColor *)(v36 + 9), 0, a3, v40);
      v38 = *(_DWORD *)(*((_DWORD *)this + 30) + 20);
      SetRect(
        &v45,
        rc.left + *(_DWORD *)(v38 + 20) - *(_DWORD *)(v38 + 12),
        rc.bottom + v36[4] - v36[6],
        v37 + rc.left + *(_DWORD *)(v38 + 20) - *(_DWORD *)(v38 + 12),
        rc.bottom);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v36, &v45, 1.0);
      v39 = *(_DWORD **)(*((_DWORD *)this + 30) + 28);
      REBlendColor::Blend((REBlendColor *)(v39 + 9), 0, a3, v40);
      SetRect(&v45, rc.right + v39[3] - v39[5], rc.bottom + v39[4] - v39[6], rc.right, rc.bottom);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v39, &v45, 1.0);
    }
    v20 = **((_DWORD **)this + 30);
    REBlendColor::Blend((REBlendColor *)(v20 + 116), 0, a3, v40);
    if ( *((_DWORD *)this + 139) >= 8u )
    {
      v21 = (const wchar_t *)*((_DWORD *)this + 134);
      goto LABEL_40;
    }
LABEL_39:
    v21 = (const wchar_t *)((char *)this + 536);
    goto LABEL_40;
  }
  OffsetRect(&rc, v4, v5);
  if ( *((_BYTE *)this + 778) )
    v6 = 3;
  v15 = (int *)*((_DWORD *)this + v6 + 122);
  if ( v15 )
  {
    if ( !v15[5] || !v15[6] )
    {
      v16 = *v15;
      v42 = (struct CREElement *)*((_DWORD *)this + 28);
      if ( REGetGlobalDialogResourceManager() )
      {
        v17 = *(_DWORD *)(*((_DWORD *)v42 + 185) + 4 * v16);
        v18 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v17);
        if ( v18 )
          SetRect((LPRECT)(v15 + 3), 0, 0, *(_DWORD *)(v18 + 524), *(_DWORD *)(v18 + 528));
      }
    }
    REBlendColor::Blend((REBlendColor *)(v15 + 9), v6, a3, 0.0);
    CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v15, &rc, 1.0);
  }
  if ( *((_DWORD *)this + 139) < 8u )
    v19 = (_WORD *)((char *)this + 536);
  else
    v19 = (_WORD *)*((_DWORD *)this + 134);
  if ( *v19 )
  {
    v20 = **((_DWORD **)this + 30);
    REBlendColor::Blend((REBlendColor *)(v20 + 116), 0, a3, 0.80000001);
    if ( *((_DWORD *)this + 139) >= 8u )
    {
      v21 = (const wchar_t *)*((_DWORD *)this + 134);
LABEL_40:
      CREDialog::DrawTextW(*((CREDialog **)this + 28), v21, (struct CREElement *)v20, &rc, 0, -1);
      return;
    }
    goto LABEL_39;
  }
}
