/*
 * func-name: ?GetPacketForProduce@AsyncLoader@@IAEXAAUASYNC_SUBMIT_THREAD@@@Z
 * func-address: 0x101723f0
 * callers: 0x10172700
 * callees: 0x10032970, 0x101777f0
 */

void __thiscall AsyncLoader::GetPacketForProduce(AsyncLoader *this, struct ASYNC_SUBMIT_THREAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebx
  _DWORD *v4; // eax
  void ***v5; // esi
  _DWORD *v6; // edi
  int v7; // [esp+8h] [ebp-8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( *((_DWORD *)this + 28) )
  {
    v4 = (_DWORD *)*((_DWORD *)this + 27);
    v5 = (void ***)((char *)this + 104);
    v6 = (_DWORD *)*v4;
    if ( (_DWORD *)*v4 == v4 )
      invalid_parameter_noinfo();
    *(_DWORD *)a2 = v6[2];
    sub_101777F0(v6 + 3);
    sub_10032970((int)v5, &v7, (int)v5, *v5[1]);
  }
  LeaveCriticalSection(v3);
}
