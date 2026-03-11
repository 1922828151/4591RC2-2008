/*
 * func-name: NxPlatformMismatch
 * func-address: 0x10024570
 * callers: 0x1001e350, 0x10022c20, 0x100242e0, 0x1002b280, 0x1002b810, 0x1002fc50, 0x100302d0
 * callees: none
 */

char __fastcall NxPlatformMismatch(int a1)
{
  if ( !dword_1005B1D0 )
    return 0;
  if ( dword_1005B1D0 == 1 || dword_1005B1D0 == 2 )
    return 1;
  return HIBYTE(a1);
}
