/*
 * func-name: TopLevelExceptionFilter
 * func-address: 0x10014af0
 * callers: 0x10014ac0
 * callees: 0x10014c60, 0x10018c31, 0x10019572
 */

LONG __stdcall TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  const char *v1; // edx
  const char *v2; // ebx
  const char *v3; // esi
  const char *v4; // eax
  HANDLE FileA; // esi
  HANDLE CurrentProcess; // eax
  DWORD CurrentProcessId; // [esp-18h] [ebp-170h]
  const char *v9; // [esp+10h] [ebp-148h]
  _MINIDUMP_EXCEPTION_INFORMATION ExceptionParam; // [esp+18h] [ebp-140h] BYREF
  __time64_t Time; // [esp+24h] [ebp-134h] BYREF
  tm Tm; // [esp+2Ch] [ebp-12Ch] BYREF
  CHAR FileName[260]; // [esp+50h] [ebp-108h] BYREF

  time64(&Time);
  localtime64_s(&Tm, &Time);
  v1 = Locale;
  v9 = Locale;
  if ( Tm.tm_sec <= 9 )
    v9 = (const char *)&unk_1001DD70;
  v2 = Locale;
  if ( Tm.tm_min <= 9 )
    v2 = (const char *)&unk_1001DD70;
  v3 = Locale;
  if ( Tm.tm_hour <= 9 )
    v3 = (const char *)&unk_1001DD70;
  if ( Tm.tm_mday <= 9 )
    v1 = (const char *)&unk_1001DD70;
  v4 = Locale;
  if ( Tm.tm_mon + 1 <= 9 )
    v4 = (const char *)&unk_1001DD70;
  sub_10014C60(
    "%s-%s-%d-%s%d-%s%d-%s%d-%s%d-%s%d.dmp",
    Destination,
    a1020070518,
    Tm.tm_year + 1900,
    v4,
    Tm.tm_mon + 1,
    v1,
    Tm.tm_mday,
    v3,
    Tm.tm_hour,
    v2,
    Tm.tm_min,
    v9,
    Tm.tm_sec);
  FileA = CreateFileA(FileName, 0x40000000u, 2u, 0, 2u, 0x80u, 0);
  if ( FileA == (HANDLE)-1 )
    return 0;
  ExceptionParam.ThreadId = GetCurrentThreadId();
  ExceptionParam.ExceptionPointers = ExceptionInfo;
  ExceptionParam.ClientPointers = 0;
  CurrentProcessId = GetCurrentProcessId();
  CurrentProcess = GetCurrentProcess();
  MiniDumpWriteDump(CurrentProcess, CurrentProcessId, FileA, MiniDumpNormal, &ExceptionParam, 0, 0);
  CloseHandle(FileA);
  return 1;
}
