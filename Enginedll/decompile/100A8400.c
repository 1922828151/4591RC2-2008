/*
 * func-name: ?GetPrivateReadingString@CMLIMEEditBox@@KAXXZ
 * func-address: 0x100a8400
 * callers: 0x100ca110
 * callees: 0x1006a760, 0x1006ad40, 0x1006ad50, 0x100971c0, 0x100a7b40, 0x100a82e0
 */

void __cdecl CMLIMEEditBox::GetPrivateReadingString()
{
  UINT v0; // edi
  unsigned int ImeId; // esi
  struct Engine *v2; // eax
  HIMC Context; // ebp
  unsigned int v4; // ebx
  unsigned int ReadingString; // eax
  HANDLE ProcessHeap; // eax
  void *v7; // eax
  struct Engine *v8; // eax
  const int *v9; // eax
  const int *v10; // ebp
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // eax
  unsigned int v15; // eax
  _BYTE *v16; // ebp
  _WORD *v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // ebp
  const CHAR *v24; // esi
  BOOL v25; // eax
  struct Engine *v26; // eax
  HANDLE v27; // eax
  unsigned int v28; // esi
  const WCHAR *v29; // edi
  WCHAR *v30; // [esp-10h] [ebp-168h]
  SIZE_T v31; // [esp-Ch] [ebp-164h]
  void *v32; // [esp-Ch] [ebp-164h]
  void *v33; // [esp-Ch] [ebp-164h]
  bool v34; // [esp+Bh] [ebp-14Dh]
  int v35; // [esp+Ch] [ebp-14Ch] BYREF
  _BYTE *v36; // [esp+10h] [ebp-148h]
  unsigned int v37; // [esp+14h] [ebp-144h]
  unsigned int v38; // [esp+18h] [ebp-140h]
  LPWSTR lpWideCharStr; // [esp+1Ch] [ebp-13Ch]
  int v40; // [esp+20h] [ebp-138h] BYREF
  LPVOID lpMem; // [esp+24h] [ebp-134h]
  void *v42; // [esp+28h] [ebp-130h]
  const int *v43; // [esp+2Ch] [ebp-12Ch]
  unsigned int v44; // [esp+30h] [ebp-128h] BYREF
  WCHAR LCData[8]; // [esp+34h] [ebp-124h] BYREF
  struct _OSVERSIONINFOW VersionInformation; // [esp+44h] [ebp-114h] BYREF

  v0 = 0;
  ImeId = CMLIMEEditBox::GetImeId(0);
  v37 = ImeId;
  if ( !ImeId )
  {
    CMLIMEEditBox::s_bShowReadingWindow = 0;
    return;
  }
  v2 = Engine::Instance();
  Context = (HIMC)CMLIMEEditBox::_ImmGetContext(*((void **)v2 + 35));
  v42 = Context;
  if ( !Context )
  {
    CMLIMEEditBox::s_bShowReadingWindow = 0;
    return;
  }
  v4 = 0;
  v35 = 0;
  lpMem = 0;
  v36 = 0;
  v34 = 0;
  v43 = 0;
  if ( CMLIMEEditBox::_GetReadingString )
  {
    ReadingString = CMLIMEEditBox::_GetReadingString(Context, 0, 0, &v35, &v40, &v44);
    v4 = ReadingString;
    if ( ReadingString )
    {
      v31 = 2 * ReadingString;
      ProcessHeap = GetProcessHeap();
      v7 = HeapAlloc(ProcessHeap, 0, v31);
      lpMem = v7;
      v36 = v7;
      if ( !v7 )
      {
        v8 = Engine::Instance();
        CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v8 + 35), (int)Context);
        return;
      }
      v4 = CMLIMEEditBox::_GetReadingString(Context, v4, (wchar_t *)v7, &v35, &v40, &v44);
    }
    v34 = 1;
    CMLIMEEditBox::s_bHorizontalReading = v40 == 0;
    goto LABEL_26;
  }
  v9 = CMLIMEEditBox::_ImmLockIMC(Context);
  v10 = v9;
  v43 = v9;
  if ( ImeId <= 0x4040404 )
  {
    if ( ImeId == 67372036 )
      goto LABEL_35;
    if ( ImeId <= 0x4020804 )
    {
      switch ( ImeId )
      {
        case 0x4020804u:
          VersionInformation.dwOSVersionInfoSize = 276;
          GetVersionExW(&VersionInformation);
          v13 = (VersionInformation.dwPlatformId == 2) + 1;
          v14 = CMLIMEEditBox::_ImmLockIMCC(*((void **)v10 + 73))[8];
          if ( v14 )
          {
            v4 = *(_DWORD *)(16 * (v13 + 4) + v14);
            v35 = *(_DWORD *)(16 * v13 + v14 + 68);
            v36 = (_BYTE *)(v14 + 64);
            v34 = VersionInformation.dwPlatformId == 2;
          }
          v0 = 0;
          break;
        case 0x4010804u:
          v11 = 8 - ((unsigned int)CMLIMEEditBox::GetImeId(1u) < 2);
          v12 = CMLIMEEditBox::_ImmLockIMCC(*((void **)v10 + 73))[v11];
          if ( v12 )
          {
            v4 = *(_DWORD *)(v12 + 156);
            v35 = *(_DWORD *)(v12 + 160);
            if ( v35 >= v4 )
              v35 = v4;
            v36 = (_BYTE *)(v12 + 56);
            v34 = 1;
          }
          break;
        case 0x4020404u:
          goto LABEL_35;
        default:
          goto LABEL_26;
      }
      ImeId = v37;
      goto LABEL_26;
    }
    if ( ImeId != 67306500 )
      goto LABEL_26;
LABEL_35:
    v18 = CMLIMEEditBox::_ImmLockIMCC(*((void **)v9 + 73))[6];
    if ( v18 )
    {
      v4 = *(_DWORD *)(v18 + 156);
      v35 = *(_DWORD *)(v18 + 160);
      v36 = (_BYTE *)(v18 + 56);
      v34 = 1;
    }
    goto LABEL_26;
  }
  if ( ImeId > 0x5020404 )
  {
    if ( ImeId != 84084740 )
      goto LABEL_26;
LABEL_46:
    v21 = CMLIMEEditBox::_ImmLockIMCC(*((void **)v9 + 73))[1];
    if ( v21 )
    {
      v22 = *(_DWORD *)(v21 + 24);
      if ( v22 )
      {
        v4 = *(_DWORD *)(v22 + 96);
        v35 = *(_DWORD *)(v22 + 100);
        v36 = (_BYTE *)(v22 + 64);
        v34 = 1;
      }
    }
    goto LABEL_26;
  }
  switch ( ImeId )
  {
    case 0x5020404u:
      goto LABEL_46;
    case 0x5000404u:
      v19 = CMLIMEEditBox::_ImmLockIMCC(*((void **)v9 + 73))[3];
      if ( v19 )
      {
        v20 = *(_DWORD *)(v19 + 32);
        if ( v20 )
        {
          v4 = *(_DWORD *)(v20 + 80);
          v35 = *(_DWORD *)(v20 + 84);
          v36 = (_BYTE *)(v20 + 64);
          v34 = 0;
        }
      }
      break;
    case 0x5010404u:
      goto LABEL_46;
  }
