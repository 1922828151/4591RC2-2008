/*
 * func-name: sub_102A2B30
 * func-address: 0x102a2b30
 * callers: 0x1001719d
 * callees: 0x102c9fe0
 */

void __thiscall sub_102A2B30(int this, struct IDirect3DDevice9 *a2, float a3)
{
  struct CREElement *Element; // edi
  struct REFontNode *Font; // eax
  struct REFontNode *v6; // ebx
  double v7; // st7
  int v8; // ebx
  double v9; // st6
  int v10; // eax
  int v11; // ebx
  double v12; // st3
  double v13; // st5
  double v14; // st6
  bool v15; // c0
  double v16; // st5
  int v17; // ebx
  const wchar_t *v18; // eax
  char *v19; // ecx
  const wchar_t *v20; // eax
  double v21; // st7
  const wchar_t *v22; // eax
  float v23; // ecx
  int v24; // ecx
  const wchar_t *v25; // eax
  double v26; // st7
  int v27; // ebx
  double v28; // st6
  int v29; // eax
  int v30; // ebx
  double v31; // st3
  int v32; // ecx
  double v33; // st5
  double v34; // st6
  bool v35; // c0
  double v36; // st5
  int v37; // ebx
  float v38; // eax
  char *v39; // ecx
  const wchar_t *v40; // eax
  double v41; // st7
  int v42; // ecx
  float v43; // ecx
  int v44; // eax
  const wchar_t *v45; // eax
  float v46; // [esp+8Ch] [ebp-A0h] BYREF
  float v47; // [esp+90h] [ebp-9Ch]
  int PicWidth; // [esp+94h] [ebp-98h] BYREF
  int v49; // [esp+98h] [ebp-94h]
  char *v50; // [esp+9Ch] [ebp-90h]
  int v51; // [esp+A0h] [ebp-8Ch]
  int v52; // [esp+A4h] [ebp-88h]
  float v53; // [esp+A8h] [ebp-84h]
  float v54; // [esp+ACh] [ebp-80h]
  float v55; // [esp+B0h] [ebp-7Ch]
  float v56; // [esp+B4h] [ebp-78h]
  float v57; // [esp+B8h] [ebp-74h]
  int v58; // [esp+BCh] [ebp-70h]
  int v59; // [esp+C0h] [ebp-6Ch]
  double v60; // [esp+C4h] [ebp-68h]
  double v61; // [esp+CCh] [ebp-60h]
  struct tagRECT rc; // [esp+D4h] [ebp-58h] BYREF
  struct tagRECT v63; // [esp+E4h] [ebp-48h] BYREF
  int v64[14]; // [esp+F4h] [ebp-38h] BYREF

  CHotZonePic::Render((CHotZonePic *)this, a2, a3);
  if ( *(_BYTE *)(this + 644) && *(float *)(this + 640) > 0.0 )
  {
    SetRect(&rc, *(_DWORD *)(this + 164), *(_DWORD *)(this + 168), *(_DWORD *)(this + 172), *(_DWORD *)(this + 168) + 1);
    CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x8C77C5D1, 1.0);
    SetRect(&rc, *(_DWORD *)(this + 164), *(_DWORD *)(this + 168), *(_DWORD *)(this + 164) + 1, *(_DWORD *)(this + 176));
    CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x8C77C5D1, 1.0);
    SetRect(&rc, *(_DWORD *)(this + 172) - 1, *(_DWORD *)(this + 168), *(_DWORD *)(this + 172), *(_DWORD *)(this + 176));
    CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x8C77C5D1, 1.0);
    SetRect(&rc, *(_DWORD *)(this + 164), *(_DWORD *)(this + 176) - 1, *(_DWORD *)(this + 172), *(_DWORD *)(this + 176));
    CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x8C77C5D1, 1.0);
    v58 = 0;
    Element = CREControl::GetElement((CREControl *)this, 0);
    if ( Element )
    {
      Font = CREDialog::GetFont(*(CREDialog **)(this + 112), *((_DWORD *)Element + 1));
      v6 = Font;
      if ( Font )
      {
        if ( !*(_DWORD *)(this + 660) )
          *(_DWORD *)(this + 660) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
        (*(void (__stdcall **)(_DWORD, int *))(**((_DWORD **)v6 + 130) + 24))(*((_DWORD *)v6 + 130), v64);
        v58 = v64[0];
      }
    }
    if ( (int)CHotZonePic::GetPicWidth((CHotZonePic *)this) > 0
      && (int)CHotZonePic::GetPicHeight((CHotZonePic *)this) > 0 )
    {
      v60 = (double)*(int *)(this + 592);
      PicWidth = CHotZonePic::GetPicWidth((CHotZonePic *)this);
      v57 = v60 / (double)PicWidth;
      v60 = (double)*(int *)(this + 600);
      PicWidth = CHotZonePic::GetPicWidth((CHotZonePic *)this);
      *(float *)&v51 = v60 / (double)PicWidth;
      v7 = v57;
      v8 = (int)(v57 / *(float *)(this + 640));
      if ( v8 < 0 )
        v8 = 0;
      v9 = *(float *)&v51;
      v10 = *(_DWORD *)(this + 164);
      PicWidth = *(_DWORD *)(this + 172) - v10;
      v11 = v8 + 1;
      v60 = *(float *)&v51 - v7;
      v47 = *(float *)&v11;
      v49 = v10;
      v12 = *(float *)(this + 640);
      v52 = v11;
      v51 = (int)((double)PicWidth * (v12 / v60));
      v47 = (double)v11 * *(float *)(this + 640);
      v13 = v9;
      v14 = v60;
      v61 = v13;
      v15 = v47 < v13;
      v16 = v47;
      if ( v15 )
      {
        v59 = v58 + (int)((double)PicWidth * (v12 / v60)) / 2;
        v50 = (char *)&unk_103B7EE4 + 28 * v11;
        while ( 1 )
        {
          v46 = (v16 - v7) / v14 * (double)(*(_DWORD *)(this + 172) - *(_DWORD *)(this + 164));
          v17 = (int)(v46 + 0.5);
          SetRect(
            &rc,
            v17 + *(_DWORD *)(this + 164),
            *(_DWORD *)(this + 168),
            v17 + *(_DWORD *)(this + 164) + 1,
            *(_DWORD *)(this + 176));
          CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x6477C5D1u, 1.0);
          if ( v17 - v49 > v59 )
          {
            v18 = (const wchar_t *)std::wstring::c_str(v50);
            CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 648), v18);
            if ( (int)CREEditBox::CUniBuffer::CPtoX(
                        (CREEditBox::CUniBuffer *)(this + 648),
                        *(_DWORD *)(this + 656),
                        1,
                        &PicWidth) >= 0 )
            {
              SetRect(
                &v63,
                v17 + *(_DWORD *)(this + 164) + v51 / -2 - PicWidth / 2,
                *(_DWORD *)(this + 168) + 3,
                v17 + *(_DWORD *)(this + 164) + v51 / -2 - PicWidth / 2 + PicWidth,
                *(_DWORD *)(this + 168) + 100);
              v53 = 1.0;
              *((float *)Element + 45) = 1.0;
              v54 = 1.0;
              v55 = 1.0;
              v56 = 1.0;
              *((float *)Element + 46) = 1.0;
              *((float *)Element + 47) = 1.0;
              *((float *)Element + 48) = 1.0;
              v19 = v50;
              *((_DWORD *)Element + 2) = 1;
              v20 = (const wchar_t *)std::wstring::c_str(v19);
              CREDialog::DrawTextW(*(CREDialog **)(this + 112), v20, Element, &v63, 0, -1);
            }
          }
          ++v52;
          v21 = v47 + *(float *)(this + 640);
          v50 += 28;
          v49 = v17;
          v47 = v21;
          if ( v47 >= v61 )
            break;
          v14 = v60;
          v16 = v47;
          v7 = v57;
        }
      }
      if ( v52 < 10 )
      {
        PicWidth = (int)&unk_103B7EE4 + 28 * v52;
        v22 = (const wchar_t *)std::wstring::c_str(PicWidth);
        CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 648), v22);
        if ( (int)CREEditBox::CUniBuffer::CPtoX(
                    (CREEditBox::CUniBuffer *)(this + 648),
                    *(_DWORD *)(this + 656),
                    1,
                    (int *)&v46) >= 0
          && *(_DWORD *)(this + 172) - v49 > v51 / 2 + LODWORD(v46) )
        {
          SetRect(
            &v63,
            v49 + v51 / 2 - SLODWORD(v46) / 2,
            *(_DWORD *)(this + 168) + 3,
            v49 + v51 / 2 - SLODWORD(v46) / 2 + LODWORD(v46),
            *(_DWORD *)(this + 168) + 100);
          v53 = 1.0;
          v54 = 1.0;
          v55 = 1.0;
          v56 = 1.0;
          *((float *)Element + 45) = 1.0;
          v23 = v56;
          *((float *)Element + 46) = 1.0;
          *((float *)Element + 47) = 1.0;
          *((float *)Element + 48) = v23;
          v24 = PicWidth;
          *((_DWORD *)Element + 2) = 0;
          v25 = (const wchar_t *)std::wstring::c_str(v24);
          CREDialog::DrawTextW(*(CREDialog **)(this + 112), v25, Element, &v63, 0, -1);
        }
      }
      v61 = (double)*(int *)(this + 596);
      v46 = COERCE_FLOAT(CHotZonePic::GetPicHeight((CHotZonePic *)this));
      v57 = v61 / (double)SLODWORD(v46);
      v61 = (double)*(int *)(this + 604);
      v46 = COERCE_FLOAT(CHotZonePic::GetPicHeight((CHotZonePic *)this));
      *(float *)&v51 = v61 / (double)SLODWORD(v46);
      v26 = v57;
      v27 = (int)(v57 / *(float *)(this + 636));
      if ( v27 < 0 )
        v27 = 0;
      v28 = *(float *)&v51;
      v29 = *(_DWORD *)(this + 168);
      LODWORD(v46) = *(_DWORD *)(this + 176) - v29;
      v30 = v27 + 1;
      v60 = *(float *)&v51 - v26;
      v47 = *(float *)&v30;
      v49 = v29;
      v31 = *(float *)(this + 636);
      v52 = v30;
      v32 = (int)((double)SLODWORD(v46) * (v31 / v60));
      v51 = v32;
      v47 = (double)v30 * *(float *)(this + 636);
      v33 = v28;
      v34 = v60;
      v61 = v33;
      v35 = v47 < v33;
      v36 = v47;
      if ( v35 )
      {
        PicWidth = v32 / 2;
        v59 = v58 + v32 / 2;
        v50 = (char *)&unk_103B7DCC + 28 * v30;
        while ( 1 )
        {
          v46 = (v36 - v26) / v34 * (double)(*(_DWORD *)(this + 176) - *(_DWORD *)(this + 168));
          v37 = (int)(v46 + 0.5);
          SetRect(
            &rc,
            *(_DWORD *)(this + 164),
            v37 + *(_DWORD *)(this + 168),
            *(_DWORD *)(this + 172),
            v37 + *(_DWORD *)(this + 168) + 1);
          CREDialog::DrawRect(*(CREDialog **)(this + 112), &rc, 0x6477C5D1u, 1.0);
          if ( v37 - v49 > v59 )
          {
            SetRect(
              &v63,
              *(_DWORD *)(this + 164) + 3,
              *(_DWORD *)(this + 168) + v37 - v58 / 2 - PicWidth,
              *(_DWORD *)(this + 164) + 100,
              *(_DWORD *)(this + 168) + v37 - v58 / 2 - PicWidth + v58);
            v53 = 1.0;
            v54 = 1.0;
            v55 = 1.0;
            v56 = 1.0;
            *((float *)Element + 45) = 1.0;
            v38 = v56;
            *((float *)Element + 46) = 1.0;
            v39 = v50;
            *((float *)Element + 47) = 1.0;
            *((_DWORD *)Element + 2) = 0;
            *((float *)Element + 48) = v38;
            v40 = (const wchar_t *)std::wstring::c_str(v39);
            CREDialog::DrawTextW(*(CREDialog **)(this + 112), v40, Element, &v63, 0, -1);
          }
          ++v52;
          v41 = v47 + *(float *)(this + 636);
          v50 += 28;
          v49 = v37;
          v47 = v41;
          if ( v47 >= v61 )
            break;
          v34 = v60;
          v36 = v47;
          v26 = v57;
        }
        v32 = v51;
      }
      v42 = v32 / 2;
      if ( *(_DWORD *)(this + 176) - v49 > v42 + v58 )
      {
        SetRect(
          &v63,
          *(_DWORD *)(this + 164) + 3,
          v49 + v42 - v58 / 2,
          *(_DWORD *)(this + 164) + 100,
          v49 + v42 - v58 / 2 + v58);
        v53 = 1.0;
        v54 = 1.0;
        v55 = 1.0;
        v56 = 1.0;
        *((float *)Element + 45) = 1.0;
        v43 = v56;
        *((float *)Element + 46) = 1.0;
        *((float *)Element + 47) = 1.0;
        v44 = v52;
        *((float *)Element + 48) = v43;
        *((_DWORD *)Element + 2) = 0;
        v45 = (const wchar_t *)std::wstring::c_str((char *)&unk_103B7DCC + 28 * v44);
        CREDialog::DrawTextW(*(CREDialog **)(this + 112), v45, Element, &v63, 0, -1);
      }
    }
  }
}
