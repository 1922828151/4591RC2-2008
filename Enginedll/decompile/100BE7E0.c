/*
 * func-name: ?RenderCandidateReadingWindow@CREIMEEditBox@@UAEXPAUIDirect3DDevice9@@M_N@Z
 * func-address: 0x100be7e0
 * callers: none
 * callees: 0x1006ab80, 0x100a5480, 0x100b5850, 0x100b66a0, 0x100b6890
 */

void __thiscall CREIMEEditBox::RenderCandidateReadingWindow(
        CREIMEEditBox *this,
        struct IDirect3DDevice9 *a2,
        float a3,
        unsigned int a4)
{
  int v5; // ebp
  bool v6; // zf
  int v7; // ebp
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // edi
  int v15; // ebp
  void (__stdcall *v16)(LPRECT, int, int, int, int); // ebx
  WCHAR *v17; // edi
  int v18; // edi
  int v19; // ecx
  LONG right; // eax
  int v21; // ecx
  char v22; // bl
  unsigned int v23; // edi
  const wchar_t *v24; // ebp
  int v25; // ebx
  int v26; // edx
  int v27; // eax
  float v28; // edx
  double v29; // st6
  float *v30; // eax
  float v31; // ecx
  float v32; // edx
  int v33; // edx
  int v34; // eax
  float v35; // edx
  double v36; // st6
  int v37; // edx
  float *v38; // eax
  float v39; // edx
  double v40; // st6
  float v41; // ecx
  double v42; // st6
  CREDialog *v43; // ecx
  int v44; // edi
  int v45; // edi
  LONG v46; // ecx
  int v47; // edx
  float *v48; // eax
  float v49; // edx
  double v50; // st6
  double v51; // st6
  struct CREElement *v52; // [esp-Ch] [ebp-7Ch]
  struct CREElement *v53; // [esp-8h] [ebp-78h]
  int v54; // [esp+14h] [ebp-5Ch] BYREF
  unsigned int v55; // [esp+18h] [ebp-58h]
  int v56; // [esp+1Ch] [ebp-54h]
  unsigned int v57; // [esp+20h] [ebp-50h]
  unsigned int v58; // [esp+24h] [ebp-4Ch]
  unsigned int v59; // [esp+28h] [ebp-48h]
  int v60; // [esp+2Ch] [ebp-44h] BYREF
  unsigned int v61; // [esp+30h] [ebp-40h] BYREF
  int v62; // [esp+34h] [ebp-3Ch] BYREF
  int v63; // [esp+38h] [ebp-38h] BYREF
  int v64; // [esp+3Ch] [ebp-34h]
  struct tagRECT rc; // [esp+40h] [ebp-30h] BYREF
  float v66; // [esp+50h] [ebp-20h]
  float v67; // [esp+54h] [ebp-1Ch]
  float v68; // [esp+58h] [ebp-18h]
  float v69; // [esp+5Ch] [ebp-14h]
  float v70; // [esp+60h] [ebp-10h]
  float v71; // [esp+64h] [ebp-Ch]
  float v72; // [esp+68h] [ebp-8h]
  float v73; // [esp+6Ch] [ebp-4h]

  v55 = (_BYTE)a4 != 0 ? 4 : 10;
  if ( v55 >= dword_11240AC0 )
    v55 = dword_11240AC0;
  v5 = *((_DWORD *)this + 187);
  v6 = *((_DWORD *)this + 135) == 0;
  v62 = 0;
  if ( !v6 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREIMEEditBox *)((char *)this + 532)) >= 0) )
    CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v5, 0, &v62);
  v6 = *((_DWORD *)this + 135) == 0;
  v7 = *((_DWORD *)this + 190);
  v63 = 0;
  if ( !v6 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREIMEEditBox *)((char *)this + 532)) >= 0) )
    CREEditBox::CUniBuffer::_ScriptStringCPtoX(*((void **)this + 138), v7, 0, &v63);
  if ( (_BYTE)a4 )
  {
    v8 = *((_DWORD *)this + 199);
    v9 = *((_DWORD *)this + 200);
    v57 = *((_DWORD *)this + 198);
    v10 = *((_DWORD *)this + 201);
    v61 = v8;
    v59 = v9;
    v58 = v10;
  }
  else
  {
    v11 = *((_DWORD *)this + 203);
    v12 = *((_DWORD *)this + 204);
    v57 = *((_DWORD *)this + 202);
    v13 = *((_DWORD *)this + 205);
    v61 = v11;
    v59 = v12;
    v58 = v13;
  }
  v54 = 0;
  if ( ((unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF) == 0x11 )
  {
    v14 = CREIMEEditBox::s_nFirstTargetConv;
    if ( !dword_1123E230
      || byte_1123E238 && CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString) < 0 )
    {
      goto LABEL_23;
    }
  }
  else
  {
    v14 = CREIMEEditBox::s_nCompCaret;
    if ( !dword_1123E230
      || byte_1123E238 && CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString) < 0 )
    {
      goto LABEL_23;
    }
  }
  CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E23C, v14, 0, &v54);
