/*
 * func-name: ?Render@CPasswordEB@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c0490
 * callers: none
 * callees: 0x1006ab80, 0x1007e540, 0x1007e670, 0x100a5480, 0x100a5620, 0x100a5680, 0x100a57a0, 0x100a5e50, 0x100a6fb0, 0x100b55d0, 0x100b5850, 0x100b5e40, 0x100b6890, 0x100bdfc0
 */

void __thiscall CPasswordEB::Render(CPasswordEB *this, struct IDirect3DDevice9 *xLeft, int a3)
{
  int v4; // ebx
  int v5; // edi
  int v6; // edi
  bool v7; // zf
  int v8; // eax
  struct REFontNode *Font; // eax
  int v10; // eax
  struct REFontNode *v11; // eax
  struct tagRECT *v12; // ebx
  int v13; // ebp
  int v14; // ebp
  _DWORD *v15; // ebx
  int v16; // ebp
  struct IDirect3DDevice9 *v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  _DWORD *v22; // edx
  double v23; // st6
  _DWORD *v24; // eax
  LONG top; // edx
  double v26; // st6
  int v27; // eax
  int v28; // ebp
  int v29; // ecx
  int v30; // edi
  unsigned int v31; // eax
  _DWORD *v32; // edx
  double v33; // st6
  _DWORD *v34; // eax
  LONG v35; // edx
  double v36; // st6
  CRETimer *v37; // eax
  CRETimer *v38; // eax
  int v39; // eax
  char *v40; // eax
  LONG v41; // ecx
  LONG v42; // edx
  int v43; // [esp+20h] [ebp-28h] BYREF
  int xRight; // [esp+24h] [ebp-24h] BYREF
  struct tagRECT v45; // [esp+28h] [ebp-20h] BYREF
  struct tagRECT rc; // [esp+38h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return;
  if ( !*((_BYTE *)this + 816) )
  {
    CREEditBox::Render(this, xLeft, a3);
    return;
  }
  v4 = *((_DWORD *)this + 135);
  v5 = *((_DWORD *)this + 200);
  if ( v4 != v5 )
  {
    if ( v4 <= v5 )
    {
      do
        CREEditBox::CUniBuffer::RemoveChar((CPasswordEB *)((char *)this + 792), --v5);
      while ( v5 != v4 );
    }
    else
    {
      do
        CREEditBox::CUniBuffer::InsertChar((CPasswordEB *)((char *)this + 792), v5++, 0x2Au);
      while ( v5 != v4 );
    }
  }
  v6 = 0;
  v7 = *((_DWORD *)this + 201) == 0;
  xRight = 0;
  xLeft = 0;
  if ( v7 )
  {
    v8 = **((_DWORD **)this + 30);
    if ( v8 )
    {
      Font = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(v8 + 4));
      *((_DWORD *)this + 201) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
      CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 792));
      CPasswordEB::PlaceCaret(this, *((_DWORD *)this + 187));
    }
  }
  if ( !*((_DWORD *)this + 136) )
  {
    v10 = **((_DWORD **)this + 30);
    if ( v10 )
    {
      v11 = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(v10 + 4));
      *((_DWORD *)this + 136) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)v11 + 130) + 32))(*((_DWORD *)v11 + 130));
      CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 532));
    }
  }
  if ( *((_BYTE *)this + 789) )
  {
    v12 = (struct tagRECT *)((char *)this + 580);
    do
    {
      v13 = *(_DWORD *)(v6 + *((_DWORD *)this + 30));
      REBlendColor::Blend((REBlendColor *)(v13 + 36), 0, *(float *)&a3, 0.69999999);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v13, v12, 1.0);
      v6 += 4;
      ++v12;
    }
    while ( v6 < 36 );
  }
  v7 = *((_DWORD *)this + 200) == 0;
  v14 = *((_DWORD *)this + 190);
  v15 = (_DWORD *)((char *)this + 792);
  v43 = 0;
  if ( !v7 && (!*((_BYTE *)this + 808) || CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 792)) >= 0) )
    CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 203), v14, 0, &v43);
  v16 = *((_DWORD *)this + 187);
  v17 = 0;
  v7 = *((_DWORD *)this + 200) == 0;
  xLeft = 0;
  if ( !v7 )
  {
    if ( !*((_BYTE *)this + 808) || CREEditBox::CUniBuffer::Analyse((CPasswordEB *)((char *)this + 792)) >= 0 )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 203), v16, 0, (int *)&xLeft);
    v17 = xLeft;
  }
  v18 = *((_DWORD *)this + 189);
  if ( *((_DWORD *)this + 187) == v18 )
  {
    v19 = (int)v17;
    xRight = (int)v17;
  }
  else
  {
    CREEditBox::CUniBuffer::CPtoX((CPasswordEB *)((char *)this + 792), v18, 0, &xRight);
    v19 = xRight;
    v17 = xLeft;
  }
  if ( *((_DWORD *)this + 187) != *((_DWORD *)this + 189) )
  {
    v20 = (int)v17;
    if ( (int)v17 > v19 )
    {
      v20 = v19;
      v19 = (int)v17;
    }
    SetRect(&rc, v20, *((_DWORD *)this + 142), v19, *((_DWORD *)this + 144));
    OffsetRect(&rc, *((_DWORD *)this + 141) - v43, 0);
    IntersectRect(&rc, (const RECT *)((char *)this + 564), &rc);
    CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, *((_DWORD *)this + 193), 1.0);
  }
  v21 = *((_DWORD *)this + 191);
  a3 = BYTE1(v21);
  v22 = (_DWORD *)*((_DWORD *)this + 30);
  *(float *)&v45.left = (double)BYTE2(v21) * 0.003921568859368563;
  *(float *)&v45.top = (double)BYTE1(v21) * 0.003921568859368563;
  v23 = (double)(unsigned __int8)v21;
  a3 = HIBYTE(v21);
  v24 = (_DWORD *)*v22;
  top = v45.top;
  v24[45] = v45.left;
  v24[46] = top;
  v24 += 45;
  *(float *)&v45.right = v23 * 0.003921568859368563;
  v26 = (double)a3;
  v24[2] = v45.right;
  *(float *)&v45.bottom = 0.003921568859368563 * v26;
  v24[3] = v45.bottom;
  *(_DWORD *)(**((_DWORD **)this + 30) + 8) = 4;
  CREDialog::DrawTextW(
    *((CREDialog **)this + 28),
    (const wchar_t *)(*v15 + 2 * *((_DWORD *)this + 190)),
    **((struct CREElement ***)this + 30),
    (struct tagRECT *)((char *)this + 564),
    0,
    -1);
  v27 = *((_DWORD *)this + 187);
  v28 = *((_DWORD *)this + 189);
  if ( v28 != v27 )
  {
    v29 = *((_DWORD *)this + 189);
    if ( v28 >= v27 )
      v29 = *((_DWORD *)this + 187);
    v30 = *((_DWORD *)this + 190);
    if ( v30 <= v29 )
    {
      v30 = *((_DWORD *)this + 189);
      if ( v28 < v27 )
        goto LABEL_42;
      v30 = *((_DWORD *)this + 187);
    }
    if ( v28 > v27 )
    {
LABEL_43:
      v31 = *((_DWORD *)this + 192);
      a3 = BYTE1(v31);
      v32 = (_DWORD *)*((_DWORD *)this + 30);
      *(float *)&v45.left = (double)BYTE2(v31) * 0.003921568859368563;
      *(float *)&v45.top = (double)BYTE1(v31) * 0.003921568859368563;
      v33 = (double)(unsigned __int8)v31;
      a3 = HIBYTE(v31);
      v34 = (_DWORD *)*v32;
      v35 = v45.top;
      v34[45] = v45.left;
      v34 += 45;
      v34[1] = v35;
      *(float *)&v45.right = v33 * 0.003921568859368563;
      v36 = (double)a3;
      v34[2] = v45.right;
      *(float *)&v45.bottom = 0.003921568859368563 * v36;
      v34[3] = v45.bottom;
      CREDialog::DrawTextW(
        *((CREDialog **)this + 28),
        (const wchar_t *)(*v15 + 2 * v30),
        **((struct CREElement ***)this + 30),
        &rc,
        0,
        v28 - v30);
      goto LABEL_44;
    }
LABEL_42:
    v28 = *((_DWORD *)this + 187);
    goto LABEL_43;
  }
