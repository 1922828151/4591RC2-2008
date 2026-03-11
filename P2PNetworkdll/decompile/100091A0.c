/*
 * func-name: sub_100091A0
 * func-address: 0x100091a0
 * callers: 0x100063d0, 0x10006ab0, 0x10009360
 * callees: 0x10023306
 */

void __usercall sub_100091A0(int a1@<esi>)
{
  if ( *(_DWORD *)(a1 + 4) )
    operator delete(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
}
