/*
 * func-name: InterlockedExchange
 * func-address: 0x102c98dc
 * callers: none
 * callees: none
 */

// attributes: thunk
LONG __stdcall InterlockedExchange(volatile LONG *Target, LONG Value)
{
  return __imp_InterlockedExchange(Target, Value);
}
