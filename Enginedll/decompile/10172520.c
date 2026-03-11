/*
 * func-name: ?AddPacketForCost@AsyncLoader@@IAEXABUASYNC_SUBMIT_THREAD@@@Z
 * func-address: 0x10172520
 * callers: none
 * callees: 0x1001e050, 0x10032870
 */

void __thiscall AsyncLoader::AddPacketForCost(AsyncLoader *this, const struct ASYNC_SUBMIT_THREAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebp
  int v4; // edi
  char *v5; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v4 = *((_DWORD *)this + 30);
  v5 = sub_10032870(v4, *(_DWORD *)(v4 + 4), a2);
  sub_1001E050((_DWORD *)this + 29, 1u);
  *(_DWORD *)(v4 + 4) = v5;
  **((_DWORD **)v5 + 1) = v5;
  LeaveCriticalSection(v3);
}
