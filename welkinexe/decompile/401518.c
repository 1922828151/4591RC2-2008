/*
 * func-name: SetThreadAffinityMask
 * func-address: 0x401518
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD_PTR __stdcall SetThreadAffinityMask(HANDLE hThread, DWORD_PTR dwThreadAffinityMask)
{
  return __imp_SetThreadAffinityMask(hThread, dwThreadAffinityMask);
}
