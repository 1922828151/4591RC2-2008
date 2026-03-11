/*
 * func-name: sub_10003590
 * func-address: 0x10003590
 * callers: 0x10004190, 0x10004430
 * callees: none
 */

int __userpurge sub_10003590@<eax>(
        _DWORD *a1@<edi>,
        int a2,
        int a3,
        int *a4,
        _DWORD *a5,
        char a6,
        int *a7,
        int a8,
        int a9)
{
  int v9; // eax
  int v10; // eax
  bool v11; // zf

  *(_DWORD *)a2 = &Outpop::Utility::Ref_Object::`vftable';
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)a2 = &Outpop::Utility::Timer_Queue::STimerItem::`vftable';
  v9 = *a4;
  *(_DWORD *)(a2 + 8) = *a4;
  if ( v9 )
    InterlockedIncrement((volatile LONG *)(v9 + 4));
  *(_DWORD *)(a2 + 12) = *a5;
  *(_DWORD *)(a2 + 16) = a5[1];
  *(_DWORD *)(a2 + 20) = *a1;
  *(_DWORD *)(a2 + 24) = a1[1];
  *(_BYTE *)(a2 + 28) = a6;
  *(_DWORD *)(a2 + 32) = a8;
  *(_DWORD *)(a2 + 36) = a9;
  v10 = *a7;
  v11 = *a7 == 0;
  *(_DWORD *)(a2 + 40) = *a7;
  if ( !v11 )
    InterlockedIncrement((volatile LONG *)(v10 + 4));
  *(_DWORD *)(a2 + 48) = a3;
  *(_BYTE *)(a2 + 44) = 1;
  return a2;
}
