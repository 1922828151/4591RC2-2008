/*
 * func-name: ?RenderComposition@CREIMEEditBox@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100befd0
 * callers: none
 * callees: 0x1006ab80, 0x100a5480, 0x100b5850, 0x100b66a0, 0x100b6890
 */

void __thiscall CREIMEEditBox::RenderComposition(CREIMEEditBox *this, struct IDirect3DDevice9 *a2, float a3)
{
  int v4; // ebx
  bool v5; // zf
  void **v6; // edi
  int v7; // ebx
  struct CREElement *v8; // edi
  LONG v9; // ecx
  LONG v10; // edx
  CREDialog *v11; // ecx
  unsigned int v12; // eax
  double v13; // st6
  double v14; // st6
  unsigned int v15; // eax
  LONG top; // ecx
  LONG right; // edx
  const wchar_t *v18; // ebx
  int v19; // ebp
  int v20; // ebp
  unsigned int v21; // eax
  CREDialog *v22; // ecx
  int v23; // edi
  unsigned int v24; // ecx
  CREDialog *v25; // ecx
  unsigned int v26; // [esp-4h] [ebp-50h]
  int v27; // [esp+14h] [ebp-38h] BYREF
  unsigned __int8 **v28; // [esp+18h] [ebp-34h]
  int v29; // [esp+1Ch] [ebp-30h]
  int v30; // [esp+20h] [ebp-2Ch] BYREF
  int v31; // [esp+24h] [ebp-28h] BYREF
  int v32; // [esp+28h] [ebp-24h] BYREF
  struct tagRECT rc; // [esp+2Ch] [ebp-20h] BYREF
  struct tagRECT v34; // [esp+3Ch] [ebp-10h] BYREF

  v4 = *((_DWORD *)this + 187);
  v5 = *((_DWORD *)this + 135) == 0;
  v6 = (void **)((char *)this + 532);
  v27 = 0;
  if ( !v5 && (!*((_BYTE *)this + 548) || CREEditBox::CUniBuffer::Analyse((CREIMEEditBox *)((char *)this + 532)) >= 0) )
    CREEditBox::CUniBuffer::_ScriptStringCPtoX(v6[5], v4, 0, &v27);
  v5 = v6[2] == 0;
  v7 = *((_DWORD *)this + 190);
  v30 = 0;
  if ( !v5 && (!*((_BYTE *)v6 + 16) || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v6) >= 0) )
    CREEditBox::CUniBuffer::_ScriptStringCPtoX(v6[5], v7, 0, &v30);
  v8 = *(struct CREElement **)(*((_DWORD *)this + 30) + 4);
  v9 = *((_DWORD *)this + 142);
  v10 = *((_DWORD *)this + 144);
  rc.left = *((_DWORD *)this + 141) - v30 + v27;
  rc.right = rc.left;
  rc.top = v9;
  v11 = (CREDialog *)*((_DWORD *)this + 28);
  rc.bottom = v10;
  CREDialog::CalcTextRect(v11, CREIMEEditBox::s_CompString, v8, &rc, -1);
  if ( rc.right > *((_DWORD *)this + 143) )
    OffsetRect(&rc, *((_DWORD *)this + 141) - rc.left, rc.bottom - rc.top);
  CREIMEEditBox::s_ptCompString.x = rc.left;
  yBottom = rc.top;
  CREDialog::DrawRect(*((CREDialog **)this + 28), &rc, *((_DWORD *)this + 207), 1.0);
  v12 = *((_DWORD *)this + 206);
  *(float *)&v34.left = (double)BYTE2(v12) * 0.003921568859368563;
  v32 = (unsigned __int8)v12;
  *((_DWORD *)v8 + 45) = v34.left;
  *(float *)&v34.top = (double)BYTE1(v12) * 0.003921568859368563;
  v13 = (double)v32;
  v32 = HIBYTE(v12);
  *((_DWORD *)v8 + 46) = v34.top;
  *(float *)&v34.right = v13 * 0.003921568859368563;
  v14 = (double)v32;
  *((_DWORD *)v8 + 47) = v34.right;
  *(float *)&v34.bottom = 0.003921568859368563 * v14;
  *((_DWORD *)v8 + 48) = v34.bottom;
  CREDialog::DrawTextW(*((CREDialog **)this + 28), CREIMEEditBox::s_CompString, v8, &rc, 0, -1);
  v15 = *((_DWORD *)this + 209);
  *(float *)&v34.left = (double)BYTE2(v15) * 0.003921568859368563;
  *(float *)&v34.top = (double)BYTE1(v15) * 0.003921568859368563;
  v32 = HIBYTE(v15);
  *(float *)&v34.right = (double)(unsigned __int8)v15 * 0.003921568859368563;
  top = v34.top;
  right = v34.right;
  *((_DWORD *)v8 + 45) = v34.left;
  *((_DWORD *)v8 + 46) = top;
  *((_DWORD *)v8 + 47) = right;
  *(float *)&v34.bottom = 0.003921568859368563 * (double)HIBYTE(v15);
  *((_DWORD *)v8 + 48) = v34.bottom;
  v18 = CREIMEEditBox::s_CompString;
  CREIMEEditBox::s_nFirstTargetConv = -1;
  v5 = *CREIMEEditBox::s_CompString == 0;
  v28 = &CREIMEEditBox::s_abCompStringAttr;
  if ( !v5 )
  {
    v29 = 0;
    do
    {
      if ( *(_BYTE *)v28 == 1 )
      {
        v31 = 0;
        v19 = v18 - CREIMEEditBox::s_CompString;
        if ( dword_1123E230
          && (!byte_1123E238
           || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString) >= 0) )
        {
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E23C, v19, 0, &v31);
        }
        v32 = 0;
        v20 = v18 - CREIMEEditBox::s_CompString;
        if ( dword_1123E230
          && (!byte_1123E238
           || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString) >= 0) )
        {
          CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E23C, v20, 1, &v32);
        }
        v34.left = rc.left + v31;
        v21 = *((_DWORD *)this + 210);
        v34.right = rc.left + v32;
        v34.top = rc.top;
        v22 = (CREDialog *)*((_DWORD *)this + 28);
        v34.bottom = rc.bottom;
        CREDialog::DrawRect(v22, &v34, v21, 1.0);
        CREDialog::DrawTextW(*((CREDialog **)this + 28), v18, v8, &v34, 0, 1);
        if ( CREIMEEditBox::s_nFirstTargetConv == -1 )
          CREIMEEditBox::s_nFirstTargetConv = v29;
      }
      v28 = (unsigned __int8 **)((char *)v28 + 1);
      ++v29;
      ++v18;
    }
    while ( *v18 );
  }
  if ( *((_BYTE *)this + 744) )
  {
    v23 = CREIMEEditBox::s_nCompCaret;
    v27 = 0;
    if ( dword_1123E230
      && (!byte_1123E238 || CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString) >= 0) )
    {
      CREEditBox::CUniBuffer::_ScriptStringCPtoX(dword_1123E23C, v23, 0, &v27);
    }
    v24 = *((_DWORD *)this + 208);
    rc.right = rc.left + v27 + 1;
    v26 = v24;
    v25 = (CREDialog *)*((_DWORD *)this + 28);
    rc.left = rc.left + v27 - 1;
    CREDialog::DrawRect(v25, &rc, v26, 1.0);
  }
}
