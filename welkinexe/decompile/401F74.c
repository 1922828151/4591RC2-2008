/*
 * func-name: TerminateProcess
 * func-address: 0x401f74
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall TerminateProcess(HANDLE hProcess, UINT uExitCode)
{
  return __imp_TerminateProcess(hProcess, uExitCode);
}