LABEL_44:
  v37 = REGetGlobalTimer();
  if ( CRETimer::GetAbsoluteTime(v37) - *((double *)this + 92) >= *((double *)this + 91) )
  {
    *((_BYTE *)this + 744) = *((_BYTE *)this + 744) == 0;
    v38 = REGetGlobalTimer();
    *((double *)this + 92) = CRETimer::GetAbsoluteTime(v38);
  }
  v39 = *((_DWORD *)this + 141);
  if ( *((_DWORD *)this + 143) > v39 && *((_BYTE *)this + 92) && *((_BYTE *)this + 744) && !CREEditBox::s_bHideCaret )
  {
    v40 = (char *)xLeft + v39 - v43;
    v41 = *((_DWORD *)this + 142);
    v45.left = (LONG)(v40 - 1);
    v42 = *((_DWORD *)this + 144);
    v7 = *((_BYTE *)this + 752) == 0;
    v45.top = v41;
    v45.right = (LONG)(v40 + 1);
    v45.bottom = v42;
    if ( v7 )
    {
      CREEditBox::CUniBuffer::CPtoX((CPasswordEB *)((char *)this + 532), *((_DWORD *)this + 187), (int *)1, &a3);
      v45.right = a3 + *((_DWORD *)this + 141) - v43;
    }
    CREDialog::DrawRect(*((CREDialog **)this + 28), &v45, *((_DWORD *)this + 194), 1.0);
  }
}