LABEL_23:
  v15 = 0;
  v56 = 0;
  if ( (!CREIMEEditBox::s_bVerticalCand || (_BYTE)a4) && (CREIMEEditBox::s_bHorizontalReading || !(_BYTE)a4) )
  {
    v16 = (void (__stdcall *)(LPRECT, int, int, int, int))SetRect;
    SetRect(&rc, 0, 0, 0, 0);
    v53 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
    if ( (_BYTE)a4 )
      CREDialog::CalcTextRect(*((CREDialog **)this + 28), &CREIMEEditBox::s_wszReadingString, v53, &rc, -1);
    else
      CREDialog::CalcTextRect(*((CREDialog **)this + 28), (const wchar_t *)dword_11240A98, v53, &rc, -1);
    v15 = rc.right - rc.left;
    v18 = rc.bottom - rc.top;
    v56 = rc.bottom - rc.top;
  }
  else
  {
    v60 = 0;
    v16 = (void (__stdcall *)(LPRECT, int, int, int, int))SetRect;
    if ( v55 )
    {
      v17 = &CREIMEEditBox::s_CandList;
      do
      {
        if ( !*v17 )
          break;
        SetRect(&rc, 0, 0, 0, 0);
        CREDialog::CalcTextRect(
          *((CREDialog **)this + 28),
          v17,
          *(struct CREElement **)(*((_DWORD *)this + 30) + 4),
          &rc,
          -1);
        if ( v15 <= rc.right - rc.left )
          v15 = rc.right - rc.left;
        if ( v56 <= rc.bottom - rc.top )
          v56 = rc.bottom - rc.top;
        v17 += 256;
        ++v60;
      }
      while ( v60 < v55 );
    }
    v18 = v55 * v56;
  }
  v16(
    &rc,
    v54 + CREIMEEditBox::s_ptCompString.x,
    *((_DWORD *)this + 144) - *((_DWORD *)this + 142) + yBottom,
    v54 + CREIMEEditBox::s_ptCompString.x + v15,
    *((_DWORD *)this + 144) - *((_DWORD *)this + 142) + yBottom + v18);
  v19 = *((_DWORD *)this + 28);
  right = rc.right;
  if ( rc.right > *(_DWORD *)(v19 + 700) )
  {
    rc.left += *(_DWORD *)(v19 + 700) - rc.right;
    right = *(_DWORD *)(v19 + 700);
    rc.right = right;
  }
  if ( rc.bottom > *(_DWORD *)(v19 + 704) )
  {
    v16(&rc, v54 + CREIMEEditBox::s_ptCompString.x, yBottom - v18, v54 + CREIMEEditBox::s_ptCompString.x + v15, yBottom);
    v21 = *((_DWORD *)this + 28);
    right = rc.right;
    if ( rc.right > *(_DWORD *)(v21 + 700) )
    {
      rc.left += *(_DWORD *)(v21 + 700) - rc.right;
      right = *(_DWORD *)(v21 + 700);
      rc.right = right;
    }
    if ( rc.bottom > *(_DWORD *)(v21 + 704) )
    {
      v64 = CREIMEEditBox::s_nCompCaret;
      v60 = 0;
      if ( dword_1123E230
        && (!byte_1123E238
         || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString) >= 0) )
      {
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E23C, v64, 1, &v60);
      }
      v16(&rc, CREIMEEditBox::s_ptCompString.x + v60, 0, CREIMEEditBox::s_ptCompString.x + v60 + v15, v18);
      right = rc.right;
      if ( rc.right > *(_DWORD *)(*((_DWORD *)this + 28) + 700) )
      {
        v16(&rc, v54 + CREIMEEditBox::s_ptCompString.x - v15, 0, CREIMEEditBox::s_ptCompString.x + v54, v18);
        right = rc.right;
        if ( rc.right < 0 )
        {
          right = v15;
          rc.left = 0;
          rc.right = v15;
        }
      }
    }
  }
  v22 = a4;
  if ( !(_BYTE)a4 )
  {
    ::rc.right = right;
    ::rc.left = rc.left;
    ::rc.top = rc.top;
    ::rc.bottom = rc.bottom;
  }
  CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, v61, 1.0);
  if ( (!CREIMEEditBox::s_bVerticalCand || v22) && (CREIMEEditBox::s_bHorizontalReading || !v22) )
  {
    a4 = BYTE1(v57);
    v37 = *((_DWORD *)this + 30);
    v70 = (double)BYTE2(v57) * 0.003921568859368563;
    v71 = (double)BYTE1(v57) * 0.003921568859368563;
    a4 = HIBYTE(v57);
    v38 = *(float **)(v37 + 4);
    v39 = v71;
    v40 = (double)(unsigned __int8)v57 * 0.003921568859368563;
    v38 += 45;
    *v38 = v70;
    v72 = v40;
    v41 = v72;
    v42 = (double)(int)a4;
    v38[1] = v39;
    v38[2] = v41;
    v73 = 0.003921568859368563 * v42;
    v38[3] = v73;
    v43 = (CREDialog *)*((_DWORD *)this + 28);
    v52 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
    if ( v22 )
    {
      CREDialog::DrawTextW(v43, &CREIMEEditBox::s_wszReadingString, v52, &rc, 0, -1);
    }
    else
    {
      CREDialog::DrawTextW(v43, (const wchar_t *)dword_11240A98, v52, &rc, 0, -1);
      v44 = dword_11240AB0;
      v61 = 0;
      if ( dword_11240AA0
        && (!byte_11240AA8 || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&dword_11240A98) >= 0) )
      {
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_11240AAC, v44, 0, (int *)&v61);
      }
      v45 = dword_11240AB4 + dword_11240AB0;
      a4 = 0;
      if ( dword_11240AA0
        && (!byte_11240AA8 || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&dword_11240A98) >= 0) )
      {
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_11240AAC, v45, 0, (int *)&a4);
      }
      v46 = rc.left + a4;
      rc.left += v61;
      rc.right = v46;
      CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, v58, 1.0);
      v64 = BYTE1(v59);
      v47 = *((_DWORD *)this + 30);
      v70 = (double)BYTE2(v59) * 0.003921568859368563;
      v71 = (double)BYTE1(v59) * 0.003921568859368563;
      v64 = HIBYTE(v59);
      v48 = *(float **)(v47 + 4);
      v49 = v71;
      v50 = (double)(unsigned __int8)v59 * 0.003921568859368563;
      v48[45] = v70;
      v48 += 45;
      v48[1] = v49;
      v72 = v50;
      v51 = (double)v64;
      v48[2] = v72;
      v73 = 0.003921568859368563 * v51;
      v48[3] = v73;
      CREDialog::DrawTextW(
        *((CREDialog **)this + 28),
        (const wchar_t *)(dword_11240A98 + 2 * dword_11240AB0),
        *(struct CREElement **)(*((_DWORD *)this + 30) + 4),
        &rc,
        0,
        dword_11240AB4);
    }
  }
  else
  {
    v23 = 0;
    if ( v55 )
    {
      v24 = &CREIMEEditBox::s_CandList;
      do
      {
        v25 = v56;
        rc.bottom = v56 + rc.top;
        if ( dword_11240ABC == v23 )
        {
          CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, v58, 1.0);
          a4 = BYTE1(v59);
          v26 = *((_DWORD *)this + 30);
          v66 = (double)BYTE2(v59) * 0.003921568859368563;
          v67 = (double)BYTE1(v59) * 0.003921568859368563;
          a4 = HIBYTE(v59);
          v27 = *(_DWORD *)(v26 + 4);
          v28 = v67;
          v29 = (double)(unsigned __int8)v59 * 0.003921568859368563;
          v30 = (float *)(v27 + 180);
          *v30 = v66;
          v30[1] = v28;
          v68 = v29;
          v31 = v68;
          v69 = 0.003921568859368563 * (double)(int)a4;
          v32 = v69;
        }
        else
        {
          a4 = BYTE1(v57);
          v33 = *((_DWORD *)this + 30);
          v70 = (double)BYTE2(v57) * 0.003921568859368563;
          v71 = (double)BYTE1(v57) * 0.003921568859368563;
          a4 = HIBYTE(v57);
          v34 = *(_DWORD *)(v33 + 4);
          v35 = v71;
          v36 = (double)(unsigned __int8)v57 * 0.003921568859368563;
          v30 = (float *)(v34 + 180);
          *v30 = v70;
          v30[1] = v35;
          v72 = v36;
          v31 = v72;
          v73 = 0.003921568859368563 * (double)(int)a4;
          v32 = v73;
        }
        v30[2] = v31;
        v30[3] = v32;
        CREDialog::DrawTextW(
          *((CREDialog **)this + 28),
          v24,
          *(struct CREElement **)(*((_DWORD *)this + 30) + 4),
          &rc,
          0,
          -1);
        rc.top += v25;
        ++v23;
        v24 += 256;
      }
      while ( v23 < v55 );
    }
  }
}
