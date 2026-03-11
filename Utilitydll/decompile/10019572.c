/*
 * func-name: MiniDumpWriteDump
 * func-address: 0x10019572
 * callers: 0x10014af0
 * callees: none
 */

// attributes: thunk
BOOL __stdcall MiniDumpWriteDump(
        HANDLE hProcess,
        DWORD ProcessId,
        HANDLE hFile,
        MINIDUMP_TYPE DumpType,
        PMINIDUMP_EXCEPTION_INFORMATION ExceptionParam,
        PMINIDUMP_USER_STREAM_INFORMATION UserStreamParam,
        PMINIDUMP_CALLBACK_INFORMATION CallbackParam)
{
  return __imp_MiniDumpWriteDump(hProcess, ProcessId, hFile, DumpType, ExceptionParam, UserStreamParam, CallbackParam);
}
