/*
 * func-name: sub_10010510
 * func-address: 0x10010510
 * callers: 0x10002780, 0x10005570, 0x10005660, 0x100058c0, 0x10005930, 0x10005d20, 0x10005d90, 0x10006b60, 0x1000dbe0, 0x1000e080, 0x1000fcb0, 0x100103f0, 0x10010480, 0x10010a30, 0x10012920, 0x10012990, 0x10013010, 0x10013080, 0x100137c0, 0x10013be0, 0x100168a0
 * callees: 0x10018cf2
 */

void __usercall sub_10010510(int a1@<esi>)
{
  if ( *(_DWORD *)(a1 + 4) )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
