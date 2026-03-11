/*
 * func-name: VerQueryValueA
 * func-address: 0x10177f5a
 * callers: 0x10095d70
 * callees: none
 */

// attributes: thunk
BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID *lplpBuffer, PUINT puLen)
{
  return __imp_VerQueryValueA(pBlock, lpSubBlock, lplpBuffer, puLen);
}
