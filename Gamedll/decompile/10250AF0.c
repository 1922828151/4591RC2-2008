/*
 * func-name: sub_10250AF0
 * func-address: 0x10250af0
 * callers: 0x1001049c
 * callees: 0x1000300d, 0x1000f321, 0x1000f759, 0x102c9d62, 0x102c9fe0
 */

void __thiscall sub_10250AF0(int this, int a2, float a3)
{
  struct CREElement *Element; // ebp
  struct REFontNode *Font; // eax
  struct REFontNode *v6; // esi
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int v11; // esi
  const wchar_t *v12; // eax
  double v13; // st6
  bool v14; // zf
  int *v15; // eax
  double v16; // st5
  double v17; // rt2
  double v18; // st5
  double v19; // st6
  double v20; // rtt
  double v21; // st4
  double v22; // st4
  unsigned int v23; // eax
  const wchar_t *v24; // eax
  float **v25; // eax
  int v26; // esi
  float *v27; // edi
  float v28; // edx
  unsigned int v29; // ebx
  bool v30; // cc
  int v31; // [esp+2Ch] [ebp-BCh]
  unsigned int v32; // [esp+30h] [ebp-B8h]
  unsigned int v33; // [esp+30h] [ebp-B8h]
  float v34; // [esp+30h] [ebp-B8h]
  int v35; // [esp+34h] [ebp-B4h]
  int v36; // [esp+38h] [ebp-B0h]
  float v37; // [esp+40h] [ebp-A8h]
  float v38; // [esp+44h] [ebp-A4h]
  float v39; // [esp+48h] [ebp-A0h]
  float v40; // [esp+4Ch] [ebp-9Ch]
  int v41[2]; // [esp+50h] [ebp-98h] BYREF
  struct tagRECT rc; // [esp+58h] [ebp-90h] BYREF
  int v43[14]; // [esp+68h] [ebp-80h] BYREF
  int v44; // [esp+A0h] [ebp-48h] BYREF
  _BYTE v45[28]; // [esp+A4h] [ebp-44h] BYREF
  int v46; // [esp+C0h] [ebp-28h]
  float v47; // [esp+C4h] [ebp-24h]
  float v48; // [esp+C8h] [ebp-20h]
  float v49; // [esp+CCh] [ebp-1Ch]
  int v50; // [esp+D0h] [ebp-18h]
  char v51; // [esp+D4h] [ebp-14h]
  int v52; // [esp+E4h] [ebp-4h]

  Element = CREControl::GetElement((CREControl *)this, 0);
  if ( Element )
  {
    if ( !*(_DWORD *)(this + 548) )
    {
      Font = CREDialog::GetFont(*(CREDialog **)(this + 112), *((_DWORD *)Element + 1));
      v6 = Font;
      if ( Font )
      {
        *(_DWORD *)(this + 548) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
        (*(void (__stdcall **)(_DWORD, int *))(**((_DWORD **)v6 + 130) + 24))(*((_DWORD *)v6 + 130), v43);
        *(_DWORD *)(this + 560) = v43[0];
      }
    }
    if ( *(_DWORD *)(this + 576) )
    {
      v7 = (int)(a3 * 100.0 + (double)*(int *)(this + 564));
      v8 = *(_DWORD *)(this + 560);
      *(_DWORD *)(this + 564) = v7;
      if ( v7 > v8 )
        *(_DWORD *)(this + 564) = v8;
    }
    v9 = *(_DWORD *)(this + 584);
    v10 = *(_DWORD *)(this + 564) + *(_DWORD *)(this + 168);
    v35 = this + 580;
    v32 = v9;
    if ( v9 > *(_DWORD *)(this + 588) )
    {
      _invalid_parameter_noinfo();
      v9 = v32;
    }
    v36 = this + 580;
    v11 = v9;
    while ( 1 )
    {
      v33 = *(_DWORD *)(this + 588);
      if ( *(_DWORD *)(this + 584) > v33 )
        _invalid_parameter_noinfo();
      if ( !v36 || v36 != v35 )
        _invalid_parameter_noinfo();
      if ( v11 == v33 )
        break;
      if ( !v36 )
        _invalid_parameter_noinfo();
      if ( v11 >= *(_DWORD *)(v36 + 8) )
        _invalid_parameter_noinfo();
      if ( !*(_DWORD *)(v11 + 32) )
      {
        v12 = (const wchar_t *)std::wstring::c_str(v11 + 4);
        CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(this + 536), v12);
        CREEditBox::CUniBuffer::CPtoX(
          (CREEditBox::CUniBuffer *)(this + 536),
          *(_DWORD *)(this + 544),
          1,
          (int *)(v11 + 32));
      }
      v31 = *(_DWORD *)(v11 + 48);
      if ( !v31 )
        goto LABEL_35;
      v34 = *(float *)(v11 + 36) - a3;
      *(float *)(v11 + 36) = v34;
      v13 = 0.0;
      if ( v34 > 0.0 )
      {
        *(float *)(v11 + 40) = a3 * (double)v31 * 2.0 + *(float *)(v11 + 40);
        v16 = 1.0;
        while ( 1 )
        {
          if ( v16 >= *(float *)(v11 + 40) )
          {
            v17 = v16;
            v18 = v13;
            v19 = v17;
            if ( v18 <= *(float *)(v11 + 40) )
              goto LABEL_35;
            v20 = v18;
            v16 = v19;
            v13 = v20;
          }
          v21 = *(float *)(v11 + 40);
          if ( v16 >= v21 )
          {
            *(_DWORD *)(v11 + 48) = 1;
            v22 = -v21;
          }
          else
          {
            *(_DWORD *)(v11 + 48) = -1;
            v22 = 2.0 - v21;
          }
          *(float *)(v11 + 40) = v22;
        }
      }
      v14 = *(_BYTE *)(v11 + 52) == 0;
      *(float *)(v11 + 36) = 0.0;
      *(_DWORD *)(v11 + 48) = 0;
      *(float *)(v11 + 40) = 1.0;
      if ( v14 )
      {
LABEL_35:
        SetRect(
          &rc,
          *(_DWORD *)(this + 164),
          v10,
          *(_DWORD *)(this + 164) + *(_DWORD *)(v11 + 32),
          v10 + *(_DWORD *)(this + 560));
        v23 = *(_DWORD *)(v11 + 44);
        v37 = (double)BYTE2(v23) * 0.003921568859368563;
        *((float *)Element + 45) = v37;
        v38 = (double)BYTE1(v23) * 0.003921568859368563;
        *((float *)Element + 46) = v38;
        v39 = (double)(unsigned __int8)v23 * 0.003921568859368563;
        *((float *)Element + 47) = v39;
        v40 = 0.003921568859368563 * (double)HIBYTE(v23);
        *((float *)Element + 48) = v40;
        *((float *)Element + 48) = *(float *)(v11 + 40);
        v24 = (const wchar_t *)std::wstring::c_str(v11 + 4);
        CREDialog::DrawTextFromTexture(*(CREDialog **)(this + 112), v24, Element, &rc, 0, -1);
        v10 += *(_DWORD *)(this + 560);
        if ( v11 >= *(_DWORD *)(v36 + 8) )
          _invalid_parameter_noinfo();
        v11 += 56;
      }
      else
      {
        v15 = (int *)sub_1000F321((int)v41, v36, v11);
        v11 = v15[1];
        v36 = *v15;
      }
    }
    if ( *(_DWORD *)(this + 564) == *(_DWORD *)(this + 560) )
    {
      v14 = *(_DWORD *)(this + 576) == 0;
      *(_DWORD *)(this + 564) = 0;
      if ( !v14 )
      {
        v25 = *(float ***)(this + 572);
        v26 = this + 568;
        v27 = *v25;
        if ( *v25 == (float *)v25 )
          _invalid_parameter_noinfo();
        std::wstring::wstring(v45);
        v52 = 0;
        std::wstring::operator=(v45, v27 + 3);
        v44 = *((_DWORD *)v27 + 2);
        v28 = v27[10];
        v47 = 10.0;
        v46 = 0;
        v48 = 0.0;
        v51 = 0;
        v29 = *(_DWORD *)(v35 + 4);
        v30 = v29 <= *(_DWORD *)(v35 + 8);
        v49 = v28;
        v50 = 1;
        if ( !v30 )
          _invalid_parameter_noinfo();
        sub_1000F759((int)v41, v35, v29, (int)&v44);
        sub_1000300D((int)v41, v26, **(void ***)(v26 + 4));
        v52 = -1;
        std::wstring::~wstring(v45);
      }
    }
  }
}
