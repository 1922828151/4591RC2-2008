/*
 * func-name: sub_10003910
 * func-address: 0x10003910
 * callers: 0x100036a0, 0x10003e80, 0x10004030
 * callees: 0x10008a40, 0x10018cf2
 */

void __stdcall sub_10003910(int a1)
{
  if ( *(_DWORD *)(a1 + 4) )
  {
    sub_10008A40(a1);
    operator delete(*(void **)(a1 + 4));
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
