/*
 * func-name: ?Render@CREEditBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bdfc0
 * callers: 0x100bf520, 0x100c0490
 * callees: 0x1006ab80, 0x1007e540, 0x1007e670, 0x100a5480, 0x100a57a0, 0x100a5e50, 0x100ac120, 0x100b55d0, 0x100b5850, 0x100b5e40, 0x100b6890
 */

void __thiscall CREEditBox::Render(CREEditBox *this, struct IDirect3DDevice9 *a2, int a3)
{
  int v4; // edi
  bool v5; // zf
  int v6; // eax
  struct REFontNode *Font; // eax
  struct tagRECT *v8; // ebx
  int v9; // ebp
  int v10; // ebp
  _DWORD *v11; // ebx
  int v12; // ebp
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  LONG top; // edx
  double v18; // st6
  _DWORD *v19; // eax
  double v20; // st6
  int v21; // eax
  int v22; // ebp
  int v23; // ecx
  int v24; // edi
  unsigned int v25; // eax
  LONG v26; // edx
  double v27; // st6
  _DWORD *v28; // eax
  double v29; // st6
  CRETimer *v30; // eax
  CRETimer *v31; // eax
  int v32; // eax
  int v33; // eax
  LONG v34; // ecx
  LONG v35; // edx
  int v36; // [esp+1Ch] [ebp-2Ch] BYREF
  int xLeft; // [esp+20h] [ebp-28h] BYREF
  int v38; // [esp+24h] [ebp-24h] BYREF
  struct tagRECT v39; // [esp+28h] [ebp-20h] BYREF
  struct tagRECT rc; // [esp+38h] [ebp-10h] BYREF

  if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return;
  v4 = 0;
  v5 = *((_DWORD *)this + 136) == 0;
  v36 = 0;
  xLeft = 0;
  if ( v5 )
  {
    v6 = **((_DWORD **)this + 30);
    if ( v6 )
    {
      Font = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(v6 + 4));
      *((_DWORD *)this + 136) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
      CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532));
      CREEditBox::PlaceCaret(this, *((_DWORD *)this + 187));
    }
  }
  if ( *((_BYTE *)this + 789) )
  {
    v8 = (struct tagRECT *)((char *)this + 580);
    do
    {
      v9 = *(_DWORD *)(v4 + *((_DWORD *)this + 30));
      REBlendColor::Blend((REBlendColor *)(v9 + 36), 0, *(float *)&a3, 0.69999999);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v9, v8, 1.0);
      v4 += 4;
      ++v8;
    }
    while ( v4 < 36 );
  }
  if ( !*((_DWORD *)this + 135) )
    *((_DWORD *)this + 190) = 0;
  v5 = *((_DWORD *)this + 135) == 0;
  v10 = *((_DWORD *)this + 190);
  v11 = (_DWORD *)((char *)this + 532);
  v38 = 0;
  if ( !v5 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532)) >= 0) )
    CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v10, 0, &v38);
  v5 = *((_DWORD *)this + 135) == 0;
  v12 = *((_DWORD *)this + 187);
  xLeft = 0;
  if ( !v5 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532)) >= 0) )
    CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v12, 0, &xLeft);
  v13 = *((_DWORD *)this + 189);
  if ( *((_DWORD *)this + 187) == v13 )
  {
    v14 = xLeft;
    v36 = xLeft;
  }
  else
  {
    v14 = 0;
    v5 = *((_DWORD *)this + 135) == 0;
    v36 = 0;
    if ( !v5 )
    {
      if ( !*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREEditBox *)((char *)this + 532)) >= 0 )
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v13, 0, &v36);
      v14 = v36;
    }
  }
  if ( *((_DWORD *)this + 187) != *((_DWORD *)this + 189) )
  {
    v15 = xLeft;
    if ( xLeft > v14 )
    {
      v15 = v14;
      v14 = xLeft;
    }
    SetRect(&rc, v15, *((_DWORD *)this + 142), v14, *((_DWORD *)this + 144));
    OffsetRect(&rc, *((_DWORD *)this + 141) - v38, 0);
    IntersectRect(&rc, (const RECT *)((char *)this + 564), &rc);
    CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, *((_DWORD *)this + 193), 1.0);
  }
  v16 = *((_DWORD *)this + 191);
  *(float *)&v39.left = (double)BYTE2(v16) * 0.003921568859368563;
  *(float *)&v39.top = (double)BYTE1(v16) * 0.003921568859368563;
  top = v39.top;
  v18 = (double)(unsigned __int8)v16;
  a3 = HIBYTE(v16);
  v19 = (_DWORD *)**((_DWORD **)this + 30);
  v19[45] = v39.left;
  v19 += 45;
  v19[1] = top;
  *(float *)&v39.right = v18 * 0.003921568859368563;
  v20 = (double)a3;
  v19[2] = v39.right;
  *(float *)&v39.bottom = 0.003921568859368563 * v20;
  v19[3] = v39.bottom;
  CREDialog::DrawTextW(
    *((CREDialog **)this + 28),
    (const wchar_t *)(*v11 + 2 * *((_DWORD *)this + 190)),
    **((struct CREElement ***)this + 30),
    (struct tagRECT *)((char *)this + 564),
    0,
    -1);
  v21 = *((_DWORD *)this + 187);
  v22 = *((_DWORD *)this + 189);
  if ( v22 != v21 )
  {
    v23 = *((_DWORD *)this + 189);
    if ( v22 >= v21 )
      v23 = *((_DWORD *)this + 187);
    v24 = *((_DWORD *)this + 190);
    if ( v24 <= v23 )
    {
      v24 = *((_DWORD *)this + 189);
      if ( v22 < v21 )
        goto LABEL_36;
      v24 = *((_DWORD *)this + 187);
    }
    if ( v22 > v21 )
    {
LABEL_37:
      v25 = *((_DWORD *)this + 192);
      *(float *)&v39.left = (double)BYTE2(v25) * 0.003921568859368563;
      *(float *)&v39.top = (double)BYTE1(v25) * 0.003921568859368563;
      v26 = v39.top;
      v27 = (double)(unsigned __int8)v25;
      a3 = HIBYTE(v25);
      v28 = (_DWORD *)**((_DWORD **)this + 30);
      v28[45] = v39.left;
      v28 += 45;
      v28[1] = v26;
      *(float *)&v39.right = v27 * 0.003921568859368563;
      v29 = (double)a3;
      v28[2] = v39.right;
      *(float *)&v39.bottom = 0.003921568859368563 * v29;
      v28[3] = v39.bottom;
      CREDialog::DrawTextW(
        *((CREDialog **)this + 28),
        (const wchar_t *)(*v11 + 2 * v24),
        **((struct CREElement ***)this + 30),
        &rc,
        0,
        v22 - v24);
      goto LABEL_38;
    }
LABEL_36:
    v22 = *((_DWORD *)this + 187);
    goto LABEL_37;
  }
