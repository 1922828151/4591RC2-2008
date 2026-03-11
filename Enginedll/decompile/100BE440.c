/*
 * func-name: ?HandleMouse@CREIMEEditBox@@UAE_NIUtagPOINT@@IJ@Z
 * func-address: 0x100be440
 * callers: none
 * callees: 0x1006a760, 0x1006ad40, 0x1006ad60, 0x100971c0, 0x100a3050, 0x100a4590, 0x100a57a0, 0x100a57f0, 0x100ac790, 0x100b55d0
 */

bool __thiscall CREIMEEditBox::HandleMouse(CREIMEEditBox *this, int a2, POINT pt, unsigned int bVk, int a5)
{
  LONG y; // ebp
  int x; // esi
  struct REFontNode *Font; // ebx
  int v9; // edi
  struct Engine *v10; // eax
  HIMC Context; // eax
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
    return CREEditBox::HandleMouse(this, a2, (struct tagPOINT)__PAIR64__(y, x), bVk, a5);
  if ( !*((_BYTE *)this + 753)
    || !(*(int (__thiscall **)(CREIMEEditBox *, LONG, LONG))(*(_DWORD *)this + 124))(this, pt.x, pt.y) )
  {
    return 0;
  }
  if ( !*((_BYTE *)this + 92) )
    CREDialog::RequestFocus(*((CREDialog **)this + 28), this);
  Font = CREDialog::GetFont(*((CREDialog **)this + 28), *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 30) + 36) + 4));
  CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString, dword_1123E230, 0, &pt.x);
  if ( CREIMEEditBox::s_ptCompString.x <= x
    && yBottom <= y
    && CREIMEEditBox::s_ptCompString.x + pt.x > x
    && yBottom + *((_DWORD *)Font + 132) > y )
  {
    CREEditBox::CUniBuffer::XtoCP((void **)&CREIMEEditBox::s_CompString, x - CREIMEEditBox::s_ptCompString.x, &a2, &a5);
    v9 = a2;
    if ( a5 && a2 < dword_1123E230 )
      v9 = a2 + 1;
    v10 = Engine::Instance();
    Context = (HIMC)CREIMEEditBox::_ImmGetContext(*((void **)v10 + 35));
    v12 = (int)Context;
    if ( !Context )
      return 1;
    CREIMEEditBox::_ImmNotifyIME(Context, 0x11u, 0, 0);
    v13 = Engine::Instance();
    CREIMEEditBox::_ImmReleaseContext(*((HIMC *)v13 + 35), v12);
    v14 = (unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF;
    if ( v14 != 4 )
    {
      if ( v14 != 17 )
        return 1;
      if ( CREIMEEditBox::s_nFirstTargetConv != -1 )
      {
        for ( i = 0; dword_1123DCA4[i] <= a2; ++i )
          ;
        for ( j = 0; dword_1123DCA4[j] <= CREIMEEditBox::s_nFirstTargetConv; ++j )
          ;
        LOBYTE(bVk) = 2 * (i > j) + 37;
        v17 = abs32(i - j);
        if ( v17 > 0 )
        {
          v18 = bVk;
          do
          {
            --v17;
            CREIMEEditBox::SendKey(v18);
          }
          while ( v17 > 0 );
        }
        return 1;
      }
    }
    LOBYTE(bVk) = 2 * (v9 > CREIMEEditBox::s_nCompCaret) + 37;
    v20 = abs32(v9 - CREIMEEditBox::s_nCompCaret);
    if ( v20 > 0 )
    {
      v21 = bVk;
      do
      {
        --v20;
        CREIMEEditBox::SendKey(v21);
      }
      while ( v20 > 0 );
      return 1;
    }
    return 1;
  }
  if ( !byte_11240AC8 || !PtInRect(&rc, (POINT)__PAIR64__(y, x)) )
    return CREEditBox::HandleMouse(this, a2, (struct tagPOINT)__PAIR64__(y, x), bVk, a5);
  if ( CREIMEEditBox::s_bVerticalCand )
  {
    v22 = (y - rc.top) / *((_DWORD *)Font + 132);
    if ( v22 >= dword_11240AB8 )
      return 1;
    if ( ((unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF) == 4 )
    {
LABEL_40:
      CREIMEEditBox::SendKey(v22 + 49);
      return 1;
    }
    if ( ((unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF) != 0x11 )
    {
      if ( ((unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF) != 0x12 )
        return 1;
      goto LABEL_40;
    }
    LOBYTE(a2) = 2 * (v22 > dword_11240ABC) + 38;
    v23 = abs32(v22 - dword_11240ABC);
    if ( v23 > 0 )
    {
      v24 = a2;
      v25 = v23;
      do
      {
        CREIMEEditBox::SendKey(v24);
        --v25;
      }
      while ( v25 );
    }
    CREIMEEditBox::SendKey(0x27u);
    CREIMEEditBox::SendKey(0x25u);
    return 1;
  }
  else
  {
    CREEditBox::CUniBuffer::XtoCP((void **)&dword_11240A98, x - rc.left, &a5, (int *)&bVk);
    v26 = dword_11240AB8 - 1;
    v27 = 0;
    v28 = 0;
    a2 = dword_11240AB8 - 1;
    if ( dword_11240AB8 )
    {
      v29 = &CREIMEEditBox::s_CandList;
      while ( a5 >= v27 )
      {
        v30 = lstrlenW(v29);
        ++v28;
        v29 += 256;
        v27 += v30 + 1;
        if ( v28 >= dword_11240AB8 )
          goto LABEL_51;
      }
      a2 = v28 - 1;
LABEL_51:
      v26 = a2;
    }
    v31 = (unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF;
    if ( v31 != 4 && v31 != 18 )
      return 1;
    CREIMEEditBox::SendKey(v26 + 49);
    return 1;
  }
}
