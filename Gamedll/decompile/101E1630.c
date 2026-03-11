/*
 * func-name: sub_101E1630
 * func-address: 0x101e1630
 * callers: 0x1000e340
 * callees: 0x102c9d50
 */

void __stdcall sub_101E1630(int a1)
{
  if ( *(_DWORD *)(a1 + 68) )
    operator delete(*(void **)(a1 + 68));
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  if ( *(_DWORD *)(a1 + 52) )
    operator delete(*(void **)(a1 + 52));
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  std::string::~string((void *)(a1 + 8));
}
