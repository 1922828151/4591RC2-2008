/*
 * func-name: sub_10266E80
 * func-address: 0x10266e80
 * callers: 0x100070fe
 * callees: 0x102c9fe0
 */

struct CREElement *__userpurge sub_10266E80@<eax>(int a1@<ecx>, int a2, int a3, int a4, float a5)
{
  struct CREElement *result; // eax
  struct CREElement *v7; // esi
  struct REFontNode *Font; // eax
  struct REFontNode *v9; // ebx
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // ebx
  const wchar_t *v13; // eax
  unsigned int v14; // eax
  double left; // st6
  double v16; // st6
  const wchar_t *v17; // eax
  int v18; // eax
  const wchar_t *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  const wchar_t *v22; // eax
  bool v23; // zf
  int v24; // [esp+4Ch] [ebp-A4h]
  int v25; // [esp+50h] [ebp-A0h]
  int v26; // [esp+54h] [ebp-9Ch]
  int v27; // [esp+64h] [ebp-8Ch]
  struct tagRECT rc; // [esp+68h] [ebp-88h] BYREF
  int v29; // [esp+78h] [ebp-78h]
  int v30; // [esp+7Ch] [ebp-74h]
  int yBottom; // [esp+80h] [ebp-70h]
  float v32; // [esp+84h] [ebp-6Ch]
  float v33; // [esp+88h] [ebp-68h]
  float v34; // [esp+8Ch] [ebp-64h]
  float v35; // [esp+90h] [ebp-60h]
  float v36; // [esp+9Ch] [ebp-54h]
  float v37; // [esp+A0h] [ebp-50h]
  float v38; // [esp+A4h] [ebp-4Ch]
  float v39; // [esp+A8h] [ebp-48h]
  int v40; // [esp+ACh] [ebp-44h]
  int v41; // [esp+B4h] [ebp-3Ch]
  _DWORD v42[14]; // [esp+B8h] [ebp-38h] BYREF

  result = CREControl::GetElement((CREControl *)a1, 0);
  v7 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(a1 + 548) )
    {
      Font = CREDialog::GetFont(*(CREDialog **)(a1 + 112), *((_DWORD *)result + 1));
      v9 = Font;
      if ( Font )
      {
        *(_DWORD *)(a1 + 548) = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
        (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v9 + 130) + 24))(*((_DWORD *)v9 + 130), v42);
        *(_DWORD *)(a1 + 572) = v42[0];
      }
    }
    v10 = *(_DWORD *)(a1 + 564);
    v29 = *(_DWORD *)(a1 + 176);
    v40 = v10;
    while ( 1 )
    {
      v41 = **(_DWORD **)(a1 + 564);
      if ( a1 == -560 )
        _invalid_parameter_noinfo();
      result = (struct CREElement *)v40;
      if ( v40 == v41 )
        return result;
      v30 = a1 + 560;
      yBottom = v40;
      if ( a1 == -560 )
        _invalid_parameter_noinfo();
      v11 = *(_DWORD *)(v40 + 4);
      if ( v11 == *(_DWORD *)(v30 + 4) )
        _invalid_parameter_noinfo();
      if ( v11 == *(_DWORD *)(v30 + 4) )
        _invalid_parameter_noinfo();
      v12 = (_DWORD *)(v11 + 8);
      v13 = (const wchar_t *)std::wstring::c_str(v12 + 7);
      CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(a1 + 536), v13);
      v24 = *(_DWORD *)(a1 + 544);
      rc.top = 0;
      CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)(a1 + 536), v24, 1, &rc.top);
      SetRect(
        (LPRECT)&rc.right,
        *(_DWORD *)(a1 + 172) - rc.top,
        yBottom - *(_DWORD *)(a1 + 572),
        *(_DWORD *)(a1 + 172),
        yBottom);
      v14 = v12[15];
      v36 = (double)BYTE2(v14) * 0.003921568859368563;
      rc.left = (unsigned __int8)v14;
      *((float *)v7 + 45) = v36;
      v37 = (double)BYTE1(v14) * 0.003921568859368563;
      left = (double)rc.left;
      rc.left = HIBYTE(v14);
      *((float *)v7 + 46) = v37;
      v38 = left * 0.003921568859368563;
      v16 = (double)rc.left;
      *((float *)v7 + 47) = v38;
      v39 = 0.003921568859368563 * v16;
      *((float *)v7 + 48) = v39;
      v17 = (const wchar_t *)std::wstring::c_str(v12 + 7);
      CREDialog::DrawTextFromTexture(*(CREDialog **)(a1 + 112), v17, v7, (struct tagRECT *)&rc.right, 0, -1);
      v18 = v12[16];
      switch ( v18 )
      {
        case 8:
          SetRect(
            (LPRECT)&rc.right,
            rc.right - (int)((double)*(int *)(a1 + 572) * 3.419354915618896 + 0.5) - 5,
            rc.bottom,
            rc.right - 5,
            v30);
          v26 = 31;
          v25 = 106;
          break;
        case 16:
          SetRect(
            (LPRECT)&rc.right,
            rc.right - (int)((double)*(int *)(a1 + 572) * 1.290322542190552 + 0.5) - 5,
            rc.bottom,
            rc.right - 5,
            v30);
          v26 = 31;
          v25 = 40;
          break;
        case 32:
          SetRect(
            (LPRECT)&rc.right,
            rc.right - (int)((double)*(int *)(a1 + 572) * 1.882352948188782 + 0.5) - 5,
            rc.bottom,
            rc.right - 5,
            v30);
          v26 = 17;
          v25 = 32;
          break;
        default:
          goto LABEL_22;
      }
      *(_DWORD *)v7 = v12[17];
      SetRect((LPRECT)((char *)v7 + 12), 0, 0, v25, v26);
      REBlendColor::Blend((struct CREElement *)((char *)v7 + 36), 0, a5, 0.69999999);
      CREDialog::DrawSprite(*(CREDialog **)(a1 + 112), v7, (struct tagRECT *)&rc.right, 1.0);
LABEL_22:
      v19 = (const wchar_t *)std::wstring::c_str(v12);
      CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)(a1 + 536), v19);
      v20 = *(_DWORD *)(a1 + 544);
      rc.right = 0;
      CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)(a1 + 536), v20, 1, &rc.right);
      SetRect(&rc, rc.left - v27 - 5, v29 - *(_DWORD *)(a1 + 572), rc.left - 5, v29);
      v21 = v12[14];
      v32 = (double)BYTE2(v21) * 0.003921568859368563;
      *((float *)v7 + 45) = v32;
      v33 = (double)BYTE1(v21) * 0.003921568859368563;
      *((float *)v7 + 46) = v33;
      v34 = (double)(unsigned __int8)v21 * 0.003921568859368563;
      *((float *)v7 + 47) = v34;
      v35 = 0.003921568859368563 * (double)HIBYTE(v21);
      *((float *)v7 + 48) = v35;
      v22 = (const wchar_t *)std::wstring::c_str(v12);
      CREDialog::DrawTextFromTexture(*(CREDialog **)(a1 + 112), v22, v7, &rc, 0, -1);
      v29 += -5 - *(_DWORD *)(a1 + 572);
      if ( a1 == -560 )
        _invalid_parameter_noinfo();
      v23 = *(_DWORD *)(v40 + 4) == *(_DWORD *)(a1 + 564);
      v40 = *(_DWORD *)(v40 + 4);
      if ( v23 )
        _invalid_parameter_noinfo();
    }
  }
  return result;
}
