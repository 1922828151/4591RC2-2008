/*
 * func-name: ?RenderComposition@CMLIMEEditBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c2cc0
 * callers: none
 * callees: 0x10019470, 0x1006ab80, 0x100a5480, 0x100a57a0, 0x100b5850, 0x100b66a0, 0x100b6890
 */

void __thiscall CMLIMEEditBox::RenderComposition(CMLIMEEditBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // edx
  CREEditBox::CUniBuffer ***v7; // eax
  struct CREElement *v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // ebx
  int v12; // ebp
  CREDialog *v13; // ecx
  unsigned int v14; // eax
  double v15; // st6
  double v16; // st6
  unsigned int v17; // eax
  LONG top; // ecx
  LONG right; // edx
  const wchar_t *v20; // ebx
  bool v21; // zf
  int v22; // ebp
  int v23; // ebp
  unsigned int v24; // eax
  CREDialog *v25; // ecx
  int v26; // edi
  unsigned int v27; // ecx
  CREDialog *v28; // ecx
  unsigned int v29; // [esp+4h] [ebp-44h]
  int v30; // [esp+14h] [ebp-34h] BYREF
  unsigned __int8 **v31; // [esp+18h] [ebp-30h]
  int v32; // [esp+1Ch] [ebp-2Ch]
  int v33; // [esp+20h] [ebp-28h] BYREF
  int v34; // [esp+24h] [ebp-24h] BYREF
  struct tagRECT rc; // [esp+28h] [ebp-20h] BYREF
  struct tagRECT v36; // [esp+38h] [ebp-10h] BYREF

  v4 = *((_DWORD *)this + 224);
  v5 = (_DWORD *)((char *)this + 892);
  v30 = 0;
  if ( v4 )
  {
    if ( (v5[2] - v4) >> 2 )
    {
      v6 = *((_DWORD *)this + 204);
      if ( v6 < (unsigned int)((v5[2] - v4) >> 2) && v6 >= 0 )
      {
        v7 = (CREEditBox::CUniBuffer ***)std::vector<Model *>::operator[](v5, *((_DWORD *)this + 204));
        CREEditBox::CUniBuffer::CPtoX(**v7, *((_DWORD *)this + 187), 0, &v30);
      }
    }
  }
  v8 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
  v9 = *((_DWORD *)this + 141);
  v10 = *((_DWORD *)this + 204) - *((_DWORD *)this + 207);
  v11 = *((_DWORD *)this + 142);
  v12 = v10 * *((_DWORD *)this + 203);
  rc.bottom = v11 + *((_DWORD *)this + 203) * (v10 + 1);
  rc.left = v30 + v9;
  rc.right = v30 + v9;
  v13 = (CREDialog *)*((_DWORD *)this + 28);
  rc.top = v11 + v12;
  CREDialog::CalcTextRect(v13, CMLIMEEditBox::s_CompString, v8, &rc, -1);
  if ( rc.right > *((_DWORD *)this + 143) )
    OffsetRect(&rc, *((_DWORD *)this + 141) - rc.left, rc.bottom - rc.top);
  CMLIMEEditBox::s_ptCompString.x = rc.left;
  dword_1123DB94 = rc.top;
  CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, *((_DWORD *)this + 237), 1.0);
  v14 = *((_DWORD *)this + 236);
  *(float *)&v36.left = (double)BYTE2(v14) * 0.003921568859368563;
  v34 = (unsigned __int8)v14;
  *((_DWORD *)v8 + 45) = v36.left;
  *(float *)&v36.top = (double)BYTE1(v14) * 0.003921568859368563;
  v15 = (double)v34;
  v34 = HIBYTE(v14);
  *((_DWORD *)v8 + 46) = v36.top;
  *(float *)&v36.right = v15 * 0.003921568859368563;
  v16 = (double)v34;
  *((_DWORD *)v8 + 47) = v36.right;
  *(float *)&v36.bottom = 0.003921568859368563 * v16;
  *((_DWORD *)v8 + 48) = v36.bottom;
  CREDialog::DrawTextW(*((CREDialog **)this + 28), CMLIMEEditBox::s_CompString, v8, &rc, 0, -1);
  v17 = *((_DWORD *)this + 239);
  *(float *)&v36.left = (double)BYTE2(v17) * 0.003921568859368563;
  *(float *)&v36.top = (double)BYTE1(v17) * 0.003921568859368563;
  v34 = HIBYTE(v17);
  *(float *)&v36.right = (double)(unsigned __int8)v17 * 0.003921568859368563;
  top = v36.top;
  right = v36.right;
  *((_DWORD *)v8 + 45) = v36.left;
  *((_DWORD *)v8 + 46) = top;
  *((_DWORD *)v8 + 47) = right;
  *(float *)&v36.bottom = 0.003921568859368563 * (double)HIBYTE(v17);
  *((_DWORD *)v8 + 48) = v36.bottom;
  v20 = CMLIMEEditBox::s_CompString;
  CMLIMEEditBox::s_nFirstTargetConv = -1;
  v21 = *CMLIMEEditBox::s_CompString == 0;
  v31 = &CMLIMEEditBox::s_abCompStringAttr;
  if ( !v21 )
  {
    v32 = 0;
    do
    {
      if ( *(_BYTE *)v31 == 1 )
      {
        v33 = 0;
        v22 = v20 - CMLIMEEditBox::s_CompString;
        if ( dword_1123E214
          && (!byte_1123E21C
           || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString) >= 0) )
        {
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E220, v22, 0, &v33);
        }
        v34 = 0;
        v23 = v20 - CMLIMEEditBox::s_CompString;
        if ( dword_1123E214
          && (!byte_1123E21C
           || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString) >= 0) )
        {
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E220, v23, 1, &v34);
        }
        v36.left = rc.left + v33;
        v24 = *((_DWORD *)this + 240);
        v36.right = rc.left + v34;
        v36.top = rc.top;
        v25 = (CREDialog *)*((_DWORD *)this + 28);
        v36.bottom = rc.bottom;
        CREDialog::DrawRect(v25, &v36, v24, 1.0);
        CREDialog::DrawTextW(*((CREDialog **)this + 28), v20, v8, &v36, 0, 1);
        if ( CMLIMEEditBox::s_nFirstTargetConv == -1 )
          CMLIMEEditBox::s_nFirstTargetConv = v32;
      }
      v31 = (unsigned __int8 **)((char *)v31 + 1);
      ++v32;
      ++v20;
    }
    while ( *v20 );
  }
  if ( *((_BYTE *)this + 744) )
  {
    v26 = CMLIMEEditBox::s_nCompCaret;
    v30 = 0;
    if ( dword_1123E214
      && (!byte_1123E21C || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString) >= 0) )
    {
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E220, v26, 0, &v30);
    }
    v27 = *((_DWORD *)this + 238);
    rc.right = rc.left + v30 + 1;
    v29 = v27;
    v28 = (CREDialog *)*((_DWORD *)this + 28);
    rc.left = rc.left + v30 - 1;
    CREDialog::DrawRect(v28, &rc, v29, 1.0);
  }
}
