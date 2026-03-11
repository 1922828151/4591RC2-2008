/*
 * func-name: ?GetPacketForCost@AsyncLoader@@IAEIAAUASYNC_SUBMIT_THREAD@@@Z
 * func-address: 0x101724b0
 * callers: none
 * callees: 0x10032970, 0x101777f0
 */

int __thiscall AsyncLoader::GetPacketForCost(AsyncLoader *this, struct ASYNC_SUBMIT_THREAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // ebp
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int v6; // ebx
  int v8; // [esp+8h] [ebp-8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  if ( *((_DWORD *)this + 31) )
  {
    v4 = (_DWORD *)*((_DWORD *)this + 30);
    v5 = (_DWORD *)*v4;
    if ( (_DWORD *)*v4 == v4 )
      invalid_parameter_noinfo();
    *(_DWORD *)a2 = v5[2];
    sub_101777F0(v5 + 3);
    sub_10032970((int)this + 116, &v8, (int)this + 116, **((void ***)this + 30));
  }
  v6 = *((_DWORD *)this + 31);
  LeaveCriticalSection(v3);
  return v6;
}
