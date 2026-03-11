/*
 * func-name: ?RenderCandidateReadingWindow@CMLIMEEditBox@@UAEXPAUIDirect3DDevice9@@M_N@Z
 * func-address: 0x100c2500
 * callers: none
 * callees: 0x10019470, 0x1006ab80, 0x100a5480, 0x100a57a0, 0x100b5850, 0x100b66a0, 0x100b6890
 */

void __thiscall CMLIMEEditBox::RenderCandidateReadingWindow(
        CMLIMEEditBox *this,
        struct IDirect3DDevice9 *a2,
        float a3,
        unsigned int a4)
{
  char v4; // bl
  _DWORD *v6; // ecx
  int v7; // ebp
  int v8; // eax
  int v9; // edx
  CREEditBox::CUniBuffer ***v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  int v17; // edi
  void (__stdcall *v18)(LPRECT, int, int, int, int); // ebx
  WCHAR *v19; // edi
  int v20; // edi
  CREDialog *v21; // ecx
  int v22; // ecx
  LONG right; // eax
  int v24; // edx
  int v25; // ecx
  char v26; // bl
  unsigned int v27; // edi
  const wchar_t *v28; // ebp
  int v29; // ebx
  int v30; // edx
  int v31; // eax
  float v32; // edx
  double v33; // st6
  float *v34; // eax
  float v35; // ecx
  float v36; // edx
  int v37; // edx
  int v38; // eax
  float v39; // edx
  double v40; // st6
  int v41; // edx
  float *v42; // eax
  float v43; // edx
  double v44; // st6
  float v45; // ecx
  double v46; // st6
  struct CREElement *v47; // edx
  CREDialog *v48; // ecx
  int v49; // edi
  int v50; // edi
  LONG v51; // ecx
  int v52; // edx
  float *v53; // eax
  float v54; // edx
  double v55; // st6
  double v56; // st6
  struct CREElement *v57; // [esp-8h] [ebp-74h]
  int v58; // [esp+14h] [ebp-58h] BYREF
  int v59; // [esp+18h] [ebp-54h]
  unsigned int v60; // [esp+1Ch] [ebp-50h]
  unsigned int v61; // [esp+20h] [ebp-4Ch]
  unsigned int v62; // [esp+24h] [ebp-48h]
  unsigned int v63; // [esp+28h] [ebp-44h]
  int v64; // [esp+2Ch] [ebp-40h] BYREF
  unsigned int v65; // [esp+30h] [ebp-3Ch] BYREF
  int v66; // [esp+34h] [ebp-38h] BYREF
  int v67; // [esp+38h] [ebp-34h]
  struct tagRECT rc; // [esp+3Ch] [ebp-30h] BYREF
  float v69; // [esp+4Ch] [ebp-20h]
  float v70; // [esp+50h] [ebp-1Ch]
  float v71; // [esp+54h] [ebp-18h]
  float v72; // [esp+58h] [ebp-14h]
  float v73; // [esp+5Ch] [ebp-10h]
  float v74; // [esp+60h] [ebp-Ch]
  float v75; // [esp+64h] [ebp-8h]
  float v76; // [esp+68h] [ebp-4h]

  v4 = a4;
  v6 = (_DWORD *)((char *)this + 892);
  v7 = 0;
  v60 = (_BYTE)a4 != 0 ? 4 : 10;
  v8 = v6[1];
  v66 = 0;
  v58 = 0;
  if ( v8 )
  {
    if ( (v6[2] - v8) >> 2 )
    {
      v9 = *((_DWORD *)this + 204);
      if ( v9 < (unsigned int)((v6[2] - v8) >> 2) && v9 >= 0 )
      {
        v10 = (CREEditBox::CUniBuffer ***)std::vector<Model *>::operator[](v6, *((_DWORD *)this + 204));
        CREEditBox::CUniBuffer::CPtoX(**v10, *((_DWORD *)this + 187), 0, &v66);
      }
    }
  }
  if ( v4 )
  {
    v11 = *((_DWORD *)this + 229);
    v12 = *((_DWORD *)this + 230);
    v61 = *((_DWORD *)this + 228);
    v13 = *((_DWORD *)this + 231);
    v65 = v11;
    v63 = v12;
    v62 = v13;
  }
  else
  {
    v14 = *((_DWORD *)this + 233);
    v15 = *((_DWORD *)this + 234);
    v61 = *((_DWORD *)this + 232);
    v16 = *((_DWORD *)this + 235);
    v65 = v14;
    v63 = v15;
    v62 = v16;
  }
  v58 = 0;
  if ( ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) == 0x11 )
  {
    v17 = CMLIMEEditBox::s_nFirstTargetConv;
    if ( !dword_1123E214
      || byte_1123E21C && CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString) < 0 )
    {
      goto LABEL_18;
    }
  }
  else
  {
    v17 = CMLIMEEditBox::s_nCompCaret;
    if ( !dword_1123E214
      || byte_1123E21C && CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString) < 0 )
    {
      goto LABEL_18;
    }
  }
  CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E220, v17, 0, &v58);
