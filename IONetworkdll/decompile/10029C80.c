/*
 * func-name: ?erase_channel_from_map@Dgram_Acceptor@IONetwork@Outpop@@QAEXAAVINET_Addr@23@@Z
 * func-address: 0x10029c80
 * callers: 0x10027c50, 0x10031590
 * callees: 0x10007400, 0x1002a4c0
 */

char __thiscall Outpop::IONetwork::Dgram_Acceptor::erase_channel_from_map(
        Outpop::IONetwork::Dgram_Acceptor *this,
        struct in_addr *a2)
{
  Outpop::Utility::Logger *v2; // eax
  wchar_t *log_buffer; // edi
  int v4; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *dt; // eax
  int v8; // esi
  char *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  int v11; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD LastError; // [esp-Ch] [ebp-40h]
  int v17; // [esp-4h] [ebp-38h]
  Outpop::Utility::Lock *v19; // [esp+14h] [ebp-20h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v19 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v19);
    v2 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v2);
    v4 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v6);
    v8 = sub_10007400(
           0xFFFF - v4,
           &log_buffer[v4],
           L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
           dt,
           tm,
           CurrentProcessId,
           CurrentThreadId,
           LastError,
           L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
           511)
       + v4;
    v17 = ntohs(a2[3].S_un.S_un_w.s_w2);
    v9 = inet_ntoa(a2[4]);
    sub_10007400(
      0xFFFF - v8,
      &log_buffer[v8],
      L"Dgram_Acceptor::erase_channel_from_map  addr ip is %S,port is %d",
      v9,
      v17);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    Outpop::Utility::Lock::unlock(v19);
  }
  v11 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184)) - 1;
  if ( v11 != -1 )
  {
    ntohl(a2[4].S_un.S_addr);
    ntohs(a2[3].S_un.S_un_w.s_w2);
    sub_1002A4C0((char *)this + 248);
    LOBYTE(v11) = Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184));
  }
  return v11;
}
