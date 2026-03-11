/*
 * func-name: ?Render@CMultiLineEB@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c0c50
 * callers: 0x100c3250
 * callees: 0x1006ab80, 0x1007e540, 0x1007e670, 0x100a5480, 0x100a5e50, 0x100ac120, 0x100b5280, 0x100b55d0, 0x100b5850, 0x100b5e40, 0x100b6890, 0x101a251c
 */

void __thiscall CMultiLineEB::Render(CMultiLineEB *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  int v5; // edi
  int v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // esi
  bool v10; // zf
  int v11; // eax
  struct REFontNode *Font; // eax
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  double v20; // st7
  float v21; // edx
  double v22; // st6
  float *v23; // eax
  int v24; // eax
  unsigned int v25; // edi
  int v26; // ecx
  int v27; // esi
  int v28; // edi
  const wchar_t **v29; // esi
  int v30; // edi
  unsigned int v31; // eax
  int v32; // esi
  int v33; // ecx
  _DWORD *v34; // edi
  struct tagRECT *v35; // eax
  int v36; // eax
  const wchar_t **v37; // esi
  int v38; // eax
  int v39; // eax
  int v40; // esi
  int v41; // ecx
  int v42; // edi
  unsigned int v43; // eax
  float **v44; // edx
  double v45; // st6
  float *v46; // eax
  float v47; // edx
  CRETimer *v48; // eax
  CRETimer *v49; // eax
  int v50; // [esp+20h] [ebp-974h]
  int v51; // [esp+20h] [ebp-974h]
  int v52; // [esp+20h] [ebp-974h]
  int v53; // [esp+24h] [ebp-970h]
  unsigned int i; // [esp+24h] [ebp-970h]
  struct tagRECT *v55; // [esp+28h] [ebp-96Ch] BYREF
  int v56; // [esp+2Ch] [ebp-968h] BYREF
  float v57; // [esp+30h] [ebp-964h]
  float v58; // [esp+34h] [ebp-960h]
  float v59; // [esp+38h] [ebp-95Ch]
  float v60; // [esp+3Ch] [ebp-958h]
  int v61; // [esp+40h] [ebp-954h] BYREF
  int xLeft; // [esp+44h] [ebp-950h] BYREF
  int v63; // [esp+48h] [ebp-94Ch] BYREF
  struct tagRECT rc; // [esp+4Ch] [ebp-948h] BYREF
  int v65; // [esp+5Ch] [ebp-938h] BYREF
  struct tagRECT v66; // [esp+60h] [ebp-934h] BYREF
  struct tagRECT rcDst; // [esp+70h] [ebp-924h] BYREF
  struct tagRECT v68; // [esp+80h] [ebp-914h] BYREF
  int v69[15]; // [esp+90h] [ebp-904h] BYREF
  _DWORD v70[50]; // [esp+CCh] [ebp-8C8h] BYREF
  wchar_t Destination[1024]; // [esp+194h] [ebp-800h] BYREF

  v4 = **((_DWORD **)this + 30);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    v6 = *((_DWORD *)this + 28);
    if ( REGetGlobalDialogResourceManager() )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(v6 + 752) + 4 * v5);
      v8 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 5) + 4 * v7);
      if ( v8 )
      {
        (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)(v8 + 520) + 28))(*(_DWORD *)(v8 + 520), v69);
        *((_DWORD *)this + 203) = v69[0];
      }
    }
  }
  SetRect(
    &rc,
    *((_DWORD *)this + 141),
    *((_DWORD *)this + 142),
    *((_DWORD *)this + 143),
    *((_DWORD *)this + 142) + *((_DWORD *)this + 203));
  if ( *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v9 = 0;
    v10 = *((_DWORD *)this + 136) == 0;
    v61 = 0;
    xLeft = 0;
    if ( v10 )
    {
      v11 = **((_DWORD **)this + 30);
      if ( v11 )
      {
        Font = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(v11 + 4));
        *((_DWORD *)this + 136) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
        CREEditBox::CUniBuffer::Analyse((CMultiLineEB *)((char *)this + 532));
        CREEditBox::PlaceCaret(this, *((_DWORD *)this + 187));
      }
    }
    v55 = (struct tagRECT *)((char *)this + 580);
    do
    {
      v13 = *(_DWORD *)(v9 + *((_DWORD *)this + 30));
      REBlendColor::Blend((REBlendColor *)(v13 + 36), 0, a3, 0.69999999);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v13, v55++, 1.0);
      v9 += 4;
    }
    while ( v9 < 36 );
    v10 = *((_DWORD *)this + 135) == 0;
    v14 = *((_DWORD *)this + 190);
    v65 = 0;
    if ( !v10 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CMultiLineEB *)((char *)this + 532)) >= 0) )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v14, 0, &v65);
    v10 = *((_DWORD *)this + 135) == 0;
    v15 = *((_DWORD *)this + 187);
    xLeft = 0;
    if ( !v10 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CMultiLineEB *)((char *)this + 532)) >= 0) )
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v15, 0, &xLeft);
    v16 = *((_DWORD *)this + 189);
    if ( *((_DWORD *)this + 187) == v16 )
    {
      v17 = xLeft;
      v61 = xLeft;
    }
    else
    {
      v17 = 0;
      v10 = *((_DWORD *)this + 135) == 0;
      v61 = 0;
      if ( !v10 )
      {
        if ( !*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CMultiLineEB *)((char *)this + 532)) >= 0 )
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v16, 0, &v61);
        v17 = v61;
      }
    }
    if ( *((_DWORD *)this + 187) != *((_DWORD *)this + 189) )
    {
      v18 = xLeft;
      if ( xLeft > v17 )
      {
        v18 = v17;
        v17 = xLeft;
      }
      SetRect(&rcDst, v18, *((_DWORD *)this + 142), v17, *((_DWORD *)this + 144));
      OffsetRect(&rcDst, *((_DWORD *)this + 141) - v65, 0);
      IntersectRect(&rcDst, (const RECT *)((char *)this + 564), &rcDst);
      CREDialog::DrawRect(*((CREDialog **)this + 28), &rcDst, *((_DWORD *)this + 193), 1.0);
    }
    v19 = *((_DWORD *)this + 191);
    v20 = 0.003921568859368563;
    v57 = (double)BYTE2(v19) * 0.003921568859368563;
    v58 = (double)BYTE1(v19) * 0.003921568859368563;
    v21 = v58;
    v22 = (double)(unsigned __int8)v19;
    v53 = HIBYTE(v19);
    v23 = (float *)**((_DWORD **)this + 30);
    v23[45] = v57;
    v23 += 45;
    v23[1] = v21;
    v59 = v22 * 0.003921568859368563;
    v23[2] = v59;
    v60 = (double)v53 * 0.003921568859368563;
    v23[3] = v60;
    memset(&v66, 255, sizeof(v66));
    v24 = *((_DWORD *)this + 224);
    if ( !v24 || !((*((_DWORD *)this + 225) - v24) >> 2) )
    {
      SetRect(
        &v66,
        *((_DWORD *)this + 141) - 1,
        *((_DWORD *)this + 142),
        *((_DWORD *)this + 141) + 1,
        *((_DWORD *)this + 142) + *((_DWORD *)this + 203));
      v20 = 0.003921568859368563;
    }
    v25 = *((_DWORD *)this + 207);
    for ( i = v25; (signed int)v25 <= *((_DWORD *)this + 208); i = ++v25 )
    {
      v26 = *((_DWORD *)this + 224);
      if ( !v26 || v25 >= (*((_DWORD *)this + 225) - v26) >> 2 )
        break;
      v27 = *(_DWORD *)(*((_DWORD *)this + 224) + 4 * v25);
      v10 = *(_DWORD *)(v27 + 4) == -1;
      v56 = v27;
      if ( v10 )
      {
        CREDialog::DrawTextW(
          *((CREDialog **)this + 28),
          **(const wchar_t ***)v27,
          **((struct CREElement ***)this + 30),
          &rc,
          0,
          -1);
      }
      else
      {
        SetRect(&v68, rc.left, rc.top, rc.right, rc.bottom);
        memset(Destination, 0, sizeof(Destination));
        wcsncpy(Destination, **(const wchar_t ***)v27, *(_DWORD *)(v27 + 4));
        CREDialog::DrawTextW(*((CREDialog **)this + 28), Destination, **((struct CREElement ***)this + 30), &v68, 0, -1);
        v28 = *(_DWORD *)(v27 + 4);
        v29 = *(const wchar_t ***)v27;
        v30 = v28 - 1;
        v63 = 0;
        if ( v29[2] && (!*((_BYTE *)v29 + 16) || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v29) >= 0) )
          CREEditBox::CUniBuffer::_ScriptStringCPtoX((void *)v29[5], v30, 1, &v63);
        OffsetRect(&v68, v63, 0);
        v31 = *((_DWORD *)this + 192);
        qmemcpy(v70, **((const void ***)this + 30), 0xC4u);
        v57 = (double)BYTE2(v31) * 0.003921568859368563;
        *(float *)&v70[45] = v57;
        v58 = (double)BYTE1(v31) * 0.003921568859368563;
        *(float *)&v70[46] = v58;
        v59 = (double)(unsigned __int8)v31 * 0.003921568859368563;
        *(float *)&v70[47] = v59;
        v60 = 0.003921568859368563 * (double)HIBYTE(v31);
        *(float *)&v70[48] = v60;
        memset(Destination, 0, 0x400u);
        v32 = v56;
        wcsncpy(
          Destination,
          (const wchar_t *)(**(_DWORD **)v56 + 2 * *(_DWORD *)(v56 + 4)),
          *(_DWORD *)(v56 + 8) - *(_DWORD *)(v56 + 4) + 1);
        CREDialog::DrawTextW(*((CREDialog **)this + 28), Destination, (struct CREElement *)v70, &v68, 0, -1);
        v33 = *(_DWORD *)(v32 + 8);
        v34 = *(_DWORD **)v32;
        v35 = 0;
        v55 = 0;
        v50 = v33;
        if ( v34[2] )
        {
          if ( !*((_BYTE *)v34 + 16) || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v34) >= 0 )
            CREEditBox::CUniBuffer::_ScriptStringCPtoX((void *)v34[5], v50, 1, (int *)&v55);
          v35 = v55;
        }
        OffsetRect(&v68, (int)v35 - v63, 0);
        CREDialog::DrawTextW(
          *((CREDialog **)this + 28),
          (const wchar_t *)(**(_DWORD **)v32 + 2 * *(_DWORD *)(v32 + 8) + 2),
          **((struct CREElement ***)this + 30),
          &v68,
          0,
          -1);
        v27 = v56;
        v25 = i;
      }
      if ( *((_DWORD *)this + 204) == v25 )
      {
        v36 = *((_DWORD *)this + 187);
        v56 = 0;
        if ( v36 )
        {
          v37 = *(const wchar_t ***)v27;
          v51 = v36 - 1;
          v38 = 0;
          v56 = 0;
          if ( v37[2] )
          {
            if ( *((_BYTE *)v37 + 16) && CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v37) < 0
              || CREEditBox::CUniBuffer::_ScriptStringCPtoX((void *)v37[5], v51, 1, &v56) < 0 )
            {
              goto LABEL_58;
            }
            v38 = v56;
          }
          SetRect(&v66, v38 + rc.left - 1, rc.top, v38 + rc.left + 1, rc.bottom);
        }
        else
        {
          SetRect(&v66, rc.left - 1, rc.top, rc.left + 1, rc.bottom);
        }
      }
