/*
 * func-name: ?MsgProc@CREIMEEditBox@@UAE_NIIJ@Z
 * func-address: 0x100acec0
 * callers: none
 * callees: 0x1006a760, 0x1006ad40, 0x1006ad60, 0x1006b8a0, 0x100971c0, 0x100a25a0, 0x100a4610, 0x100a4950, 0x100a4ad0, 0x100a4d40, 0x100a56d0, 0x100a59e0, 0x100ac9a0, 0x100acc90, 0x101a251c
 */

char __thiscall CREIMEEditBox::MsgProc(CREIMEEditBox *this, unsigned int a2, int a3, CREIMEEditBox *a4)
{
  char result; // al
  HWND Focus; // eax
  struct Engine *v7; // eax
  HIMC Context; // eax
  HIMC v9; // ebp
  unsigned int CandidateListW; // eax
  unsigned int v11; // edi
  HANDLE ProcessHeap; // eax
  struct tagCANDIDATELIST *v13; // esi
  unsigned int dwSelection; // edx
  unsigned int dwPageSize; // ecx
  unsigned int v16; // ebp
  _WORD *v17; // edi
  DWORD *v18; // ebx
  _WORD *v19; // eax
  bool v20; // zf
  __int16 v21; // dx
  __int16 *v22; // ecx
  int v23; // esi
  HANDLE v24; // eax
  struct Engine *v25; // eax
  WCHAR *v26; // edi
  unsigned int ImeId; // eax
  struct Engine *v28; // eax
  HIMC v29; // eax
  HIMC v30; // ebp
  int CompositionStringW; // eax
  int v32; // eax
  int v33; // eax
  const WCHAR *v34; // ecx
  int v35; // edi
  __int16 *v36; // esi
  int v37; // eax
  unsigned int v38; // esi
  const WCHAR *v39; // edi
  int v40; // eax
  int v41; // eax
  int v42; // esi
  struct Engine *v43; // eax
  struct Engine *v44; // eax
  struct Engine *v45; // eax
  WPARAM v46; // [esp-10h] [ebp-268h]
  LPARAM v47; // [esp-Ch] [ebp-264h]
  SIZE_T v48; // [esp-Ch] [ebp-264h]
  struct tagCANDIDATELIST *v49; // [esp-Ch] [ebp-264h]
  char v50; // [esp+Bh] [ebp-24Dh]
  CREEditBox *v52; // [esp+Ch] [ebp-24Ch]
  HIMC v53; // [esp+10h] [ebp-248h]
  HIMC v54; // [esp+10h] [ebp-248h]
  unsigned int v55; // [esp+14h] [ebp-244h]
  WCHAR String2[32]; // [esp+18h] [ebp-240h] BYREF
  WCHAR String[256]; // [esp+58h] [ebp-200h] BYREF

  if ( *((_BYTE *)this + 156) && *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v50 = 0;
    if ( !CREIMEEditBox::s_bEnableImeSystem )
      return CREEditBox::MsgProc(this, a2, a3, (int)a4);
    if ( a2 <= 0x10E )
    {
      if ( a2 == 270 )
      {
        CREIMEEditBox::TruncateCompString(this, 1, 0);
        CREIMEEditBox::ResetCompositionString();
        result = 0;
        CREEditBox::s_bHideCaret = 0;
        return result;
      }
      switch ( a2 )
      {
        case 0x100u:
        case 0x104u:
          goto LABEL_22;
        case 0x101u:
        case 0x105u:
          if ( dword_102816B0 >= 0 && a3 != 18 && GetAsyncKeyState(18) >= 0 )
          {
            v47 = dword_102816B0 & 0x1FF0000 | 0xC0000001;
            v46 = 18;
LABEL_21:
            Focus = GetFocus();
            PostMessageW(Focus, 0x101u, v46, v47);
            goto LABEL_22;
          }
          if ( (dword_102816AC & 0x80000000) == 0 && a3 != 17 && GetAsyncKeyState(17) >= 0 )
          {
            v47 = dword_102816AC & 0x1FF0000 | 0xC0000001;
            v46 = 17;
            goto LABEL_21;
          }
          if ( (dword_102816A8 & 0x80000000) == 0 && a3 != 16 && GetAsyncKeyState(16) >= 0 )
          {
            v47 = dword_102816A8 & 0x1FF0000 | 0xC0000001;
            v46 = 16;
            goto LABEL_21;
          }
LABEL_22:
          switch ( a3 )
          {
            case 16:
              dword_102816A8 = (int)a4;
              break;
            case 17:
              dword_102816AC = (int)a4;
              break;
            case 18:
              dword_102816B0 = (int)a4;
              break;
          }
          break;
        default:
          return CREEditBox::MsgProc(this, a2, a3, (int)a4);
      }
      return CREEditBox::MsgProc(this, a2, a3, (int)a4);
    }
    if ( a2 != 271 )
    {
      if ( a2 != 642 )
        return CREEditBox::MsgProc(this, a2, a3, (int)a4);
      switch ( a3 )
      {
        case 3:
        case 5:
          byte_11240AC8 = 1;
          v50 = 1;
          v7 = Engine::Instance();
          Context = (HIMC)CREIMEEditBox::_ImmGetContext(*((void **)v7 + 35));
          v9 = Context;
          v53 = Context;
          if ( !Context )
            return v50;
          CREIMEEditBox::s_bShowReadingWindow = 0;
          CandidateListW = CREIMEEditBox::_ImmGetCandidateListW(Context, 0, 0, 0);
          v11 = CandidateListW;
          if ( !CandidateListW )
            return v50;
          v48 = CandidateListW;
          ProcessHeap = GetProcessHeap();
          v13 = (struct tagCANDIDATELIST *)HeapAlloc(ProcessHeap, 0, v48);
          CREIMEEditBox::_ImmGetCandidateListW(v9, 0, v13, v11);
          if ( !v13 )
            return v50;
          dwSelection = v13->dwSelection;
          dword_11240ABC = dwSelection;
          dword_11240AB8 = v13->dwCount;
          dwPageSize = v13->dwPageSize;
          if ( dwPageSize >= 0xA )
            dwPageSize = 10;
          dword_11240AC0 = dwPageSize;
          if ( ((unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF) == 0x11 )
            v16 = dwPageSize * (dwSelection / dwPageSize);
          else
            v16 = v13->dwSelection;
          if ( (_WORD)CREIMEEditBox::s_hklCurrent != 2052 || CREIMEEditBox::GetImeId(0) )
            dword_11240ABC -= v16;
          else
            dword_11240ABC = -1;
          memset(&CREIMEEditBox::s_CandList, 0, 0x1400u);
          v52 = 0;
          if ( v16 < v13->dwCount )
          {
            v17 = &unk_1123F69A;
            v18 = &v13->dwOffset[v16];
            v55 = 1 - v16;
            do
            {
              if ( (unsigned int)v52 >= dword_11240AC0 )
                break;
              v19 = v17;
              v20 = !CREIMEEditBox::s_bVerticalCand;
              *(v17 - 1) = (v55 + v16) % 0xA + 48;
              if ( !v20 )
              {
                *v17 = 32;
                v19 = v17 + 1;
              }
              v21 = *(_WORD *)((char *)&v13->dwSize + *v18);
              v22 = (__int16 *)((char *)v13 + *v18);
              if ( v21 )
              {
                do
                {
                  ++v22;
                  *v19 = v21;
                  v21 = *v22;
                  ++v19;
                }
                while ( *v22 );
              }
              if ( !CREIMEEditBox::s_bVerticalCand )
                *v19++ = 32;
              v52 = (CREEditBox *)((char *)v52 + 1);
              ++v16;
              *v19 = 0;
              ++v18;
              v17 += 256;
            }
            while ( v16 < v13->dwCount );
          }
          dword_11240AB8 = v13->dwCount - v13->dwPageStart;
          if ( dword_11240AB8 > v13->dwPageSize )
            dword_11240AB8 = v13->dwPageSize;
          v49 = v13;
          v23 = 0;
          v24 = GetProcessHeap();
          HeapFree(v24, 0, v49);
          v25 = Engine::Instance();
          CREIMEEditBox::_ImmReleaseContext(*((HIMC *)v25 + 35), (int)v53);
          if ( ((unsigned __int16)CREIMEEditBox::s_hklCurrent & 0x3FF) == 0x12
            || (_WORD)CREIMEEditBox::s_hklCurrent == 1028 && !CREIMEEditBox::GetImeId(0) )
          {
            dword_11240ABC = -1;
          }
          if ( CREIMEEditBox::s_bVerticalCand )
            return v50;
          memset(String, 0, sizeof(String));
          dword_11240AB0 = 0;
          dword_11240AB4 = 0;
          v26 = &CREIMEEditBox::s_CandList;
          do
          {
            if ( !*v26 )
              break;
            sub_100A25A0(String2, (size_t)L"%s ", (wchar_t)v26);
            if ( dword_11240ABC == v23 )
            {
              dword_11240AB0 = lstrlenW(String);
              dword_11240AB4 = lstrlenW(String2) - 1;
            }
            lstrcatW(String, String2);
            ++v23;
            v26 += 256;
          }
          while ( v23 < 10 );
          String2[lstrlenW(String) + 31] = 0;
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)&dword_11240A98, String);
          return 1;
        case 4:
          byte_11240AC8 = 0;
          if ( !CREIMEEditBox::s_bShowReadingWindow )
          {
            dword_11240AB8 = 0;
            memset(&CREIMEEditBox::s_CandList, 0, 0x1400u);
          }
          return 1;
        case 6:
        case 8:
          CREIMEEditBox::CheckToggleState();
          return 0;
        case 14:
          if ( !byte_11240AC8 )
            CREIMEEditBox::GetPrivateReadingString();
          ImeId = CREIMEEditBox::GetImeId(0);
          if ( ImeId > 0x5000404 )
          {
            if ( ImeId > 0x5030804 )
            {
              if ( ImeId != 100664324 )
                return v50;
            }
            else if ( ImeId != 84084740 && ImeId != 83952644 && ImeId != 84018180 )
            {
              return 0;
            }
          }
          else if ( ImeId != 83887108 )
          {
            if ( ImeId > 0x4020804 )
            {
              if ( ImeId != 67306500 && ImeId != 67372036 )
                return v50;
            }
            else if ( ImeId != 67241988 && ImeId != 67176452 && ImeId != 67240964 )
            {
              return 0;
            }
            if ( a4 == (CREIMEEditBox *)1 || a4 == (CREIMEEditBox *)2 )
              return 1;
            return v50;
          }
          if ( a4 == (CREIMEEditBox *)16
            || a4 == (CREIMEEditBox *)17
            || a4 == (CREIMEEditBox *)26
            || a4 == (CREIMEEditBox *)27
            || a4 == (CREIMEEditBox *)28 )
          {
            return 1;
          }
          return v50;
        default:
          return 1;
      }
    }
    v50 = 1;
    v28 = Engine::Instance();
    v29 = (HIMC)CREIMEEditBox::_ImmGetContext(*((void **)v28 + 35));
    v30 = v29;
    v54 = v29;
    if ( v29 )
    {
      if ( ((unsigned __int16)a4 & 0x800) != 0 )
      {
        CompositionStringW = CREIMEEditBox::_ImmGetCompositionStringW(v29, 0x800u, String, 0x200u);
        if ( CompositionStringW > 0 )
        {
          String[(unsigned int)CompositionStringW >> 1] = 0;
          CREIMEEditBox::TruncateCompString(this, 0, wcslen(String));
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString, String);
          CREIMEEditBox::ResetCompositionString();
        }
      }
      if ( ((unsigned __int8)a4 & 8) != 0 )
      {
        v32 = CREIMEEditBox::_ImmGetCompositionStringW(v30, 8u, String, 0x200u);
        if ( v32 > 0 )
        {
          String[(unsigned int)v32 >> 1] = 0;
          CREIMEEditBox::TruncateCompString(this, 0, wcslen(String));
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)&CREIMEEditBox::s_CompString, String);
          v33 = CREIMEEditBox::_ImmGetCompositionStringW(v30, 0x10u, &CREIMEEditBox::s_abCompStringAttr, 0x100u);
          if ( v33 > 0 )
            *((_BYTE *)&CREIMEEditBox::s_abCompStringAttr + v33) = 0;
          if ( (_WORD)CREIMEEditBox::s_hklCurrent == 1028 && !CREIMEEditBox::GetImeId(0) )
          {
            if ( lstrlenW(CREIMEEditBox::s_CompString) )
            {
              v34 = CREIMEEditBox::s_CompString;
              dword_11240AB8 = 4;
              dword_11240ABC = -1;
              v35 = 3;
              v36 = &word_1123FC98;
              do
              {
                v37 = lstrlenW(v34);
                v34 = CREIMEEditBox::s_CompString;
                if ( v35 <= v37 - 1 )
                {
                  byte_1123E238 = 1;
                  *v36 = CREIMEEditBox::s_CompString[v35];
                  v36[1] = 0;
                }
                else
                {
                  *v36 = 0;
                }
                v36 -= 256;
                --v35;
              }
              while ( (int)v36 >= (int)&CREIMEEditBox::s_CandList );
              dword_11240AC0 = 10;
              *(_DWORD *)v34 = 0;
              *((_DWORD *)CREIMEEditBox::s_CompString + 1) = 0;
              v38 = 0;
              CREIMEEditBox::s_bShowReadingWindow = 1;
              CREIMEEditBox::s_bHorizontalReading = 1;
              dword_11240AC4 = -1;
              CREIMEEditBox::s_wszReadingString = 0;
              if ( dword_11240AB8 )
              {
                v39 = &CREIMEEditBox::s_CandList;
                do
                {
                  if ( dword_11240ABC == v38 )
                    dword_11240AC4 = lstrlenW(&CREIMEEditBox::s_wszReadingString);
                  lstrcatW(&CREIMEEditBox::s_wszReadingString, v39);
                  ++v38;
                  v39 += 256;
                }
                while ( v38 < dword_11240AB8 );
              }
            }
            else
            {
              dword_11240AB8 = 0;
            }
          }
          v40 = CREIMEEditBox::_ImmGetCompositionStringW(v54, 0x80u, 0, 0);
          CREIMEEditBox::s_nCompCaret = v40;
          if ( v40 < 0 )
          {
            v40 = 0;
            CREIMEEditBox::s_nCompCaret = 0;
          }
          if ( CREIMEEditBox::s_bInsertOnType )
          {
            v41 = lstrlenW(&CREIMEEditBox::s_CompString[v40]);
            if ( v41 > 0 )
            {
              v42 = v41;
              do
              {
                v43 = Engine::Instance();
                SendMessageW(*((HWND *)v43 + 35), 0x100u, 0x25u, 0);
                --v42;
              }
              while ( v42 );
            }
            v44 = Engine::Instance();
            SendMessageW(*((HWND *)v44 + 35), 0x101u, 0x25u, 0);
          }
        }
        CREEditBox::ResetCaretBlink(this);
        v30 = v54;
      }
      v45 = Engine::Instance();
      CREIMEEditBox::_ImmReleaseContext(*((HIMC *)v45 + 35), (int)v30);
    }
    return v50;
  }
  return 0;
}
