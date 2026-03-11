/*
 * func-name: sub_1000FC00
 * func-address: 0x1000fc00
 * callers: 0x100ed3c0, 0x100ed650
 * callees: 0x101a2500
 */

int __stdcall sub_1000FC00(int a1)
{
  if ( *(_DWORD *)(a1 + 48) )
    operator delete(*(void **)(a1 + 48));
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  if ( *(_DWORD *)(a1 + 32) )
    operator delete(*(void **)(a1 + 32));
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return std::string::~string(a1);
}
