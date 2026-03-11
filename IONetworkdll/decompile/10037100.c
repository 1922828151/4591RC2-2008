/*
 * func-name: ?close@Dgram_Connector@IONetwork@Outpop@@UAEXXZ
 * func-address: 0x10037100
 * callers: none
 * callees: 0x10007400
 */

bool __thiscall Outpop::IONetwork::Dgram_Connector::close(Outpop::IONetwork::Dgram_Connector *this)
{
  Outpop::Utility::Lock *v2; // ebx
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  SOCKET *v11; // esi
  Outpop::Utility::Timer_Queue *v12; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  int v18; // [esp+0h] [ebp-24h]
  int v19; // [esp+0h] [ebp-24h]
  int v20; // [esp+4h] [ebp-20h]
  int v21; // [esp+8h] [ebp-1Ch]
  int v22; // [esp+Ch] [ebp-18h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v2);
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10007400(
           0xFFFF - v5,
           &log_buffer[v5],
           L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
           dt,
           tm,
           CurrentProcessId,
           CurrentThreadId,
           LastError,
           L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
           141);
    sub_10007400(0xFFFF - (v9 + v5), &log_buffer[v9 + v5], L"Dgram_Connector::close");
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    Outpop::Utility::Lock::unlock(v2);
  }
  v11 = (SOCKET *)*((_DWORD *)this + 29);
  if ( *v11 != -1 )
  {
    closesocket(*v11);
    *v11 = -1;
  }
  Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)this + 184));
  if ( *((_DWORD *)this + 94) != -1 )
  {
    v12 = (Outpop::Utility::Timer_Queue *)Outpop::Utility::Timer_Queue::instance(
                                            *((_DWORD *)this + 94),
                                            v18,
                                            v20,
                                            v21,
                                            v22);
    Outpop::Utility::Timer_Queue::cancel(v12, v19);
  }
  *((_DWORD *)this + 94) = -1;
  return Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Connector *)((char *)this + 184));
}
