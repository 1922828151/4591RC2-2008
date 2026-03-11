/*
 * func-name: exit
 * func-address: 0x40170a
 * callers: none
 * callees: none
 */

// attributes: thunk
void __cdecl __noreturn exit(int Code)
{
  __imp_exit(Code);
}
