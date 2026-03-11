/*
 * func-name: sub_1020AED0
 * func-address: 0x1020aed0
 * callers: 0x1000b721
 * callees: 0x10008df5, 0x1020a870, 0x102c9d98
 */

int __thiscall sub_1020AED0(void *this, int a2, int a3, int a4, int a5)
{
  struct Outpop::IONetwork::Asynch_Result *v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Lock *lock; // ebp
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // edi
  int v11; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // eax
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // edi
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  wchar_t *v27; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD v29; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v31; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  DWORD v33; // [esp-Ch] [ebp-30h]

  if ( operator new(0x38u) )
    v6 = (struct Outpop::IONetwork::Asynch_Result *)sub_10008DF5(a3, a4, a5, (int)this);
  else
    v6 = 0;
  if ( !v6 )
  {
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return -1;
    }
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    lock = Outpop::Utility::Logger::get_lock(v7);
    Outpop::Utility::Lock::lock(lock);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
    v11 = sub_1020A870(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v12);
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v13);
    v15 = sub_1020A870(
            0xFFFF - v11,
            &log_buffer[v11],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\GameClient\\GameDLL\\Logic\\Character\\P2PChatManager.cpp",
            139);
    sub_1020A870(0xFFFF - (v15 + v11), &log_buffer[v15 + v11], L"ChatPeer create Send_P2P_Result error!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
LABEL_10:
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v16);
    }
    Outpop::Utility::Lock::unlock(lock);
    return -1;
  }
  if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
         (Outpop::IONetwork::WIN32_IoCompletionPort *)(Outpop::P2P::P2P_Context::g_context_[1] + 20),
         v6,
         0) == -1 )
  {
    (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v6)(v6, 1);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return -1;
    }
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    lock = Outpop::Utility::Logger::get_lock(v18);
    Outpop::Utility::Lock::lock(lock);
    v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v20 = Outpop::Utility::Logger::get_log_buffer(v19);
    v21 = sub_1020A870(0xFFFFu, v20, L"\n%s", L"LOG_ERROR");
    v33 = GetLastError();
    v31 = GetCurrentThreadId();
    v29 = GetCurrentProcessId();
    v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v27 = Outpop::Utility::Logger::make_tm(v22);
    v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v24 = Outpop::Utility::Logger::make_dt(v23);
    v25 = sub_1020A870(
            0xFFFF - v21,
            &v20[v21],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v24,
            v27,
            v29,
            v31,
            v33,
            L"D:\\R3\\GameClient\\GameDLL\\Logic\\Character\\P2PChatManager.cpp",
            145);
    sub_1020A870(0xFFFF - (v25 + v21), &v20[v25 + v21], L"ChatPeer post Send_P2P_Result error!");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v20);
    goto LABEL_10;
  }
  return 0;
}
