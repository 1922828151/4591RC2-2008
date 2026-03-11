/*
 * func-name: _controlfp_s
 * func-address: 0x401f5c
 * callers: 0x401e50
 * callees: none
 */

// attributes: thunk
errno_t __cdecl controlfp_s(unsigned int *CurrentState, unsigned int NewValue, unsigned int Mask)
{
  return _controlfp_s(CurrentState, NewValue, Mask);
}
