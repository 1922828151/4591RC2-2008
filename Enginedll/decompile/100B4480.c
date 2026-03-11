/*
 * func-name: ?StaticMsgProc@CMLIMEEditBox@@SA_NIIJ@Z
 * func-address: 0x100b4480
 * callers: none
 * callees: 0x10036700, 0x1006a760, 0x1006ad40, 0x100971c0, 0x100a7ea0, 0x100a7f90, 0x100a8020, 0x100ce930, 0x101a24ac, 0x101a251c, 0x101a253a
 */

bool __cdecl CMLIMEEditBox::StaticMsgProc(unsigned int a1, unsigned int a2)
{
  int v3; // esi
  struct Engine *v4; // eax
  HIMC Context; // eax
  int v6; // esi
  struct Engine *v7; // eax
  unsigned int KeyboardLayoutList; // ebx
  HKL *v9; // eax
  HKL *v10; // edi
  int v11; // esi
  __int16 v12; // ax
  int v13; // eax
  _WORD *v14; // ecx
  LCID v15; // ecx
  HKL v16; // [esp+4h] [ebp-18Ch] BYREF
  WCHAR String1[3]; // [esp+8h] [ebp-188h] BYREF
  wchar_t Destination[65]; // [esp+Eh] [ebp-182h] BYREF
  WCHAR LCData[128]; // [esp+90h] [ebp-100h] BYREF

  if ( !CMLIMEEditBox::s_bEnableImeSystem )
    return 0;
  if ( a1 > 0x10D )
    return a1 == 271;
  if ( a1 == 269 )
  {
    CMLIMEEditBox::ResetCompositionString();
    CREEditBox::s_bHideCaret = 1;
    return 1;
  }
  if ( a1 != 28 )
  {
    if ( a1 == 81 )
    {
      v3 = (unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF;
      CMLIMEEditBox::CheckToggleState();
      if ( v3 != ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) )
        CMLIMEEditBox::s_bInsertOnType = ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) == 18;
      CMLIMEEditBox::SetupImeApi();
      if ( CMLIMEEditBox::_ShowReadingWindow )
      {
        v4 = Engine::Instance();
        Context = (HIMC)CMLIMEEditBox::_ImmGetContext(*((void **)v4 + 35));
        v6 = (int)Context;
        if ( Context )
        {
          CMLIMEEditBox::_ShowReadingWindow(Context, 0);
          v7 = Engine::Instance();
          CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v7 + 35), v6);
        }
      }
      return 1;
    }
    return 0;
  }
  if ( !a2 )
    return 0;
  KeyboardLayoutList = GetKeyboardLayoutList(0, 0);
  sub_10036700((int)&CMLIMEEditBox::s_Locale);
  v9 = (HKL *)operator new(4 * KeyboardLayoutList);
  v10 = v9;
  if ( !v9 )
    return 0;
  GetKeyboardLayoutList(KeyboardLayoutList, v9);
  v11 = 0;
  if ( !KeyboardLayoutList )
    goto LABEL_36;
  while ( 1 )
  {
    v12 = (int)v10[v11] & 0x3FF;
    if ( (v12 == 4 || v12 == 17 || v12 == 18) && !CMLIMEEditBox::_ImmIsIME(v10[v11]) )
      goto LABEL_35;
    v13 = 0;
    if ( dword_1123E244 > 0 )
      break;
LABEL_24:
    v16 = v10[v11];
    memset(LCData, 0, sizeof(LCData));
    v15 = LOWORD(v10[v11]);
    switch ( (int)v10[v11] & 0x3FF )
    {
      case 4:
        if ( v15 >> 10 == 1 )
        {
          lstrcpyW(String1, &word_10281670);
          break;
        }
        if ( v15 >> 10 == 2 )
        {
          lstrcpyW(String1, word_1028166A);
          break;
        }
LABEL_31:
        GetLocaleInfoW(v15, 3u, LCData, 128);
        String1[0] = LCData[0];
        String1[1] = towlower(LCData[1]);
        String1[2] = 0;
        break;
      case 17:
        lstrcpyW(String1, word_1028167C);
        break;
      case 18:
        lstrcpyW(String1, word_10281676);
        break;
      default:
        goto LABEL_31;
    }
    GetLocaleInfoW(LOWORD(v10[v11]), 2u, LCData, 128);
    wcsncpy(Destination, LCData, 0x40u);
    Destination[63] = 0;
    sub_100CE930(&v16);
LABEL_35:
    if ( ++v11 >= KeyboardLayoutList )
      goto LABEL_36;
  }
  v14 = CMLIMEEditBox::s_Locale;
  while ( *v14 != LOWORD(v10[v11]) )
  {
    ++v13;
    v14 += 70;
    if ( v13 >= dword_1123E244 )
      goto LABEL_24;
  }
LABEL_36:
  operator delete[](v10);
  return 0;
}
