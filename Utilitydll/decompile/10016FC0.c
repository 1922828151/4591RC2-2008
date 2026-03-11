/*
 * func-name: ?log_record@Record_Logger@Utility@Outpop@@AAEXAAVRecord@23@@Z
 * func-address: 0x10016fc0
 * callers: 0x10016d40
 * callees: 0x10001760, 0x10001940, 0x10002410, 0x10005380, 0x10005480, 0x1000cd90, 0x10016850, 0x10018c31, 0x10019580
 */

void __thiscall Outpop::Utility::Record_Logger::log_record(HANDLE *this, struct Record *a2)
{
  int v3; // ebx
  int *v4; // eax
  char *v5; // eax
  int v6; // eax
  const CHAR *v7; // eax
  HANDLE FileA; // eax
  HANDLE *v9; // eax
  HANDLE v10; // edx
  int v12; // ebx
  int *v13; // eax
  char *v14; // eax
  int v15; // eax
  const CHAR *v16; // eax
  HANDLE v17; // eax
  int v18; // ecx
  int v19; // edx
  std::strstreambuf *v20; // edi
  DWORD v21; // ebx
  size_t v22; // esi
  struct Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // ebx
  int v25; // esi
  char *v26; // edi
  wchar_t **v27; // eax
  char *v28; // edi
  wchar_t **v29; // eax
  int v30; // edi
  DWORD CurrentProcessId; // eax
  int v32; // eax
  Outpop::Utility::Logger *v33; // eax
  DWORD CurrentThreadId; // [esp-10h] [ebp-ACh]
  DWORD v35; // [esp-Ch] [ebp-A8h]
  int v36; // [esp+18h] [ebp-84h]
  int v37[2]; // [esp+1Ch] [ebp-80h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [esp+24h] [ebp-78h] BYREF
  DWORD LastError; // [esp+2Ch] [ebp-70h]
  DWORD NumberOfBytesWritten; // [esp+30h] [ebp-6Ch] BYREF
  _BYTE v41[28]; // [esp+34h] [ebp-68h] BYREF
  _BYTE v42[28]; // [esp+50h] [ebp-4Ch] BYREF
  char v43[4]; // [esp+6Ch] [ebp-30h] BYREF
  LPCSTR lpFileName[5]; // [esp+70h] [ebp-2Ch] BYREF
  unsigned int v45; // [esp+84h] [ebp-18h]
  int v46; // [esp+98h] [ebp-4h]

  if ( this[51] == HANDLE_FLAG_INHERIT
    && (this[41] == (HANDLE)-1
     || (char *)this[43] + std::strstreambuf::pcount((struct Record *)((char *)a2 + 20)) > this[42]) )
  {
    v3 = std::operator+<char>(v41, this + 44, "_");
    v46 = 0;
    v4 = (int *)Outpop::Utility::Time_Value::gettimeofday((Outpop::Utility::Time_Value *)v37);
    v5 = itoa(*v4, Buffer, 10);
    v6 = std::operator+<char>(v42, v3, v5);
    LOBYTE(v46) = 1;
    std::operator+<char>(v43, v6, ".rec");
    LOBYTE(v46) = 3;
    std::string::~string(v42);
    LOBYTE(v46) = 4;
    std::string::~string(v41);
    if ( this[41] != (HANDLE)-1 )
      CloseHandle(this[41]);
    v7 = lpFileName[0];
    if ( v45 < 0x10 )
      v7 = (const CHAR *)lpFileName;
    FileA = CreateFileA(v7, 2u, 1u, 0, 4u, 0x80u, 0);
    this[41] = FileA;
    this[43] = 0;
    SetFilePointer(FileA, 0, 0, 2u);
    v46 = -1;
    std::string::~string(v43);
  }
  if ( !this[51] )
  {
    Outpop::Utility::Time_Value::gettimeofday((Outpop::Utility::Time_Value *)v37);
    if ( this[41] == (HANDLE)-1
      || (v9 = (HANDLE *)Outpop::Utility::operator-((Outpop::Utility::Time_Value *)lpCriticalSection, v37, this + 54),
          v10 = this[52],
          (int)*v9 > (int)v10)
      || *v9 == v10 && (int)v9[1] > (int)this[53] )
    {
      v12 = std::operator+<char>(v42, this + 44, "_");
      v46 = 5;
      v13 = (int *)Outpop::Utility::Time_Value::gettimeofday((Outpop::Utility::Time_Value *)lpCriticalSection);
      v14 = itoa(*v13, Buffer, 10);
      v15 = std::operator+<char>(v41, v12, v14);
      LOBYTE(v46) = 6;
      std::operator+<char>(v43, v15, ".rec");
      LOBYTE(v46) = 8;
      std::string::~string(v41);
      LOBYTE(v46) = 9;
      std::string::~string(v42);
      if ( this[41] != (HANDLE)-1 )
        CloseHandle(this[41]);
      v16 = lpFileName[0];
      if ( v45 < 0x10 )
        v16 = (const CHAR *)lpFileName;
      v17 = CreateFileA(v16, 2u, 1u, 0, 4u, 0x80u, 0);
      v18 = v37[0];
      v19 = v37[1];
      this[41] = v17;
      this[54] = (HANDLE)v18;
      this[55] = (HANDLE)v19;
      SetFilePointer(v17, 0, 0, 2u);
      v46 = -1;
      std::string::~string(v43);
    }
  }
  v20 = (struct Record *)((char *)a2 + 20);
  v37[0] = (int)a2 + 20;
  std::strstreambuf::freeze((struct Record *)((char *)a2 + 20), 1);
  NumberOfBytesWritten = 0;
  v21 = std::strstreambuf::pcount((struct Record *)((char *)a2 + 20));
  std::strstreambuf::freeze((struct Record *)((char *)a2 + 20), 1);
  if ( WriteFile(this[41], **((LPCVOID **)a2 + 13), v21, &NumberOfBytesWritten, 0) )
  {
    if ( this[51] == HANDLE_FLAG_INHERIT )
      this[43] = (char *)this[43] + std::strstreambuf::pcount(v20);
  }
  else
  {
    LastError = GetLastError();
    v22 = std::strstreambuf::pcount(v20);
    std::strstreambuf::freeze(v20, 1);
    memcpy(byte_10031188, **((const void ***)a2 + 13), v22);
    byte_10031188[std::strstreambuf::pcount(v20)] = 0;
    if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
       || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
      && *((_BYTE *)Outpop::Utility::Logger::instance() + 142) == 1 )
    {
      lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)Outpop::Utility::Logger::instance() + 144);
      EnterCriticalSection(lpCriticalSection[0]);
      v46 = 10;
      v23 = Outpop::Utility::Logger::instance();
      v24 = *(wchar_t **)sub_10005380((int)v23);
      v25 = sub_1000CD90(0xFFFFu, v24, L"\n%s", L"LOG_FATAL");
      v26 = (char *)Outpop::Utility::Logger::instance() + 48;
      v27 = (wchar_t **)sub_10005480((int)v26);
      wstrtime_s(*v27, 0x80u);
      v36 = *(_DWORD *)sub_10005480((int)v26);
      v28 = (char *)Outpop::Utility::Logger::instance() + 92;
      v29 = (wchar_t **)sub_10005480((int)v28);
      wstrdate_s(*v29, 0x80u);
      v30 = *(_DWORD *)sub_10005480((int)v28);
      v35 = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v32 = sub_1000CD90(
              0xFFFF - v25,
              &v24[v25],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v30,
              v36,
              CurrentProcessId,
              CurrentThreadId,
              v35,
              L"D:\\R3\\OutpopGameProject\\Utility\\RecordLogger.cpp",
              103);
      sub_1000CD90(
        0xFFFF - (v32 + v25),
        &v24[v32 + v25],
        L"Record_Logger wirte file error %d, data[%S]!",
        LastError,
        byte_10031188);
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v24);
      if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
      {
        v33 = Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v33, v24);
      }
      v46 = -1;
      LeaveCriticalSection(lpCriticalSection[0]);
      v20 = (std::strstreambuf *)v37[0];
    }
  }
  std::strstreambuf::freeze(v20, 0);
}
