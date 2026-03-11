/*
 * func-name: ?AddPacketForProduce@AsyncLoader@@IAEXABUASYNC_SUBMIT_THREAD@@@Z
 * func-address: 0x10172460
 * callers: 0x10172570, 0x10174d80
 * callees: 0x1001e050, 0x10032870
 */

void __thiscall AsyncLoader::AddPacketForProduce(AsyncLoader *this, const struct ASYNC_SUBMIT_THREAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebp
  int v4; // edi
  char *v5; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v4 = *((_DWORD *)this + 27);
  v5 = sub_10032870(v4, *(_DWORD *)(v4 + 4), a2);
  sub_1001E050((_DWORD *)this + 26, 1u);
  *(_DWORD *)(v4 + 4) = v5;
  **((_DWORD **)v5 + 1) = v5;
  LeaveCriticalSection(v3);
}
