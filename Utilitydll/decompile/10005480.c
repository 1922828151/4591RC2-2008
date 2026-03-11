/*
 * func-name: sub_10005480
 * func-address: 0x10005480
 * callers: 0x100023b0, 0x100023e0, 0x10004830, 0x1000d0e0, 0x10016fc0, 0x10018720
 * callees: 0x10006790, 0x10018e10, 0x10018e16
 */

LPVOID __usercall sub_10005480@<eax>(int a1@<edi>)
{
  LPVOID result; // eax
  _DWORD *v2; // eax
  void *v3; // ebp

  result = 0;
  if ( *(_DWORD *)a1 != -1 )
    result = TlsGetValue(*(_DWORD *)a1);
  if ( !result )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
    if ( *(_DWORD *)a1 == -1 )
      *(_DWORD *)a1 = TlsAlloc();
    v2 = operator new(8u);
    v3 = v2;
    if ( v2 )
    {
      v2[1] = 128;
      *v2 = operator new[](0x100u);
    }
    else
    {
      v3 = 0;
    }
    sub_10006790();
    TlsSetValue(*(_DWORD *)a1, v3);
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
    return v3;
  }
  return result;
}