LABEL_38:
  v30 = REGetGlobalTimer();
  if ( CRETimer::GetAbsoluteTime(v30) - *((double *)this + 92) >= *((double *)this + 91) )
  {
    *((_BYTE *)this + 744) = *((_BYTE *)this + 744) == 0;
    v31 = REGetGlobalTimer();
    *((double *)this + 92) = CRETimer::GetAbsoluteTime(v31);
  }
  v32 = *((_DWORD *)this + 141);
  if ( *((_DWORD *)this + 143) > v32 && *((_BYTE *)this + 92) && *((_BYTE *)this + 744) && !CREEditBox::s_bHideCaret )
  {
    v33 = xLeft + v32 - v38;
    v34 = *((_DWORD *)this + 142);
    v39.left = v33 - 1;
    v35 = *((_DWORD *)this + 144);
    v5 = *((_BYTE *)this + 752) == 0;
    v39.top = v34;
    v39.right = v33 + 1;
    v39.bottom = v35;
    if ( v5 )
    {
      CREEditBox::CUniBuffer::CPtoX((CREEditBox *)((char *)this + 532), *((_DWORD *)this + 187), (int *)1, &a3);
      v39.right = a3 + *((_DWORD *)this + 141) - v38;
    }
    CREDialog::DrawRect(*((CREDialog **)this + 28), &v39, *((_DWORD *)this + 194), 1.0);
  }
}
