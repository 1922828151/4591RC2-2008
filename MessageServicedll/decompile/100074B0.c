/*
 * func-name: sub_100074B0
 * func-address: 0x100074b0
 * callers: 0x10002d30, 0x10003150, 0x10003f00, 0x10004010, 0x10004160, 0x10004d00, 0x10006e10, 0x10007280, 0x10009990, 0x100099e0, 0x10009e60, 0x1000a870, 0x10010830, 0x10012390, 0x100174e0, 0x10017550, 0x10018150, 0x10019140, 0x1001a870, 0x1001aa80, 0x1001ef10, 0x1001ef90
 * callees: 0x10009030, 0x100294f2
 */

int __stdcall sub_100074B0(int a1)
{
  if ( *(_DWORD *)(a1 + 20) )
    operator delete(*(void **)(a1 + 20));
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  return sub_10009030();
}
