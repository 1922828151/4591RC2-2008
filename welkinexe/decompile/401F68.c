/*
 * func-name: InterlockedCompareExchange
 * func-address: 0x401f68
 * callers: none
 * callees: none
 */

// attributes: thunk
LONG __stdcall InterlockedCompareExchange(volatile LONG *Destination, LONG Exchange, LONG Comperand)
{
  return __imp_InterlockedCompareExchange(Destination, Exchange, Comperand);
}
