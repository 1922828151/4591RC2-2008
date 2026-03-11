/*
 * func-name: ?dispatch@Dispatch_Thread@Utility@Outpop@@UAEXAAV?$Smart_Ptr@VThread_Message@Utility@Outpop@@@23@@Z
 * func-address: 0x1000a930
 * callers: none
 * callees: 0x10008f00, 0x10008fb0
 */

void __thiscall Outpop::Utility::Dispatch_Thread::dispatch(int this, int a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+14h] [ebp-18h]
  LPCRITICAL_SECTION lpCriticalSectiona; // [esp+14h] [ebp-18h]

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(this + 88);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 88));
  v3 = *(_DWORD *)(this + 80);
  v4 = sub_10008F00(v3, *(_DWORD *)(v3 + 4), a2);
  sub_10008FB0((_DWORD *)(this + 76));
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)v4[1] = v4;
  LeaveCriticalSection(lpCriticalSection);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 116));
  lpCriticalSectiona = *(LPCRITICAL_SECTION *)(this + 112);
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 116));
  if ( (int)lpCriticalSectiona > 0 )
    ReleaseSemaphore(*(HANDLE *)(this + 140), 1, 0);
}