LABEL_26:
  v15 = 0;
  CMLIMEEditBox::s_CandList = 0;
  word_1123E450 = 0;
  word_1123E650 = 0;
  word_1123E850 = 0;
  dword_1123F670 = v4;
  dword_1123F674 = -1;
  if ( v34 )
  {
    if ( v4 )
    {
      v16 = v36;
      v17 = &unk_1123E252;
      do
      {
        if ( v35 <= v15 && dword_1123F674 == -1 )
          dword_1123F674 = v15;
        *(v17 - 1) = *(_WORD *)&v16[2 * v15];
        *v17 = 0;
        ++v15;
        v17 += 256;
      }
      while ( v15 < v4 );
    }
    *(&CMLIMEEditBox::s_CandList + 256 * v15) = 0;
  }
  else
  {
    v23 = 0;
    v38 = 0;
    if ( v4 )
    {
      lpWideCharStr = &CMLIMEEditBox::s_CandList;
      do
      {
        if ( v35 <= v23 && dword_1123F674 == -1 )
          dword_1123F674 = v15;
        if ( GetLocaleInfoW((unsigned __int16)CMLIMEEditBox::s_hklCurrent, 0x1004u, LCData, 8) )
          v0 = wcstoul(LCData, 0, 0);
        v24 = &v36[v23];
        v30 = lpWideCharStr;
        v25 = IsDBCSLeadByteEx(v0, v36[v23]);
        MultiByteToWideChar(v0, 0, v24, v25 + 1, v30, 1);
        if ( IsDBCSLeadByteEx(v0, *v24) )
          ++v23;
        ++v38;
        lpWideCharStr += 256;
        v15 = v38;
        ++v23;
        v0 = 0;
      }
      while ( v23 < v4 );
      ImeId = v37;
    }
    *(&CMLIMEEditBox::s_CandList + 256 * v15) = 0;
    dword_1123F670 = v15;
  }
  if ( !CMLIMEEditBox::_GetReadingString )
  {
    CMLIMEEditBox::_ImmUnlockIMCC(*((void **)v43 + 73));
    CMLIMEEditBox::_ImmUnlockIMC(v42);
    CMLIMEEditBox::GetReadingWindowOrientation(ImeId);
  }
  v32 = v42;
  v26 = Engine::Instance();
  CMLIMEEditBox::_ImmReleaseContext(*((HIMC *)v26 + 35), (int)v32);
  if ( lpMem )
  {
    v33 = lpMem;
    v27 = GetProcessHeap();
    HeapFree(v27, 0, v33);
  }
  CMLIMEEditBox::s_bShowReadingWindow = dword_1123F670 != 0;
  if ( CMLIMEEditBox::s_bHorizontalReading )
  {
    v28 = 0;
    dword_1123F67C = -1;
    CMLIMEEditBox::s_wszReadingString = 0;
    if ( dword_1123F670 )
    {
      v29 = &CMLIMEEditBox::s_CandList;
      do
      {
        if ( dword_1123F674 == v28 )
          dword_1123F67C = lstrlenW(&CMLIMEEditBox::s_wszReadingString);
        lstrcatW(&CMLIMEEditBox::s_wszReadingString, v29);
        ++v28;
        v29 += 256;
      }
      while ( v28 < dword_1123F670 );
    }
  }
  dword_1123F678 = 10;
}
