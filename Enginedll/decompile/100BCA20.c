/*
 * func-name: ?Render@CRESlider@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bca20
 * callers: none
 * callees: 0x100a25a0, 0x100a5e50, 0x100a5f80, 0x100b5e40, 0x100b6890, 0x100d5bd0, 0x100d6d20
 */

void __thiscall CRESlider::Render(CRESlider *this, struct IDirect3DDevice9 *a2, float a3)
{
  struct tagRECT *v4; // ebp
  unsigned int v5; // ebx
  double v6; // st7
  struct CREElement **v7; // eax
  struct CREElement *v8; // edi
  LONG v9; // ecx
  LONG v10; // edx
  LONG v11; // ecx
  int v12; // eax
  CREDialog *v13; // ecx
  GUISystem *v14; // eax
  int v15; // eax
  _DWORD *v16; // edi
  LONG v17; // ecx
  bool v18; // zf
  REBlendColor *v19; // ebx
  const wchar_t *v20; // eax
  const wchar_t *v21; // eax
  int v22; // edx
  LONG v23; // eax
  struct tagRECT v24; // [esp+18h] [ebp-E4h] BYREF
  float v25; // [esp+28h] [ebp-D4h]
  struct tagPOINT v26; // [esp+2Ch] [ebp-D0h] BYREF
  wchar_t Buffer[100]; // [esp+34h] [ebp-C8h] BYREF

  v4 = (struct tagRECT *)((char *)this + 564);
  if ( !*((_DWORD *)this + 141) && !*((_DWORD *)this + 143) )
    (*(void (__thiscall **)(CRESlider *))(*(_DWORD *)this + 164))(this);
  v5 = 0;
  if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
  {
    v5 = 2;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)this + 156) )
  {
    v5 = 1;
LABEL_8:
    v6 = 0.80000001;
    goto LABEL_9;
  }
  if ( !*((_BYTE *)this + 560) )
  {
    if ( *((_BYTE *)this + 91) )
    {
      v5 = 4;
    }
    else if ( *((_BYTE *)this + 92) )
    {
      v5 = 3;
    }
    goto LABEL_8;
  }
  v6 = 0.0;
  v5 = 5;
LABEL_9:
  v7 = (struct CREElement **)*((_DWORD *)this + 30);
  v25 = v6;
  v8 = *v7;
  REBlendColor::Blend((struct CREElement *)((char *)*v7 + 36), v5, a3, v25);
  v9 = *((_DWORD *)this + 41);
  v10 = *((_DWORD *)this + 42);
  v24.right = *((_DWORD *)this + 43);
  v24.left = v9;
  v11 = *((_DWORD *)this + 44);
  v12 = v10 + v11;
  v24.top = v10;
  v24.bottom = v11;
  v13 = (CREDialog *)*((_DWORD *)this + 28);
  v24.top = v12 / 2;
  v24.bottom = v12 / 2 + 1;
  CREDialog::DrawSprite(v13, v8, &v24, 1.0);
  v14 = GUISystem::Instance();
  GUISystem::GetLogicMousePos(v14, &v26);
  v15 = *((_DWORD *)this + 28);
  v26.x -= *(_DWORD *)(v15 + 692);
  v26.y -= *(_DWORD *)(v15 + 696);
  if ( PtInRect(v4, v26) )
    v16 = *(_DWORD **)(*((_DWORD *)this + 30) + 8);
  else
    v16 = *(_DWORD **)(*((_DWORD *)this + 30) + 4);
  REBlendColor::Blend((REBlendColor *)(v16 + 9), v5, a3, v25);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v16, v4, 1.0);
  v17 = *((_DWORD *)this + 42);
  v24.left = *((_DWORD *)this + 41);
  v24.bottom = *((_DWORD *)this + 44);
  v24.right = *((_DWORD *)this + 41) - 10;
  v18 = *((_BYTE *)this + 561) == 0;
  v24.top = v17;
  v24.left = v24.right - 100;
  if ( v18 )
  {
    CREElement::SetFont((CREElement *)v16, 4u, 0xFFFFFFFF, 6u);
    v19 = (REBlendColor *)(v16 + 29);
    REBlendColor::Blend((REBlendColor *)(v16 + 29), 0, a3, 1.0);
    sub_100A25A0(Buffer, (size_t)L"%d", *((_DWORD *)this + 135));
    CREDialog::DrawTextW(*((CREDialog **)this + 28), Buffer, (struct CREElement *)v16, &v24, 0, -1);
  }
  else
  {
    CREElement::SetFont((CREElement *)v16, 0, 0xFFFFFFFF, 6u);
    v19 = (REBlendColor *)(v16 + 29);
    REBlendColor::Blend((REBlendColor *)(v16 + 29), 0, a3, 1.0);
    if ( *((_DWORD *)this + 151) < 8u )
      v20 = (const wchar_t *)((char *)this + 584);
    else
      v20 = (const wchar_t *)*((_DWORD *)this + 146);
    CREDialog::DrawTextW(*((CREDialog **)this + 28), v20, (struct CREElement *)v16, &v24, 0, -1);
  }
  v24.left = *((_DWORD *)this + 43) + 10;
  v18 = *((_BYTE *)this + 561) == 0;
  v24.right = v24.left + 100;
  if ( v18 )
  {
    CREElement::SetFont((CREElement *)v16, 4u, 0xFFFFFFFF, 4u);
    REBlendColor::Blend(v19, 0, a3, 1.0);
    sub_100A25A0(Buffer, (size_t)L"%d", *((_DWORD *)this + 136));
    CREDialog::DrawTextW(*((CREDialog **)this + 28), Buffer, (struct CREElement *)v16, &v24, 0, -1);
  }
  else
  {
    CREElement::SetFont((CREElement *)v16, 0, 0xFFFFFFFF, 4u);
    REBlendColor::Blend(v19, 0, a3, 1.0);
    if ( *((_DWORD *)this + 158) < 8u )
      v21 = (const wchar_t *)((char *)this + 612);
    else
      v21 = (const wchar_t *)*((_DWORD *)this + 153);
    CREDialog::DrawTextW(*((CREDialog **)this + 28), v21, (struct CREElement *)v16, &v24, 0, -1);
  }
  v22 = *((_DWORD *)this + 141);
  v24.top = *((_DWORD *)this + 144) + 5;
  v24.bottom = v24.top + 100;
  v23 = *((_DWORD *)this + 143) + 100;
  v18 = *((_DWORD *)this + 150) == 0;
  v24.left = v22 - 100;
  v24.right = v23;
  if ( v18 && !*((_DWORD *)this + 157) )
  {
    CREElement::SetFont((CREElement *)v16, 4u, 0xFFFFFFFF, 1u);
    sub_100A25A0(Buffer, (size_t)L"%d", *((_DWORD *)this + 134));
    v16[2] = 1;
    CREDialog::DrawTextW(*((CREDialog **)this + 28), Buffer, (struct CREElement *)v16, &v24, 0, -1);
  }
}