LABEL_58:
      OffsetRect(&rc, 0, *((_DWORD *)this + 203));
      v20 = 0.003921568859368563;
    }
    v39 = *((_DWORD *)this + 187);
    v40 = *((_DWORD *)this + 189);
    if ( v40 == v39 )
      goto LABEL_68;
    v41 = *((_DWORD *)this + 189);
    if ( v40 >= v39 )
      v41 = *((_DWORD *)this + 187);
    v42 = *((_DWORD *)this + 190);
    if ( v42 <= v41 )
    {
      v42 = *((_DWORD *)this + 189);
      if ( v40 < v39 )
        goto LABEL_66;
      v42 = *((_DWORD *)this + 187);
    }
    if ( v40 > v39 )
    {
LABEL_67:
      v43 = *((_DWORD *)this + 192);
      v44 = (float **)*((_DWORD *)this + 30);
      v57 = (double)BYTE2(v43) * v20;
      v58 = (double)BYTE1(v43) * v20;
      v45 = (double)(unsigned __int8)v43;
      v52 = HIBYTE(v43);
      v46 = *v44;
      v47 = v58;
      v46[45] = v57;
      v46 += 45;
      v46[1] = v47;
      v59 = v45 * v20;
      v46[2] = v59;
      v60 = v20 * (double)v52;
      v46[3] = v60;
      CREDialog::DrawTextW(
        *((CREDialog **)this + 28),
        (const wchar_t *)(*((_DWORD *)this + 133) + 2 * v42),
        **((struct CREElement ***)this + 30),
        &rcDst,
        0,
        v40 - v42);
LABEL_68:
      v48 = REGetGlobalTimer();
      if ( CRETimer::GetAbsoluteTime(v48) - *((double *)this + 92) >= *((double *)this + 91) )
      {
        *((_BYTE *)this + 744) = *((_BYTE *)this + 744) == 0;
        v49 = REGetGlobalTimer();
        *((double *)this + 92) = CRETimer::GetAbsoluteTime(v49);
      }
      if ( *((_DWORD *)this + 143) > *((_DWORD *)this + 141)
        && *((_BYTE *)this + 92)
        && *((_BYTE *)this + 744)
        && !CREEditBox::s_bHideCaret )
      {
        CREDialog::DrawRect(*((CREDialog **)this + 28), &v66, *((_DWORD *)this + 194), 1.0);
      }
      return;
    }
LABEL_66:
    v40 = *((_DWORD *)this + 187);
    goto LABEL_67;
  }
}
