/*
 * func-name: SetFilePointer
 * func-address: 0x102c98be
 * callers: none
 * callees: none
 */

// attributes: thunk
DWORD __stdcall SetFilePointer(HANDLE hFile, LONG lDistanceToMove, PLONG lpDistanceToMoveHigh, DWORD dwMoveMethod)
{
  return __imp_SetFilePointer(hFile, lDistanceToMove, lpDistanceToMoveHigh, dwMoveMethod);
}
