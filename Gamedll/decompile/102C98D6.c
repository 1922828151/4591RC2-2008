/*
 * func-name: Sleep
 * func-address: 0x102c98d6
 * callers: none
 * callees: none
 */

// attributes: thunk
void __stdcall Sleep(DWORD dwMilliseconds)
{
  __imp_Sleep(dwMilliseconds);
}
