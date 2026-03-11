/*
 * func-name: InterlockedExchange
 * func-address: 0x401f62
 * callers: none
 * callees: none
 */

// attributes: thunk
LONG __stdcall InterlockedExchange(volatile LONG *Target, LONG Value)
{
  return __imp_InterlockedExchange(Target, Value);
}
