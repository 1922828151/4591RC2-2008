/*
 * func-name: sub_1000FBC0
 * func-address: 0x1000fbc0
 * callers: 0x10012dd0, 0x10012e80, 0x10048ab0
 * callees: 0x101a2500
 */

int __stdcall sub_1000FBC0(int a1)
{
  if ( *(_DWORD *)(a1 + 32) )
    operator delete(*(void **)(a1 + 32));
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  return std::string::~string(a1);
}
