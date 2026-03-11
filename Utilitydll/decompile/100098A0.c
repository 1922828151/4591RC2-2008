/*
 * func-name: sub_100098A0
 * func-address: 0x100098a0
 * callers: 0x10009740
 * callees: none
 */

int __usercall sub_100098A0@<eax>(int a1@<esi>)
{
  int v1; // edi
  int result; // eax

  v1 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  if ( *(int *)a1 > 0 )
  {
    v1 = 1;
    *(_DWORD *)(a1 + 36) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  result = 0;
  if ( v1 )
  {
    if ( ReleaseSemaphore(*(HANDLE *)(a1 + 28), *(_DWORD *)a1, 0) )
    {
      WaitForSingleObject(*(HANDLE *)(a1 + 32), 0xFFFFFFFF);
      *(_DWORD *)(a1 + 36) = 0;
    }
    return -1;
  }
  return result;
}
