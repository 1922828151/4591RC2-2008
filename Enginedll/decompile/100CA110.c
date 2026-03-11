/*
 * func-name: ?MsgProc@CMLIMEEditBox@@UAE_NIIJ@Z
 * func-address: 0x100ca110
 * callers: none
 * callees: 0x1006a760, 0x1006ad40, 0x1006ad60, 0x1006b8a0, 0x100971c0, 0x100a25a0, 0x100a56d0, 0x100a59e0, 0x100a7b40, 0x100a7ea0, 0x100a8020, 0x100a8050, 0x100a8190, 0x100a8400, 0x100c95f0, 0x101a251c
 */

char __thiscall CMLIMEEditBox::MsgProc(CMLIMEEditBox *this, unsigned int a2, int a3, CMLIMEEditBox *a4)
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
  unsigned int dwPageStart; // ebp
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
  int v41; // esi
  struct Engine *v42; // eax
  struct Engine *v43; // eax
  struct Engine *v44; // eax
  WPARAM v45; // [esp-10h] [ebp-268h]
  LPARAM v46; // [esp-Ch] [ebp-264h]
  SIZE_T v47; // [esp-Ch] [ebp-264h]
  struct tagCANDIDATELIST *v48; // [esp-Ch] [ebp-264h]
  char v49; // [esp+Bh] [ebp-24Dh]
  CREEditBox *v51; // [esp+Ch] [ebp-24Ch]
  HIMC v52; // [esp+10h] [ebp-248h]
  HIMC v53; // [esp+10h] [ebp-248h]
  unsigned int v54; // [esp+14h] [ebp-244h]
  WCHAR String2[32]; // [esp+18h] [ebp-240h] BYREF
  WCHAR String[256]; // [esp+58h] [ebp-200h] BYREF

  if ( *((_BYTE *)this + 156) && *((_BYTE *)this + 90) && !*((_BYTE *)this + 89) )
  {
    v49 = 0;
    if ( !CMLIMEEditBox::s_bEnableImeSystem )
      return CMultiLineEB::MsgProc(this, a2, a3, (int)a4);
    if ( a2 <= 0x10E )
    {
      if ( a2 == 270 )
      {
        CMLIMEEditBox::TruncateCompString(this, 1, 0);
        CMLIMEEditBox::ResetCompositionString();
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
          if ( dword_102816D4 >= 0 && a3 != 18 && GetAsyncKeyState(18) >= 0 )
          {
            v46 = dword_102816D4 & 0x1FF0000 | 0xC0000001;
            v45 = 18;
LABEL_21:
            Focus = GetFocus();
            PostMessageW(Focus, 0x101u, v45, v46);
            goto LABEL_22;
          }
          if ( (dword_102816D0 & 0x80000000) == 0 && a3 != 17 && GetAsyncKeyState(17) >= 0 )
          {
            v46 = dword_102816D0 & 0x1FF0000 | 0xC0000001;
            v45 = 17;
            goto LABEL_21;
          }
          if ( (dword_102816CC & 0x80000000) == 0 && a3 != 16 && GetAsyncKeyState(16) >= 0 )
          {
            v46 = dword_102816CC & 0x1FF0000 | 0xC0000001;
            v45 = 16;
            goto LABEL_21;
          }
LABEL_22:
          switch ( a3 )
          {
            case 16:
              dword_102816CC = (int)a4;
              break;
            case 17:
              dword_102816D0 = (int)a4;
              break;
            case 18:
              dword_102816D4 = (int)a4;
              break;
          }
          break;
        default:
          return CMultiLineEB::MsgProc(this, a2, a3, (int)a4);
      }
      return CMultiLineEB::MsgProc(this, a2, a3, (int)a4);
    }
    if ( a2 != 271 )
    {
      if ( a2 != 642 )
        return CMultiLineEB::MsgProc(this, a2, a3, (int)a4);
      switch ( a3 )
      {
        case 3:
        case 5:
          byte_1123F680 = 1;
          v49 = 1;
          v7 = Engine::Instance();
          Context = (HIMC)CMLIMEEditBox::_ImmGetContext(*((void **)v7 + 35));
          v9 = Context;
          v52 = Context;
          if ( !Context )
            return v49;
          CMLIMEEditBox::s_bShowReadingWindow = 0;
          CandidateListW = CMLIMEEditBox::_ImmGetCandidateListW(Context, 0, 0, 0);
          v11 = CandidateListW;
          if ( !CandidateListW )
            return v49;
          v47 = CandidateListW;
          ProcessHeap = GetProcessHeap();
          v13 = (struct tagCANDIDATELIST *)HeapAlloc(ProcessHeap, 0, v47);
          CMLIMEEditBox::_ImmGetCandidateListW(v9, 0, v13, v11);
          if ( !v13 )
            return v49;
          dwSelection = v13->dwSelection;
          dword_1123F674 = dwSelection;
          dword_1123F670 = v13->dwCount;
          dwPageSize = v13->dwPageSize;
          if ( dwPageSize >= 0xA )
            dwPageSize = 10;
          dword_1123F678 = dwPageSize;
          if ( ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) == 0x11 )
            dwPageStart = dwPageSize * (dwSelection / dwPageSize);
          else
            dwPageStart = v13->dwPageStart;
          if ( (_WORD)CMLIMEEditBox::s_hklCurrent != 2052 || CMLIMEEditBox::GetImeId(0) )
            dword_1123F674 -= dwPageStart;
          else
            dword_1123F674 = -1;
          memset(&CMLIMEEditBox::s_CandList, 0, 0x1400u);
          v51 = 0;
          if ( dwPageStart < v13->dwCount )
          {
            v17 = &unk_1123E252;
            v18 = &v13->dwOffset[dwPageStart];
            v54 = 1 - dwPageStart;
            do
            {
              if ( (unsigned int)v51 >= dword_1123F678 )
                break;
              v19 = v17;
              v20 = !CMLIMEEditBox::s_bVerticalCand;
              *(v17 - 1) = (v54 + dwPageStart) % 0xA + 48;
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
              if ( !CMLIMEEditBox::s_bVerticalCand )
                *v19++ = 32;
              v51 = (CREEditBox *)((char *)v51 + 1);
              ++dwPageStart;
              *v19 = 0;
              ++v18;
              v17 += 256;
            }
            while ( dwPageStart < v13->dwCount );
          }
          dword_1123F670 = v13->dwCount - v13->dwPageStart;
          if ( dword_1123F670 > v13->dwPageSize )
            dword_1123F670 = v13->dwPageSize;
          v48 = v13;
          v23 = 0;
          v24 = GetProcessHeap();
          HeapFree(v24, 0, v48);
          v25 = Engine::Instance();
          CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v25 + 35), (int)v52);
          if ( ((unsigned __int16)CMLIMEEditBox::s_hklCurrent & 0x3FF) == 0x12
            || (_WORD)CMLIMEEditBox::s_hklCurrent == 1028 && !CMLIMEEditBox::GetImeId(0) )
          {
            dword_1123F674 = -1;
          }
          if ( CMLIMEEditBox::s_bVerticalCand )
            return v49;
          memset(String, 0, sizeof(String));
          dword_1123F668 = 0;
          dword_1123F66C = 0;
          v26 = &CMLIMEEditBox::s_CandList;
          do
          {
            if ( !*v26 )
              break;
            sub_100A25A0(String2, (size_t)L"%s ", (wchar_t)v26);
            if ( dword_1123F674 == v23 )
            {
              dword_1123F668 = lstrlenW(String);
              dword_1123F66C = lstrlenW(String2) - 1;
            }
            lstrcatW(String, String2);
            ++v23;
            v26 += 256;
          }
          while ( v23 < 10 );
          String2[lstrlenW(String) + 31] = 0;
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)&dword_1123F650, String);
          return 1;
        case 4:
          byte_1123F680 = 0;
          if ( !CMLIMEEditBox::s_bShowReadingWindow )
          {
            dword_1123F670 = 0;
            memset(&CMLIMEEditBox::s_CandList, 0, 0x1400u);
          }
          return 1;
        case 6:
        case 8:
          CMLIMEEditBox::CheckToggleState();
          return 0;
        case 14:
          if ( !byte_1123F680 )
            CMLIMEEditBox::GetPrivateReadingString();
          ImeId = CMLIMEEditBox::GetImeId(0);
          if ( ImeId > 0x5000404 )
          {
            if ( ImeId > 0x5030804 )
            {
              if ( ImeId != 100664324 )
                return v49;
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
                return v49;
            }
            else if ( ImeId != 67241988 && ImeId != 67176452 && ImeId != 67240964 )
            {
              return 0;
            }
            if ( a4 == (CMLIMEEditBox *)1 || a4 == (CMLIMEEditBox *)2 )
              return 1;
            return v49;
          }
          if ( a4 == (CMLIMEEditBox *)16
            || a4 == (CMLIMEEditBox *)17
            || a4 == (CMLIMEEditBox *)26
            || a4 == (CMLIMEEditBox *)27
            || a4 == (CMLIMEEditBox *)28 )
          {
            return 1;
          }
          return v49;
        default:
          return 1;
      }
    }
    v49 = 1;
    v28 = Engine::Instance();
    v29 = (HIMC)CMLIMEEditBox::_ImmGetContext(*((void **)v28 + 35));
    v30 = v29;
    v53 = v29;
    if ( v29 )
    {
      if ( ((unsigned __int16)a4 & 0x800) != 0 )
      {
        CompositionStringW = CMLIMEEditBox::_ImmGetCompositionStringW(v29, 0x800u, String, 0x200u);
        if ( CompositionStringW > 0 )
        {
          String[(unsigned int)CompositionStringW >> 1] = 0;
          CMLIMEEditBox::TruncateCompString(this, 0, wcslen(String));
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString, String);
          CMLIMEEditBox::SendCompString(this);
          CMLIMEEditBox::ResetCompositionString();
        }
      }
      if ( ((unsigned __int8)a4 & 8) != 0 )
      {
        v32 = CMLIMEEditBox::_ImmGetCompositionStringW(v30, 8u, String, 0x200u);
        if ( v32 > 0 )
        {
          String[(unsigned int)v32 >> 1] = 0;
          CMLIMEEditBox::TruncateCompString(this, 0, wcslen(String));
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)&CMLIMEEditBox::s_CompString, String);
          v33 = CMLIMEEditBox::_ImmGetCompositionStringW(v30, 0x10u, &CMLIMEEditBox::s_abCompStringAttr, 0x100u);
          if ( v33 > 0 )
            *((_BYTE *)&CMLIMEEditBox::s_abCompStringAttr + v33) = 0;
          if ( (_WORD)CMLIMEEditBox::s_hklCurrent == 1028 && !CMLIMEEditBox::GetImeId(0) )
          {
            if ( lstrlenW(CMLIMEEditBox::s_CompString) )
            {
              v34 = CMLIMEEditBox::s_CompString;
              dword_1123F670 = 4;
              dword_1123F674 = -1;
              v35 = 3;
              v36 = &word_1123E850;
              do
              {
                v37 = lstrlenW(v34);
                v34 = CMLIMEEditBox::s_CompString;
                if ( v35 <= v37 - 1 )
                {
                  byte_1123E21C = 1;
                  *v36 = CMLIMEEditBox::s_CompString[v35];
                  v36[1] = 0;
                }
                else
                {
                  *v36 = 0;
                }
                v36 -= 256;
                --v35;
              }
              while ( (int)v36 >= (int)&CMLIMEEditBox::s_CandList );
              dword_1123F678 = 10;
              *(_DWORD *)v34 = 0;
              *((_DWORD *)CMLIMEEditBox::s_CompString + 1) = 0;
              v38 = 0;
              CMLIMEEditBox::s_bShowReadingWindow = 1;
              CMLIMEEditBox::s_bHorizontalReading = 1;
              dword_1123F67C = -1;
              CMLIMEEditBox::s_wszReadingString[0] = 0;
              if ( dword_1123F670 )
              {
                v39 = &CMLIMEEditBox::s_CandList;
                do
                {
                  if ( dword_1123F674 == v38 )
                    dword_1123F67C = lstrlenW(CMLIMEEditBox::s_wszReadingString);
                  lstrcatW(CMLIMEEditBox::s_wszReadingString, v39);
                  ++v38;
                  v39 += 256;
                }
                while ( v38 < dword_1123F670 );
              }
            }
            else
            {
              dword_1123F670 = 0;
            }
          }
          CMLIMEEditBox::s_nCompCaret = CMLIMEEditBox::_ImmGetCompositionStringW(v53, 0x80u, 0, 0);
          if ( CMLIMEEditBox::s_nCompCaret < 0 )
            CMLIMEEditBox::s_nCompCaret = 0;
          if ( CMLIMEEditBox::s_bInsertOnType )
          {
            CMLIMEEditBox::SendCompString(this);
            v40 = lstrlenW(&CMLIMEEditBox::s_CompString[CMLIMEEditBox::s_nCompCaret]);
            if ( v40 > 0 )
            {
              v41 = v40;
              do
              {
                v42 = Engine::Instance();
                SendMessageW(*((HWND *)v42 + 35), 0x100u, 0x25u, 0);
                --v41;
              }
              while ( v41 );
            }
            v43 = Engine::Instance();
            SendMessageW(*((HWND *)v43 + 35), 0x101u, 0x25u, 0);
          }
        }
        CREEditBox::ResetCaretBlink(this);
        v30 = v53;
      }
      v44 = Engine::Instance();
      CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v44 + 35), (int)v30);
    }
    return v49;
  }
  return 0;
}
