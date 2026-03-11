/*
 * func-name: ?thread_fun@Task@Utility@Outpop@@SGIPAX@Z
 * func-address: 0x1000d0e0
 * callers: 0x1000d3c0
 * callees: 0x10002410, 0x10005380, 0x10005480, 0x10009740, 0x1000cd90, 0x10016850
 */

unsigned int __stdcall Outpop::Utility::Task::thread_fun(volatile LONG *a1)
{
  LPCRITICAL_SECTION *v1; // esi
  volatile LONG *v2; // edi
  struct _RTL_CRITICAL_SECTION *v3; // ebx
  struct Outpop::Utility::Logger *v4; // eax
  wchar_t *v5; // esi
  char *v6; // edi
  wchar_t **v7; // eax
  char *v8; // edi
  wchar_t **v9; // eax
  _DWORD *v10; // eax
  int v11; // edi
  DWORD CurrentThreadId; // eax
  Outpop::Utility::Logger *v13; // eax
  struct _RTL_CRITICAL_SECTION *v14; // ebx
  struct Outpop::Utility::Logger *v15; // eax
  wchar_t *v16; // esi
  char *v17; // edi
  wchar_t **v18; // eax
  char *v19; // edi
  wchar_t **v20; // eax
  _DWORD *v21; // eax
  int v22; // edi
  DWORD v23; // eax
  Outpop::Utility::Logger *v24; // eax
  int v26; // [esp+10h] [ebp-1Ch]
  int v27; // [esp+14h] [ebp-18h]

  v1 = (LPCRITICAL_SECTION *)a1;
  v2 = a1 + 1;
  InterlockedIncrement(a1 + 1);
  if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
     || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
    && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
    EnterCriticalSection(v3);
    v4 = Outpop::Utility::Logger::instance();
    v5 = *(wchar_t **)sub_10005380((int)v4);
    v6 = (char *)Outpop::Utility::Logger::instance() + 48;
    v7 = (wchar_t **)sub_10005480((int)v6);
    wstrtime_s(*v7, 0x80u);
    v26 = *(_DWORD *)sub_10005480((int)v6);
    v8 = (char *)Outpop::Utility::Logger::instance() + 92;
    v9 = (wchar_t **)sub_10005480((int)v8);
    wstrdate_s(*v9, 0x80u);
    v10 = sub_10005480((int)v8);
    v11 = sub_1000CD90(0xFFFFu, v5, L"\nLOGINFO %s:%s Message:", *v10, v26);
    CurrentThreadId = GetCurrentThreadId();
    sub_1000CD90(0xFFFF - v11, &v5[v11], L"Thread %d  Start work.", CurrentThreadId);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v5);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
    {
      v13 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13, v5);
    }
    LeaveCriticalSection(v3);
    v2 = a1 + 1;
    v1 = (LPCRITICAL_SECTION *)a1;
  }
  Outpop::Utility::Barrier_T::wait(v1[2]);
  ((void (__thiscall *)(LPCRITICAL_SECTION *))(*v1)->LockCount)(v1);
  InterlockedDecrement(v2);
  if ( (*((_BYTE *)Outpop::Utility::Logger::instance() + 136) == 1
     || *((_BYTE *)Outpop::Utility::Logger::instance() + 137) == 1)
    && *((_BYTE *)Outpop::Utility::Logger::instance() + 141) == 1 )
  {
    v14 = (struct _RTL_CRITICAL_SECTION *)((char *)Outpop::Utility::Logger::instance() + 144);
    EnterCriticalSection(v14);
    v15 = Outpop::Utility::Logger::instance();
    v16 = *(wchar_t **)sub_10005380((int)v15);
    v17 = (char *)Outpop::Utility::Logger::instance() + 48;
    v18 = (wchar_t **)sub_10005480((int)v17);
    wstrtime_s(*v18, 0x80u);
    v27 = *(_DWORD *)sub_10005480((int)v17);
    v19 = (char *)Outpop::Utility::Logger::instance() + 92;
    v20 = (wchar_t **)sub_10005480((int)v19);
    wstrdate_s(*v20, 0x80u);
    v21 = sub_10005480((int)v19);
    v22 = sub_1000CD90(0xFFFFu, v16, L"\nLOGINFO %s:%s Message:", *v21, v27);
    v23 = GetCurrentThreadId();
    sub_1000CD90(0xFFFF - v22, &v16[v22], L"Thread %d  work  finised.", v23);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v16);
    if ( *((_BYTE *)Outpop::Utility::Logger::instance() + 137) )
    {
      v24 = Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v24, v16);
    }
    LeaveCriticalSection(v14);
  }
  return 0;
}
