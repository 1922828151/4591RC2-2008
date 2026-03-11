/*
 * func-name: sub_10005380
 * func-address: 0x10005380
 * callers: 0x10002390, 0x10002f40, 0x10003e80, 0x10004830, 0x1000bb00, 0x1000bc60, 0x1000d0e0, 0x10016fc0, 0x10018720
 * callees: 0x10006790, 0x10018e10, 0x10018e16
 */

LPVOID __usercall sub_10005380@<eax>(int a1@<edi>)
{
  LPVOID result; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  void *lpTlsValue; // [esp+Ch] [ebp-20h]

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
      v2[1] = 0xFFFF;
      *v2 = operator new[](0x1FFFEu);
      lpTlsValue = v3;
    }
    else
    {
      lpTlsValue = 0;
    }
    sub_10006790();
    TlsSetValue(*(_DWORD *)a1, lpTlsValue);
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 4));
    return lpTlsValue;
  }
  return result;
}
