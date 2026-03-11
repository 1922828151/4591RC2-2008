/*
 * func-name: htons
 * func-address: 0x100232bc
 * callers: 0x10011e40, 0x10011f30, 0x100125e0
 * callees: none
 */

// attributes: thunk
u_short __stdcall htons(u_short hostshort)
{
  return __imp_htons(hostshort);
}
