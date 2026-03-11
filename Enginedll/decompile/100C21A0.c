/*
 * func-name: ?HandleMouse@CMLIMEEditBox@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100c21a0
 * callers: none
 * callees: 0x1006a760, 0x1006ad40, 0x1006ad60, 0x100971c0, 0x100a57a0, 0x100a57f0, 0x100a7aa0, 0x100ae570, 0x100b55d0
 */

bool __thiscall CMLIMEEditBox::HandleMouse(CMLIMEEditBox *this, int a2, POINT pt, unsigned int bVk, int a5)
{
  LONG y; // ebp
  int x; // esi
  struct REFontNode *Font; // ebx
  int v9; // edi
  struct Engine *v10; // eax
  int *Context; // eax
  int v12; // esi
  struct Engine *v13; // eax
  int v14; // eax
  int i; // eax
  int j; // ecx
  int v17; // esi
  BYTE v18; // di
  int v20; // esi
  BYTE v21; // di
  int v22; // eax
  int v23; // eax
  BYTE v24; // di
  int v25; // esi
  char v26; // cl
  int v27; // esi
  unsigned int v28; // edi
  const WCHAR *v29; // ebp
  int v30; // eax
  int v31; // eax

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  y = pt.y;
  x = pt.x;
  if ( a2 != 513 && a2 != 515 )
    return CMultiLineEB::HandleMouse(this, a2, (struct tagPOINT)__PAIR64__(y, x), bVk, a5);
  Font = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 30) + 36) + 4));
  CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString, dword_1123E214, 0, &pt.x);
  if ( CMLIMEEditBox::s_ptCompString.x <= x
    && dword_1123DB94 <= y
    && CMLIMEEditBox::s_ptCompString.x + pt.x > x
    && dword_1123DB94 + *((_DWORD *)Font + 132) > y )
  {
    CREEditBox::CUniBuffer::XtoCP((void **)&CMLIMEEditBox::s_CompString, x - CMLIMEEditBox::s_ptCompString.x, &a2, &a5);
    v9 = a2;
    if ( a5 && a2 < dword_1123E214 )
      v9 = a2 + 1;
    v10 = Engine::Instance();
    Context = (int *)CMLIMEEditBox::_ImmGetContext(*((void **)v10 + 35));
    v12 = (int)Context;
    if ( !Context )
      return 1;
    CMLIMEEditBox::_ImmNotifyIME(Context, (char *)0x11, 0, 0);
    v13 = Engine::Instance();
    CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v13 + 35), v12);
    v14 = (unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF;
    if ( v14 != 4 )
    {
      if ( v14 != 17 )
        return 1;
      if ( CMLIMEEditBox::s_nFirstTargetConv != -1 )
      {
        for ( i = 0; dword_1123D744[i] <= a2; ++i )
          ;
        for ( j = 0; dword_1123D744[j] <= CMLIMEEditBox::s_nFirstTargetConv; ++j )
          ;
        LOBYTE(bVk) = 2 * (i > j) + 37;
        v17 = abs32(i - j);
        if ( v17 > 0 )
        {
          v18 = bVk;
          do
          {
            --v17;
            CMLIMEEditBox::SendKey(v18);
          }
          while ( v17 > 0 );
        }
        return 1;
      }
    }
    LOBYTE(bVk) = 2 * (v9 > CMLIMEEditBox::s_nCompCaret) + 37;
    v20 = abs32(v9 - CMLIMEEditBox::s_nCompCaret);
    if ( v20 > 0 )
    {
      v21 = bVk;
      do
      {
        --v20;
        CMLIMEEditBox::SendKey(v21);
      }
      while ( v20 > 0 );
      return 1;
    }
    return 1;
  }
  if ( !byte_1123F680 || !PtInRect(&stru_1123F684, (POINT)__PAIR64__(y, x)) )
    return CMultiLineEB::HandleMouse(this, a2, (struct tagPOINT)__PAIR64__(y, x), bVk, a5);
  if ( CMLIMEEditBox::s_bVerticalCand )
  {
    v22 = (y - stru_1123F684.top) / *((_DWORD *)Font + 132);
    if ( v22 >= dword_1123F670 )
      return 1;
    if ( ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) == 4 )
    {
LABEL_36:
      CMLIMEEditBox::SendKey(v22 + 49);
      return 1;
    }
    if ( ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) != 0x11 )
    {
      if ( ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) != 0x12 )
        return 1;
      goto LABEL_36;
    }
    LOBYTE(a2) = 2 * (v22 > dword_1123F674) + 38;
    v23 = abs32(v22 - dword_1123F674);
    if ( v23 > 0 )
    {
      v24 = a2;
      v25 = v23;
      do
      {
        CMLIMEEditBox::SendKey(v24);
        --v25;
      }
      while ( v25 );
    }
    CMLIMEEditBox::SendKey(0x27u);
    CMLIMEEditBox::SendKey(0x25u);
    return 1;
  }
  else
  {
    CREEditBox::CUniBuffer::XtoCP((void **)&dword_1123F650, x - stru_1123F684.left, &a5, (int *)&bVk);
    v26 = dword_1123F670 - 1;
    v27 = 0;
    v28 = 0;
    a2 = dword_1123F670 - 1;
    if ( dword_1123F670 )
    {
      v29 = &CMLIMEEditBox::s_CandList;
      while ( a5 >= v27 )
      {
        v30 = lstrlenW(v29);
        ++v28;
        v29 += 256;
        v27 += v30 + 1;
        if ( v28 >= dword_1123F670 )
          goto LABEL_47;
      }
      a2 = v28 - 1;
LABEL_47:
      v26 = a2;
    }
    v31 = (unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF;
    if ( v31 != 4 && v31 != 18 )
      return 1;
    CMLIMEEditBox::SendKey(v26 + 49);
    return 1;
  }
}
