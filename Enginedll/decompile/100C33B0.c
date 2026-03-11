/*
 * func-name: ?Render@CMultiLineStatic@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c33b0
 * callers: none
 * callees: 0x10057380, 0x1006c3f0, 0x1006c660, 0x100a5e50, 0x100b55d0, 0x100b5820, 0x100b5e40, 0x100b6f70, 0x100bb2f0, 0x100cefa0, 0x100cefe0, 0x101a26c0
 */

void __thiscall CMultiLineStatic::Render(CMultiLineStatic *this, struct IDirect3DDevice9 *a2, float a3)
{
  CMultiLineStatic *v3; // ebx
  unsigned int *v4; // eax
  unsigned int *v5; // esi
  struct REFontNode *Font; // eax
  int v7; // eax
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // edi
  float v13; // esi
  int *v14; // eax
  char *v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  char *v18; // edi
  unsigned int v19; // esi
  int *v20; // eax
  float v21; // esi
  int v22; // edi
  unsigned int v23; // eax
  unsigned int v24; // esi
  void (__cdecl *v25)(); // edi
  int *v26; // eax
  char *v27; // esi
  double v28; // st7
  double v29; // st6
  bool v30; // c0
  bool v31; // c3
  double v32; // st6
  int v33; // esi
  int v34; // edx
  int v35; // eax
  int v36; // edx
  int v37; // ecx
  double v38; // rt2
  double v39; // st6
  double v40; // st7
  const wchar_t *v41; // esi
  int v42; // eax
  int v43; // [esp+20h] [ebp-158h] BYREF
  char *v44; // [esp+24h] [ebp-154h]
  unsigned int v45; // [esp+28h] [ebp-150h]
  int v46; // [esp+2Ch] [ebp-14Ch]
  int v47; // [esp+30h] [ebp-148h]
  int v48; // [esp+34h] [ebp-144h]
  _DWORD v49[2]; // [esp+38h] [ebp-140h] BYREF
  char *v50; // [esp+40h] [ebp-138h]
  unsigned int v51; // [esp+44h] [ebp-134h]
  float v52; // [esp+48h] [ebp-130h]
  struct tagRECT rc; // [esp+4Ch] [ebp-12Ch] BYREF
  unsigned int *v54; // [esp+5Ch] [ebp-11Ch]
  struct tagRECT v55; // [esp+60h] [ebp-118h] BYREF
  _DWORD v56[49]; // [esp+70h] [ebp-108h] BYREF
  int v57; // [esp+134h] [ebp-44h] BYREF
  int v58[15]; // [esp+13Ch] [ebp-3Ch] BYREF
  int savedregs; // [esp+178h] [ebp+0h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    goto LABEL_79;
  v4 = (unsigned int *)*((_DWORD *)this + 190);
  if ( v4 )
  {
    if ( !v4[5] || !v4[6] )
    {
      *(_DWORD *)(*((_DWORD *)this + 190) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v4)
                                                  + 131);
      *(_DWORD *)(*((_DWORD *)v3 + 190) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                              *((CREDialog **)v3 + 28),
                                                              **((_DWORD **)v3 + 190))
                                                + 132);
    }
    REBlendColor::Blend((REBlendColor *)(*((_DWORD *)v3 + 190) + 36), 0, a3, 0.0);
    CREDialog::DrawSprite(
      *((CREDialog **)v3 + 28),
      *((struct CREElement **)v3 + 190),
      (struct tagRECT *)((char *)v3 + 164),
      1.0);
  }
  if ( *((_DWORD *)v3 + 179) )
  {
    v5 = (unsigned int *)**((_DWORD **)v3 + 30);
    v54 = v5;
    if ( v5 )
    {
      Font = CREDialog::GetFont(*((CREDialog **)v3 + 28), v5[1]);
      if ( Font )
      {
        (*(void (__stdcall **)(_DWORD, int *))(**((_DWORD **)Font + 130) + 28))(*((_DWORD *)Font + 130), v58);
        v7 = (*((_DWORD *)v3 + 44) - *((_DWORD *)v3 + 42)) / (v58[0] + *((_DWORD *)v3 + 188));
        *((_DWORD *)v3 + 180) = v58[0];
        *((_DWORD *)v3 + 181) = v7;
      }
    }
    REBlendColor::Blend((REBlendColor *)(v5 + 29), *((_BYTE *)v3 + 156) == 0, a3, 0.69999999);
    v8 = *((_BYTE *)v3 + 745) == 0;
    v47 = 0;
    v5[2] = 2 * !v8 + 4;
    if ( *((_BYTE *)v3 + 744) )
    {
      SetRect(
        &rc,
        *((_DWORD *)v3 + 41) + 3,
        *((_DWORD *)v3 + 44) - *((_DWORD *)v3 + 180),
        *((_DWORD *)v3 + 43),
        *((_DWORD *)v3 + 44));
      v48 = -1;
    }
    else
    {
      SetRect(
        &rc,
        *((_DWORD *)v3 + 41) + 3,
        *((_DWORD *)v3 + 42),
        *((_DWORD *)v3 + 43),
        *((_DWORD *)v3 + 42) + *((_DWORD *)v3 + 180));
      v48 = 1;
    }
    sub_100CEFA0(v49);
    sub_10057380((_DWORD *)v3 + 175, &v43);
    if ( *((_BYTE *)v3 + 744) )
    {
      v9 = *((_DWORD *)v3 + 189);
      v10 = *((_DWORD *)v3 + 181);
      if ( v9 )
        v10 += *(_DWORD *)(v9 + 600);
      v11 = *((_DWORD *)v3 + 179);
      if ( v11 > *((_DWORD *)v3 + 181) && v10 != v11 )
      {
        v12 = v11 - v10;
        do
        {
          v13 = *(float *)&v50;
          if ( !v50 )
            invalid_parameter_noinfo();
          if ( v51 <= *(_DWORD *)(LODWORD(v13) + 12) )
            invalid_parameter_noinfo();
          --v51;
          --v12;
        }
        while ( v12 );
      }
    }
    else if ( *((_DWORD *)v3 + 179) )
    {
      v14 = sub_10057380((_DWORD *)v3 + 175, &v55);
      v15 = (char *)v14[1];
      v43 = *v14;
      v16 = v14[2];
      v17 = *((_DWORD *)v3 + 189);
      v44 = v15;
      v45 = v16;
      if ( v17 )
        sub_1006C3F0(&v43, *(_DWORD *)(v17 + 600));
    }
    v8 = *((_DWORD *)v3 + 181) == 0;
    v52 = GSeconds;
    if ( v8 )
    {
LABEL_60:
      CREStatic::Render(v3, a2, a3);
      return;
    }
    while ( 1 )
    {
      ++v47;
      v18 = (char *)v3 + 700;
      if ( *((_BYTE *)v3 + 744) )
      {
        v19 = *((_DWORD *)v3 + 178);
        if ( v19 > v19 + *((_DWORD *)v3 + 179) )
          invalid_parameter_noinfo();
        if ( !v50 || v50 != v18 )
          invalid_parameter_noinfo();
        if ( v51 == v19 )
          goto LABEL_60;
        v20 = (int *)sub_100CEFE0(v49);
        v21 = *(float *)&v50;
        v22 = *v20;
        v46 = *v20;
        if ( !v50 )
          invalid_parameter_noinfo();
        if ( v51 <= *(_DWORD *)(LODWORD(v21) + 12) )
          invalid_parameter_noinfo();
        --v51;
      }
      else
      {
        v23 = *((_DWORD *)v3 + 178);
        v24 = v23 + *((_DWORD *)v3 + 179);
        if ( v23 > v24 )
          invalid_parameter_noinfo();
        if ( v44 && v44 == v18 )
        {
          v25 = invalid_parameter_noinfo;
        }
        else
        {
          v25 = invalid_parameter_noinfo;
          invalid_parameter_noinfo();
        }
        if ( v45 == v24 )
          goto LABEL_60;
        v26 = (int *)sub_1006C660(&v43);
        v27 = v44;
        v46 = *v26;
        if ( !v44 )
          v25();
        if ( v45 >= *((_DWORD *)v27 + 3) + *((_DWORD *)v27 + 4) )
          v25();
        ++v45;
        v22 = v46;
      }
      v28 = 0.0;
      if ( *(float *)(v22 + 32) <= 0.0 )
        break;
      v29 = *(float *)(v22 + 28) + *(float *)(v22 + 32) + *((float *)v3 + 184);
      v30 = v52 < v29;
      v31 = v52 == v29;
      v32 = v52;
      if ( v30 || v31 || (*((_BYTE *)v3 + 728) & 1) != 0 )
        goto LABEL_62;
LABEL_59:
      if ( v47 == *((_DWORD *)v3 + 181) )
        goto LABEL_60;
    }
    v32 = v52;
LABEL_62:
    qmemcpy(v56, v54, sizeof(v56));
    v33 = v46;
    v34 = *(_DWORD *)(v46 + 36);
    v35 = *(_DWORD *)(v46 + 40);
    v56[47] = *(_DWORD *)(v46 + 44);
    v56[45] = v34;
    v36 = *(_DWORD *)(v46 + 48);
    v56[46] = v35;
    v55.top = rc.top;
    v37 = *((_DWORD *)v3 + 182);
    v56[48] = v36;
    v55.left = rc.left;
    v55.right = rc.right;
    v55.bottom = rc.bottom;
    if ( (v37 & 4) != 0 )
    {
      if ( *((float *)v3 + 183) > 0.0 && *(float *)(v46 + 28) + *(float *)(v46 + 32) < v32 )
        *(float *)&v56[48] = *(float *)&v56[48]
                           - (v32 - *(float *)(v46 + 28) - *(float *)(v46 + 32)) / *((float *)v3 + 184);
      v28 = 0.0;
    }
    if ( (v37 & 2) != 0 )
    {
      v38 = v32;
      v39 = v28;
      v40 = v38;
      if ( v39 >= *((float *)v3 + 183) || *(float *)(v46 + 28) + *(float *)(v46 + 32) >= v40 )
      {
        v28 = v39;
      }
      else
      {
        OffsetRect(&v55, (int)((v40 - *(float *)(v46 + 28) - *(float *)(v46 + 32)) * *((float *)v3 + 185)), 0);
        v28 = 0.0;
      }
    }
    if ( v28 > *(float *)&v56[48] )
      *(float *)&v56[48] = v28;
    if ( *(_DWORD *)(v33 + 24) < 8u )
      v41 = (const wchar_t *)(v33 + 4);
    else
      v41 = *(const wchar_t **)(v33 + 4);
    CREDialog::DrawTextFromTexture(
      *((CREDialog **)v3 + 28),
      (int)&savedregs,
      (int)&v57,
      v41,
      (struct CREElement *)v56,
      &v55,
      0,
      -1);
    v42 = v48 * (*((_DWORD *)v3 + 180) + *((_DWORD *)v3 + 188));
    rc.top += v42;
    rc.bottom += v42;
    goto LABEL_59;
  }
  this = v3;
LABEL_79:
  CREStatic::Render(this, a2, a3);
}
