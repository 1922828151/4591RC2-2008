/*
 * func-name: ?Render@CREListCtrl@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c14d0
 * callers: none
 * callees: 0x100a5d90, 0x100a5e50, 0x100a5f80, 0x100b5820, 0x100b5e40, 0x100b6f70
 */

void __thiscall CREListCtrl::Render(CREListCtrl *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  unsigned int *v5; // eax
  unsigned int *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  unsigned int v12; // edi
  int v13; // ebx
  int v14; // eax
  struct CREElement *v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19; // cf
  int v20; // eax
  const wchar_t *v21; // eax
  int v22; // eax
  int v23; // eax
  signed int v24; // eax
  int top; // ebx
  int v26; // eax
  int v27; // eax
  unsigned int v28; // edi
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  unsigned int v33; // eax
  struct CREElement *v34; // eax
  unsigned int v35; // ebx
  double v36; // st6
  double v37; // st5
  double v38; // st4
  double v39; // st5
  double v40; // st4
  double v41; // rt1
  double v42; // st4
  double v43; // rt2
  double v44; // rtt
  double v45; // st4
  double v46; // st7
  LONG v47; // ecx
  double v48; // rt2
  double v49; // st4
  double v50; // st7
  double v51; // rtt
  LONG v52; // eax
  double v53; // rt0
  double v54; // st5
  double v55; // st7
  REBlendColor *v56; // ecx
  const wchar_t *v57; // eax
  CREElement *v58; // [esp+18h] [ebp-48h]
  int v59; // [esp+1Ch] [ebp-44h]
  unsigned int v60; // [esp+20h] [ebp-40h]
  int v61; // [esp+24h] [ebp-3Ch]
  unsigned int v62; // [esp+28h] [ebp-38h]
  LONG left; // [esp+2Ch] [ebp-34h]
  unsigned int v64; // [esp+30h] [ebp-30h]
  LONG v65; // [esp+30h] [ebp-30h]
  int v66; // [esp+34h] [ebp-2Ch]
  int v67; // [esp+38h] [ebp-28h]
  int v68; // [esp+3Ch] [ebp-24h]
  struct tagRECT v69; // [esp+40h] [ebp-20h] BYREF
  struct tagRECT rc; // [esp+50h] [ebp-10h] BYREF
  int savedregs; // [esp+60h] [ebp+0h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(CREListCtrl *))(*(_DWORD *)this + 140))(this) && !*((_BYTE *)this + 89) )
  {
    v4 = *((_DWORD *)this + 177);
    if ( v4 )
      *((_DWORD *)this + 185) = *(_DWORD *)(v4 + 600) - *(_DWORD *)(v4 + 608);
    v5 = (unsigned int *)*((_DWORD *)this + 174);
    if ( v5 && (!v5[5] || !v5[6]) )
    {
      *(_DWORD *)(*((_DWORD *)this + 174) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v5)
                                                  + 131);
      *(_DWORD *)(*((_DWORD *)this + 174) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                *((CREDialog **)this + 28),
                                                                **((_DWORD **)this + 174))
                                                  + 132);
    }
    v6 = (unsigned int *)*((_DWORD *)this + 175);
    if ( v6 && (!v6[5] || !v6[6]) )
    {
      *(_DWORD *)(*((_DWORD *)this + 175) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v6)
                                                  + 131);
      *(_DWORD *)(*((_DWORD *)this + 175) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                *((CREDialog **)this + 28),
                                                                **((_DWORD **)this + 175))
                                                  + 132);
    }
    v7 = *((_DWORD *)this + 187);
    if ( v7 )
      v61 = (*((_DWORD *)this + 188) - v7) / 40;
    else
      v61 = 0;
    v8 = *((_DWORD *)this + 178);
    v69.right = *((_DWORD *)this + 41) + 2;
    v9 = *((_DWORD *)this + 42);
    v69.top = v9 + 2;
    v10 = **((_DWORD **)this + 30);
    v69.bottom = v9 + v8 + 2;
    v58 = (CREElement *)v10;
    REBlendColor::Blend((REBlendColor *)(v10 + 36), 0, a3, 0.0);
    REBlendColor::Blend((REBlendColor *)(v10 + 116), 0, a3, 0.0);
    v11 = *((_DWORD *)this + 174);
    if ( v11 )
      REBlendColor::Blend((REBlendColor *)(v11 + 36), 0, a3, 0.0);
    if ( *((_DWORD *)this + 174) )
    {
      v12 = 0;
      if ( v61 > 0 )
      {
        v13 = 0;
        do
        {
          v14 = *((_DWORD *)this + 187);
          v69.left = v69.right;
          if ( !v14 || v12 >= (*((_DWORD *)this + 188) - v14) / 40 )
            invalid_parameter_noinfo();
          v15 = (struct CREElement *)*((_DWORD *)this + 174);
          v69.right += *(_DWORD *)(*((_DWORD *)this + 187) + v13);
          CREDialog::DrawSprite(*((CREDialog **)this + 28), v15, &v69, 1.0);
          v16 = *((_DWORD *)this + 187);
          if ( !v16 || v12 >= (*((_DWORD *)this + 188) - v16) / 40 )
            invalid_parameter_noinfo();
          *((_DWORD *)v58 + 2) = *(_DWORD *)(*((_DWORD *)this + 187) + v13 + 4);
          v17 = *((_DWORD *)this + 187);
          if ( !v17 || v12 >= (*((_DWORD *)this + 188) - v17) / 40 )
            invalid_parameter_noinfo();
          v18 = *((_DWORD *)this + 187);
          v19 = *(_DWORD *)(v18 + v13 + 36) < 8u;
          v20 = v18 + v13 + 12;
          if ( v19 )
            v21 = (const wchar_t *)(v20 + 4);
          else
            v21 = *(const wchar_t **)(v20 + 4);
          CREDialog::DrawTextFromTexture(*((CREDialog **)this + 28), (int)&savedregs, v12++, v21, v58, &v69, 0, -1);
          v13 += 40;
        }
        while ( (int)v12 < v61 );
      }
    }
    v22 = *((_DWORD *)this + 175);
    if ( v22 )
      REBlendColor::Blend((REBlendColor *)(v22 + 36), 0, a3, 0.0);
    v23 = *((_DWORD *)this + 191);
    if ( v23 )
      v68 = (*((_DWORD *)this + 192) - v23) / 20;
    else
      v68 = 0;
    v24 = *((_DWORD *)this + 185);
    top = *((_DWORD *)this + 178) + *((_DWORD *)this + 42) - *((_DWORD *)this + 180);
    rc.top = top;
    v62 = v24;
    if ( v24 < v68 )
    {
      v67 = 20 * v24;
      while ( 1 )
      {
        v26 = *((_DWORD *)this + 191);
        if ( !v26 || v62 >= (*((_DWORD *)this + 192) - v26) / 20 )
        {
          invalid_parameter_noinfo();
          top = rc.top;
        }
        v27 = v67 + *((_DWORD *)this + 191);
        v28 = *(_DWORD *)(v27 + 4);
        v59 = v27;
        if ( v28 > *(_DWORD *)(v27 + 8) )
        {
          invalid_parameter_noinfo();
          top = rc.top;
        }
        SetRect(&rc, 0, top + *((_DWORD *)this + 180), *((_DWORD *)this + 41), top + 2 * *((_DWORD *)this + 180));
        if ( rc.bottom > *((_DWORD *)this + 44) )
          break;
        v60 = 0;
        if ( v61 > 0 )
        {
          v66 = 0;
          do
          {
            v29 = *((_DWORD *)this + 187);
            rc.left = rc.right;
            if ( !v29 || v60 >= (*((_DWORD *)this + 188) - v29) / 40 )
              invalid_parameter_noinfo();
            rc.right = rc.left + *(_DWORD *)(*((_DWORD *)this + 187) + v66);
            v30 = *((_DWORD *)this + 176);
            if ( v30
              && (v31 = *((_DWORD *)this + 181), v31 != -1)
              && (v32 = *((_DWORD *)this + 182), v32 != -1)
              && v32 == v62
              && v31 == v60 )
            {
              REBlendColor::Blend((REBlendColor *)(v30 + 36), 0, a3, 0.0);
              CREDialog::DrawSprite(*((CREDialog **)this + 28), *((struct CREElement **)this + 176), &rc, 1.0);
            }
            else
            {
              v33 = *(_DWORD *)(v59 + 8);
              v64 = v33;
              if ( *(_DWORD *)(v59 + 4) > v33 )
              {
                invalid_parameter_noinfo();
                v33 = v64;
              }
              if ( v28 == v33 )
                goto LABEL_73;
              if ( v28 >= *(_DWORD *)(v59 + 8) )
                invalid_parameter_noinfo();
              if ( *(_DWORD *)v28 != v60 )
                goto LABEL_73;
              if ( v28 >= *(_DWORD *)(v59 + 8) )
                invalid_parameter_noinfo();
              if ( *(_DWORD *)(v28 + 40) )
              {
                if ( v28 >= *(_DWORD *)(v59 + 8) )
                  invalid_parameter_noinfo();
                REBlendColor::Blend((REBlendColor *)(*(_DWORD *)(v28 + 40) + 36), 0, a3, 0.0);
                if ( v28 >= *(_DWORD *)(v59 + 8) )
                  invalid_parameter_noinfo();
                CREDialog::DrawSprite(*((CREDialog **)this + 28), *(struct CREElement **)(v28 + 40), &rc, 1.0);
              }
              else
              {
LABEL_73:
                v34 = (struct CREElement *)*((_DWORD *)this + 175);
                if ( v34 )
                  CREDialog::DrawSprite(*((CREDialog **)this + 28), v34, &rc, 1.0);
              }
            }
            v35 = *(_DWORD *)(v59 + 8);
            if ( *(_DWORD *)(v59 + 4) > v35 )
              invalid_parameter_noinfo();
            if ( v28 != v35 )
            {
              if ( v28 >= *(_DWORD *)(v59 + 8) )
                invalid_parameter_noinfo();
              if ( *(_DWORD *)v28 == v60 )
              {
                if ( *((_DWORD *)this + 194) != -1 )
                {
                  if ( *((float *)v58 + 45) < 1.0 )
                  {
                    if ( *((float *)v58 + 45) > 0.0 )
                    {
                      v40 = 255.0;
                      v39 = 0.5;
                      *(_QWORD *)&v69.left = (__int64)(*((float *)v58 + 45) * 255.0 + 0.5);
                      left = v69.left;
                    }
                    else
                    {
                      v39 = 0.5;
                      left = 0;
                      v40 = 255.0;
                    }
                    v41 = v40;
                    v42 = v39;
                    v37 = v41;
                    v43 = v42;
                    v38 = 0.0;
                    v36 = v43;
                  }
                  else
                  {
                    v36 = 0.5;
                    left = 255;
                    v37 = 255.0;
                    v38 = 0.0;
                  }
                  v44 = v38;
                  v45 = 1.0;
                  v46 = v44;
                  if ( *((float *)v58 + 46) < 1.0 )
                  {
                    if ( v46 < *((float *)v58 + 46) )
                    {
                      *(_QWORD *)&v69.left = (__int64)(*((float *)v58 + 46) * v37 + v36);
                      v65 = v69.left;
                    }
                    else
                    {
                      v65 = 0;
                    }
                    v45 = 1.0;
                  }
                  else
                  {
                    v65 = 255;
                  }
                  if ( v45 > *((float *)v58 + 47) )
                  {
                    v48 = v45;
                    v49 = v46;
                    v50 = v48;
                    if ( v49 < *((float *)v58 + 47) )
                    {
                      *(_QWORD *)&v69.left = (__int64)(*((float *)v58 + 47) * v37 + v36);
                      v47 = v69.left;
                    }
                    else
                    {
                      v47 = 0;
                    }
                    v51 = v49;
                    v45 = v50;
                    v46 = v51;
                  }
                  else
                  {
                    v47 = 255;
                  }
                  if ( v45 > *((float *)v58 + 48) )
                  {
                    v53 = v37;
                    v54 = v46;
                    v55 = v53;
                    if ( v54 < *((float *)v58 + 48) )
                    {
                      *(_QWORD *)&v69.left = (__int64)(v55 * *((float *)v58 + 48) + v36);
                      v52 = v69.left;
                    }
                    else
                    {
                      v52 = 0;
                    }
                  }
                  else
                  {
                    v52 = 255;
                  }
                  CREElement::SetFont(
                    v58,
                    *((_DWORD *)this + 194),
                    v47 | ((v65 | ((left | (v52 << 8)) << 8)) << 8),
                    *((_DWORD *)v58 + 2));
                }
                if ( v28 >= *(_DWORD *)(v59 + 8) )
                  invalid_parameter_noinfo();
                *((_DWORD *)v58 + 2) = *(_DWORD *)(v28 + 4);
                if ( v28 >= *(_DWORD *)(v59 + 8) )
                  invalid_parameter_noinfo();
                REBlendColor::Init((CREElement *)((char *)v58 + 116), *(_DWORD *)(v28 + 8), 0xC8808080, 0);
                REBlendColor::Blend(v56, 0, a3, 0.0);
                if ( v28 >= *(_DWORD *)(v59 + 8) )
                  invalid_parameter_noinfo();
                if ( *(_DWORD *)(v28 + 36) < 8u )
                  v57 = (const wchar_t *)(v28 + 16);
                else
                  v57 = *(const wchar_t **)(v28 + 16);
                CREDialog::DrawTextFromTexture(*((CREDialog **)this + 28), (int)&savedregs, v28, v57, v58, &rc, 0, -1);
                if ( v28 >= *(_DWORD *)(v59 + 8) )
                  invalid_parameter_noinfo();
                v28 += 44;
              }
            }
            v66 += 40;
            ++v60;
          }
          while ( (int)v60 < v61 );
        }
        v67 += 20;
        if ( (int)++v62 >= v68 )
          break;
        top = rc.top;
      }
    }
  }
}