LABEL_18:
  v59 = 0;
  if ( (!CMLIMEEditBox::s_bVerticalCand || v4) && (CMLIMEEditBox::s_bHorizontalReading || !v4) )
  {
    v18 = (void (__stdcall *)(LPRECT, int, int, int, int))SetRect;
    SetRect(&rc, 0, 0, 0, 0);
    v21 = (CREDialog *)*((_DWORD *)this + 28);
    v57 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
    if ( (_BYTE)a4 )
      CREDialog::CalcTextRect(v21, CMLIMEEditBox::s_wszReadingString, v57, &rc, -1);
    else
      CREDialog::CalcTextRect(v21, (const wchar_t *)dword_1123F650, v57, &rc, -1);
    v7 = rc.right - rc.left;
    v20 = rc.bottom - rc.top;
    v59 = rc.bottom - rc.top;
  }
  else
  {
    v18 = (void (__stdcall *)(LPRECT, int, int, int, int))SetRect;
    v64 = 0;
    if ( v60 )
    {
      v19 = &CMLIMEEditBox::s_CandList;
      do
      {
        if ( !*v19 )
          break;
        SetRect(&rc, 0, 0, 0, 0);
        CREDialog::CalcTextRect(
          *((CREDialog **)this + 28),
          v19,
          *(struct CREElement **)(*((_DWORD *)this + 30) + 4),
          &rc,
          -1);
        if ( v7 <= rc.right - rc.left )
          v7 = rc.right - rc.left;
        if ( v59 <= rc.bottom - rc.top )
          v59 = rc.bottom - rc.top;
        v19 += 256;
        ++v64;
      }
      while ( v64 < v60 );
    }
    v20 = v60 * v59;
  }
  v18(
    &rc,
    v58 + CMLIMEEditBox::s_ptCompString.x,
    *((_DWORD *)this + 144) - *((_DWORD *)this + 142) + dword_1123DB94,
    v58 + CMLIMEEditBox::s_ptCompString.x + v7,
    *((_DWORD *)this + 144) - *((_DWORD *)this + 142) + dword_1123DB94 + v20);
  v22 = *((_DWORD *)this + 28);
  right = rc.right;
  if ( rc.right > *(_DWORD *)(v22 + 700) )
  {
    rc.left += *(_DWORD *)(v22 + 700) - rc.right;
    right = *(_DWORD *)(v22 + 700);
    rc.right = right;
  }
  if ( rc.bottom > *(_DWORD *)(v22 + 704) )
  {
    v18(
      &rc,
      v58 + CMLIMEEditBox::s_ptCompString.x,
      dword_1123DB94 - v20,
      v58 + CMLIMEEditBox::s_ptCompString.x + v7,
      dword_1123DB94);
    v24 = *((_DWORD *)this + 28);
    right = rc.right;
    if ( rc.right > *(_DWORD *)(v24 + 700) )
    {
      v25 = *((_DWORD *)this + 28);
      rc.left += *(_DWORD *)(v24 + 700) - rc.right;
      right = *(_DWORD *)(v25 + 700);
      rc.right = right;
    }
    if ( rc.top < 0 )
    {
      v67 = CMLIMEEditBox::s_nCompCaret;
      v64 = 0;
      if ( dword_1123E214
        && (!byte_1123E21C
         || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString) >= 0) )
      {
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E220, v67, 1, &v64);
      }
      v18(&rc, CMLIMEEditBox::s_ptCompString.x + v64, 0, CMLIMEEditBox::s_ptCompString.x + v64 + v7, v20);
      right = rc.right;
      if ( rc.right > *(_DWORD *)(*((_DWORD *)this + 28) + 700) )
      {
        v18(&rc, v58 + CMLIMEEditBox::s_ptCompString.x - v7, 0, CMLIMEEditBox::s_ptCompString.x + v58, v20);
        right = rc.right;
        if ( rc.right < 0 )
        {
          right = v7;
          rc.left = 0;
          rc.right = v7;
        }
      }
    }
  }
  v26 = a4;
  if ( !(_BYTE)a4 )
  {
    stru_1123F684.right = right;
    stru_1123F684.left = rc.left;
    stru_1123F684.top = rc.top;
    stru_1123F684.bottom = rc.bottom;
  }
  CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, v65, 1.0);
  if ( (!CMLIMEEditBox::s_bVerticalCand || v26) && (CMLIMEEditBox::s_bHorizontalReading || !v26) )
  {
    a4 = BYTE1(v61);
    v41 = *((_DWORD *)this + 30);
    v73 = (double)BYTE2(v61) * 0.003921568859368563;
    v74 = (double)BYTE1(v61) * 0.003921568859368563;
    a4 = HIBYTE(v61);
    v42 = *(float **)(v41 + 4);
    v43 = v74;
    v44 = (double)(unsigned __int8)v61 * 0.003921568859368563;
    v42 += 45;
    *v42 = v73;
    v75 = v44;
    v45 = v75;
    v46 = (double)(int)a4;
    v42[1] = v43;
    v42[2] = v45;
    v76 = 0.003921568859368563 * v46;
    v42[3] = v76;
    v47 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
    v48 = (CREDialog *)*((_DWORD *)this + 28);
    if ( v26 )
    {
      CREDialog::DrawTextW(v48, CMLIMEEditBox::s_wszReadingString, v47, &rc, 0, -1);
    }
    else
    {
      CREDialog::DrawTextW(v48, (const wchar_t *)dword_1123F650, v47, &rc, 0, -1);
      v49 = dword_1123F668;
      v65 = 0;
      if ( dword_1123F658
        && (!byte_1123F660 || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&dword_1123F650) >= 0) )
      {
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123F664, v49, 0, (int *)&v65);
      }
      v50 = dword_1123F66C + dword_1123F668;
      a4 = 0;
      if ( dword_1123F658
        && (!byte_1123F660 || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&dword_1123F650) >= 0) )
      {
        CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123F664, v50, 0, (int *)&a4);
      }
      v51 = rc.left + a4;
      rc.left += v65;
      rc.right = v51;
      CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, v62, 1.0);
      v67 = BYTE1(v63);
      v52 = *((_DWORD *)this + 30);
      v73 = (double)BYTE2(v63) * 0.003921568859368563;
      v74 = (double)BYTE1(v63) * 0.003921568859368563;
      v67 = HIBYTE(v63);
      v53 = *(float **)(v52 + 4);
      v54 = v74;
      v55 = (double)(unsigned __int8)v63 * 0.003921568859368563;
      v53[45] = v73;
      v53 += 45;
      v53[1] = v54;
      v75 = v55;
      v56 = (double)v67;
      v53[2] = v75;
      v76 = 0.003921568859368563 * v56;
      v53[3] = v76;
      CREDialog::DrawTextW(
        *((CREDialog **)this + 28),
        (const wchar_t *)(dword_1123F650 + 2 * dword_1123F668),
        *(struct CREElement **)(*((_DWORD *)this + 30) + 4),
        &rc,
        0,
        dword_1123F66C);
    }
  }
  else
  {
    v27 = 0;
    if ( v60 )
    {
      v28 = &CMLIMEEditBox::s_CandList;
      do
      {
        v29 = v59;
        rc.bottom = v59 + rc.top;
        if ( dword_1123F674 == v27 )
        {
          CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, v62, 1.0);
          a4 = BYTE1(v63);
          v30 = *((_DWORD *)this + 30);
          v69 = (double)BYTE2(v63) * 0.003921568859368563;
          v70 = (double)BYTE1(v63) * 0.003921568859368563;
          a4 = HIBYTE(v63);
          v31 = *(_DWORD *)(v30 + 4);
          v32 = v70;
          v33 = (double)(unsigned __int8)v63 * 0.003921568859368563;
          v34 = (float *)(v31 + 180);
          *v34 = v69;
          v34[1] = v32;
          v71 = v33;
          v35 = v71;
          v72 = 0.003921568859368563 * (double)(int)a4;
          v36 = v72;
        }
        else
        {
          a4 = BYTE1(v61);
          v37 = *((_DWORD *)this + 30);
          v73 = (double)BYTE2(v61) * 0.003921568859368563;
          v74 = (double)BYTE1(v61) * 0.003921568859368563;
          a4 = HIBYTE(v61);
          v38 = *(_DWORD *)(v37 + 4);
          v39 = v74;
          v40 = (double)(unsigned __int8)v61 * 0.003921568859368563;
          v34 = (float *)(v38 + 180);
          *v34 = v73;
          v34[1] = v39;
          v75 = v40;
          v35 = v75;
          v76 = 0.003921568859368563 * (double)(int)a4;
          v36 = v76;
        }
        v34[2] = v35;
        v34[3] = v36;
        CREDialog::DrawTextW(
          *((CREDialog **)this + 28),
          v28,
          *(struct CREElement **)(*((_DWORD *)this + 30) + 4),
          &rc,
          0,
          -1);
        rc.top += v29;
        ++v27;
        v28 += 256;
      }
      while ( v27 < v60 );
    }
  }
}
