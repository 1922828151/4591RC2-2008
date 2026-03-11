/*
 * func-name: sub_1009E270
 * func-address: 0x1009e270
 * callers: 0x1001149b
 * callees: 0x102c9d50
 */

void __stdcall sub_1009E270(int a1)
{
  if ( *(_DWORD *)(a1 + 104) )
    operator delete(*(void **)(a1 + 104));
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
}
