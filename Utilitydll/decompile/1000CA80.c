/*
 * func-name: sub_1000CA80
 * func-address: 0x1000ca80
 * callers: 0x1000cad0
 * callees: none
 */

int __usercall sub_1000CA80@<eax>(int a1@<esi>)
{
  HANDLE SemaphoreA; // eax
  HANDLE EventA; // eax

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 36) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  SemaphoreA = CreateSemaphoreA(0, 0, 0xFFFF, 0);
  *(_DWORD *)(a1 + 28) = SemaphoreA;
  if ( SemaphoreA && (EventA = CreateEventA(0, 0, 0, 0), (*(_DWORD *)(a1 + 32) = EventA) != 0) )
    return 0;
  else
    return -1;
}
