/*
 * func-name: sub_1025AC30
 * func-address: 0x1025ac30
 * callers: 0x10013b42
 * callees: 0x102c9d50
 */

void __stdcall sub_1025AC30(int a1)
{
  if ( *(_DWORD *)(a1 + 60) )
    operator delete(*(void **)(a1 + 60));
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  if ( *(_DWORD *)(a1 + 44) )
    operator delete(*(void **)(a1 + 44));
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
}
