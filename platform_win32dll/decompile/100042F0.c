/*
 * func-name: TopLevelExceptionFilter
 * func-address: 0x100042f0
 * callers: 0x10004780
 * callees: 0x10004a20, 0x10004ac0, 0x10005900, 0x10019750, 0x10019940
 */

LONG __stdcall TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  char *v1; // eax
  HMODULE LibraryA; // esi
  BOOL (__stdcall *MiniDumpWriteDump)(HANDLE, DWORD, HANDLE, MINIDUMP_TYPE, PMINIDUMP_EXCEPTION_INFORMATION, PMINIDUMP_USER_STREAM_INFORMATION, PMINIDUMP_CALLBACK_INFORMATION); // ebp
  CHAR *v4; // eax
  CHAR *v5; // edx
  CHAR v6; // cl
  int v7; // eax
  int v8; // eax
  CHAR v9; // cl
  char *v10; // eax
  CHAR *v12; // edi
  unsigned int v14; // eax
  CHAR *v15; // edi
  int v17; // eax
  int Version; // eax
  const char *v19; // ecx
  unsigned int v20; // eax
  const char *v21; // esi
  CHAR *v22; // edi
  char *v24; // eax
  HANDLE FileA; // esi
  HANDLE CurrentProcess; // eax
  char *v28; // edi
  DWORD v29; // eax
  DWORD LastError; // eax
  const char *v31; // eax
  DWORD CurrentProcessId; // [esp-10h] [ebp-1578h]
  struct _MINIDUMP_EXCEPTION_INFORMATION *v34; // [esp-4h] [ebp-156Ch]
  int v35; // [esp+8h] [ebp-1560h]
  int v36; // [esp+Ch] [ebp-155Ch]
  int v37; // [esp+10h] [ebp-1558h]
  int v38; // [esp+14h] [ebp-1554h]
  int v39; // [esp+18h] [ebp-1550h]
  struct _EXCEPTION_POINTERS *v40; // [esp+1Ch] [ebp-154Ch]
  int v41; // [esp+20h] [ebp-1548h]
  _DWORD v42[3]; // [esp+24h] [ebp-1544h] BYREF
  _BYTE v43[28]; // [esp+30h] [ebp-1538h] BYREF
  _BYTE v44[28]; // [esp+4Ch] [ebp-151Ch] BYREF
  _WIN32_FIND_DATAA FindFileData; // [esp+68h] [ebp-1500h] BYREF
  CHAR FileName[260]; // [esp+1A8h] [ebp-13C0h] BYREF
  char Buffer[259]; // [esp+2ACh] [ebp-12BCh] BYREF
  char v48; // [esp+3AFh] [ebp-11B9h] BYREF
  CHAR File[260]; // [esp+3B0h] [ebp-11B8h] BYREF
  CHAR Filename[260]; // [esp+4B4h] [ebp-10B4h] BYREF
  char v51[4000]; // [esp+5B8h] [ebp-FB0h] BYREF
  int v52; // [esp+1564h] [ebp-4h]

  v40 = ExceptionInfo;
  v41 = 0;
  byte_100384F0 = 1;
  if ( !GetModuleFileNameA(0, Filename, 0x104u)
    || (v1 = strrchr(Filename, 92)) == 0
    || (strcpy(v1 + 1, "DBGHELP.DLL"), (LibraryA = LoadLibraryA(Filename)) == 0) )
  {
    LibraryA = LoadLibraryA("DBGHELP.DLL");
  }
  sub_10004A20(0);
  if ( LibraryA )
  {
    MiniDumpWriteDump = (BOOL (__stdcall *)(HANDLE, DWORD, HANDLE, MINIDUMP_TYPE, PMINIDUMP_EXCEPTION_INFORMATION, PMINIDUMP_USER_STREAM_INFORMATION, PMINIDUMP_CALLBACK_INFORMATION))GetProcAddress(LibraryA, "MiniDumpWriteDump");
    if ( MiniDumpWriteDump )
    {
      v4 = sub_10005900();
      v5 = FileName;
      do
      {
        v6 = *v4;
        *v5++ = *v4++;
      }
      while ( v6 );
      v7 = strlen(FileName);
      if ( v7 > 0 )
      {
        while ( FileName[v7] != 92 )
        {
          if ( --v7 <= 0 )
            goto LABEL_14;
        }
        FileName[v7] = 0;
      }
LABEL_14:
      v8 = 0;
      do
      {
        v9 = FileName[v8];
        File[v8++] = v9;
      }
      while ( v9 );
      v10 = &v48;
      while ( *++v10 )
        ;
      strcpy(v10, "\\ErrorReporter.exe");
      v12 = &FindFileData.cAlternateFileName[15];
      while ( *++v12 )
        ;
      *(_WORD *)v12 = 92;
      v14 = strlen((const char *)dword_100384EC) + 1;
      v15 = &FindFileData.cAlternateFileName[15];
      while ( *++v15 )
        ;
      qmemcpy(v15, (const void *)dword_100384EC, v14);
      v17 = Engine::Instance(v43, v35, v36, v37, v38, v39, ExceptionInfo);
      Version = Engine::GetVersion(v17);
      v52 = 0;
      v19 = (const char *)std::string::c_str(Version);
      v20 = strlen(v19) + 1;
      v21 = v19;
      v22 = &FindFileData.cAlternateFileName[15];
      while ( *++v22 )
        ;
      qmemcpy(v22, v21, v20);
      v52 = -1;
      std::string::~string(v43);
      v24 = &FindFileData.cAlternateFileName[15];
      while ( *++v24 )
        ;
      strcpy(v24, ".dmp");
      FileA = CreateFileA(FileName, 0x40000000u, 2u, 0, 2u, 0x80u, 0);
      if ( FileA == (HANDLE)-1 )
      {
        LastError = GetLastError();
        sprintf(Buffer, "Failed to create dump file '%s' (error %d)", FileName, LastError);
        v28 = Buffer;
      }
      else
      {
        v42[0] = GetCurrentThreadId();
        v42[1] = v40;
        v42[2] = 0;
        if ( v40 )
          v34 = (struct _MINIDUMP_EXCEPTION_INFORMATION *)v42;
        else
          v34 = 0;
        CurrentProcessId = GetCurrentProcessId();
        CurrentProcess = GetCurrentProcess();
        if ( MiniDumpWriteDump(CurrentProcess, CurrentProcessId, FileA, MiniDumpNormal, v34, 0, 0) )
        {
          sprintf(Buffer, "An unexpected error occured. Saved diagnostic file to '%s'.", FileName);
          v41 = 1;
        }
        else
        {
          v29 = GetLastError();
          sprintf(Buffer, "Failed to save dump file to '%s' (error %d)", FileName, v29);
        }
        v28 = Buffer;
        CloseHandle(FileA);
      }
      if ( FindFirstFileA(File, &FindFileData) != (HANDLE)-1 )
        ShellExecuteA(0, "open", File, 0, 0, 0);
    }
    else
    {
      v28 = "DBGHELP.DLL too old. Make sure DBGHELP.DLL is in your game folder.";
    }
  }
  else
  {
    v28 = "DBGHELP.DLL not found. Make sure DBGHELP.DLL is in your game folder.";
  }
  std::string::string(v44);
  v52 = 1;
  if ( v28 )
    std::string::operator+=(v44, v28);
  if ( v40 )
    sub_10004AC0(v51, 4000, (int)v40);
  std::string::operator+=(v44, "\nStack Trace:\n");
  std::string::operator+=(v44, v51);
  v31 = (const char *)std::string::c_str(v44);
  Error(v31);
  v52 = -1;
  std::string::~string(v44);
  return v41;
}
