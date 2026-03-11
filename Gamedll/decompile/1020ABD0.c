/*
 * func-name: sub_1020ABD0
 * func-address: 0x1020abd0
 * callers: 0x100128f0
 * callees: 0x1000b172, 0x1020a870, 0x102c9d98
 */

int __thiscall sub_1020ABD0(void *this, int *a2, int a3, void *a4)
{
  struct Outpop::IONetwork::Asynch_Result *v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Lock *lock; // ebp
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // edi
  int v20; // esi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  wchar_t *v26; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD v28; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v30; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  DWORD v32; // [esp-Ch] [ebp-30h]

  if ( operator new(0x70u) )
    v5 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000B172(a2[59], a2[1], a2 + 2, a3, a4, (int)this);
  else
    v5 = 0;
  if ( !v5 )
  {
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return -1;
    }
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    lock = Outpop::Utility::Logger::get_lock(v6);
    Outpop::Utility::Lock::lock(lock);
    v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
    v10 = sub_1020A870(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v11);
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v12);
    v14 = sub_1020A870(
            0xFFFF - v10,
            &log_buffer[v10],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\GameClient\\GameDLL\\Logic\\Character\\P2PChatManager.cpp",
            122);
    sub_1020A870(0xFFFF - (v14 + v10), &log_buffer[v14 + v10], L"ChatPeer create Send_Chat_Result error!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
LABEL_10:
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v15);
    }
    Outpop::Utility::Lock::unlock(lock);
    return -1;
  }
  if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
         (Outpop::IONetwork::WIN32_IoCompletionPort *)(Outpop::P2P::P2P_Context::g_context_[1] + 20),
         v5,
         0) == -1 )
  {
    (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v5)(v5, 1);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return -1;
    }
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    lock = Outpop::Utility::Logger::get_lock(v17);
    Outpop::Utility::Lock::lock(lock);
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::get_log_buffer(v18);
    v20 = sub_1020A870(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
    v32 = GetLastError();
    v30 = GetCurrentThreadId();
    v28 = GetCurrentProcessId();
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v26 = Outpop::Utility::Logger::make_tm(v21);
    v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v23 = Outpop::Utility::Logger::make_dt(v22);
    v24 = sub_1020A870(
            0xFFFF - v20,
            &v19[v20],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v23,
            v26,
            v28,
            v30,
            v32,
            L"D:\\R3\\GameClient\\GameDLL\\Logic\\Character\\P2PChatManager.cpp",
            128);
    sub_1020A870(0xFFFF - (v24 + v20), &v19[v24 + v20], L"ChatPeer post Send_Chat_Result error!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v19);
    goto LABEL_10;
  }
  return 0;
}
