/*
 * func-name: sub_10009820
 * func-address: 0x10009820
 * callers: 0x10009740, 0x1000aa00
 * callees: none
 */

DWORD __usercall sub_10009820@<eax>(int a1@<esi>)
{
  int v2; // [esp+Ch] [ebp-8h]
  DWORD v3; // [esp+10h] [ebp-4h]

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  ++*(_DWORD *)a1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 40));
  v3 = WaitForSingleObject(*(HANDLE *)(a1 + 28), 0xFFFFFFFF);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  --*(_DWORD *)a1;
  if ( !*(_DWORD *)(a1 + 36) || (v2 = 1, *(_DWORD *)a1) )
    v2 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
  if ( !v3 && v2 )
    SetEvent(*(HANDLE *)(a1 + 32));
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(a1 + 40));
  return v3;
}
