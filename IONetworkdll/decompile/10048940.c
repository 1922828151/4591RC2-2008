/*
 * func-name: sub_10048940
 * func-address: 0x10048940
 * callers: 0x10047c70, 0x10047f00
 * callees: 0x10007400, 0x10034e50, 0x1004a2a0, 0x1004e98e
 */

char __userpurge sub_10048940@<al>(int *a1@<ebx>, unsigned __int16 a2, Outpop::Utility::Ref_Object **a3)
{
  Outpop::Utility::Thread_Mutex *v3; // esi
  bool v4; // al
  Outpop::Utility::Lock *v5; // ebp
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  void *v14; // ecx
  int v15; // edi
  Outpop::Utility::Ref_Object *v16; // ecx
  bool v17; // zf
  int v18; // eax
  wchar_t *tm; // [esp-18h] [ebp-54h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-50h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-4Ch]
  DWORD LastError; // [esp-Ch] [ebp-48h]
  void *v24; // [esp-4h] [ebp-40h] BYREF
  Outpop::Utility::Lock *v25; // [esp+10h] [ebp-2Ch]
  _DWORD v26[2]; // [esp+14h] [ebp-28h] BYREF
  Outpop::Utility::Thread_Mutex *v27; // [esp+1Ch] [ebp-20h]
  int v28; // [esp+20h] [ebp-1Ch]
  char v29[12]; // [esp+24h] [ebp-18h] BYREF
  int v30; // [esp+38h] [ebp-4h]

  v3 = (Outpop::Utility::Thread_Mutex *)(a1 + 13);
  v27 = (Outpop::Utility::Thread_Mutex *)(a1 + 13);
  v4 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(a1 + 13));
  v28 = v4 - 1;
  v30 = 0;
  if ( !v4 )
    return 0;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v25 = v5;
    Outpop::Utility::Lock::lock(v5);
    LOBYTE(v30) = 1;
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
    v8 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v9);
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v10);
    v12 = sub_10007400(
            0xFFFF - v8,
            &log_buffer[v8],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"d:\\r3\\outpopgameproject\\ionetwork\\P2PReliable_Container.h",
            106);
    sub_10007400(
      0xFFFF - (v12 + v8),
      &log_buffer[v12 + v8],
      L"channel   %d     send     packet     relible id is:%d",
      *(_DWORD *)(a1[36] + 112),
      a2);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v24 = log_buffer;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13);
    }
    LOBYTE(v30) = 0;
    Outpop::Utility::Lock::unlock(v5);
    v3 = v27;
  }
  v15 = operator new(20);
  v25 = (Outpop::Utility::Lock *)v15;
  LOBYTE(v30) = 2;
  if ( v15 )
  {
    v24 = v14;
    v16 = *a3;
    v17 = *a3 == 0;
    v26[0] = &v24;
    v24 = v16;
    if ( !v17 )
      Outpop::Utility::Ref_Object::addref(v16);
    LOBYTE(v30) = 2;
    v18 = sub_1004A2A0(v15, v24);
  }
  else
  {
    v18 = 0;
  }
  LOBYTE(v30) = 0;
  v26[1] = v18;
  LOWORD(v26[0]) = a2;
  sub_10034E50(a1, (int)v29, v26);
  v30 = -1;
  v28 = -1;
  Outpop::Utility::Thread_Mutex::release(v3);
  return 1;
}
