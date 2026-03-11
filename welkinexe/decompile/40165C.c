/*
 * func-name: Sleep
 * func-address: 0x40165c
 * callers: none
 * callees: none
 */

// attributes: thunk
void __stdcall Sleep(DWORD dwMilliseconds)
{
  __imp_Sleep(dwMilliseconds);
}
