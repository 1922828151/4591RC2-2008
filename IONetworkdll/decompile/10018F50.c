/*
 * func-name: ?bluider_channel_falied@Stream_Acceptor@IONetwork@Outpop@@QAEXHVINET_Addr@23@V?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10018f50
 * callers: 0x10019410, 0x1001c940, 0x1001d570
 * callees: 0x10003890, 0x10007400, 0x1003a2e0
 */

void __thiscall Outpop::IONetwork::Stream_Acceptor::bluider_channel_falied(
        char *this,
        int a2,
        void **a3,
        int a4,
        int a5,
        int a6,
        struct in_addr a7,
        int a8,
        int a9,
        Outpop::Utility::Ref_Object *a10)
{
  char *v10; // edi
  Outpop::Utility::Lock *v11; // ebp
  Outpop::Utility::Logger *v12; // eax
  wchar_t *log_buffer; // edi
  int v14; // esi
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *dt; // eax
  int v18; // esi
  char *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *tm; // [esp-18h] [ebp-48h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-44h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-40h]
  DWORD LastError; // [esp-Ch] [ebp-3Ch]
  int v25; // [esp-4h] [ebp-34h]

  v10 = this;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v11 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v11);
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v12);
    v14 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v15);
    v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v16);
    v18 = sub_10007400(
            0xFFFF - v14,
            &log_buffer[v14],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
            307)
        + v14;
    v25 = ntohs(HIWORD(a6));
    v19 = inet_ntoa(a7);
    sub_10007400(
      0xFFFF - v18,
      &log_buffer[v18],
      L"Stream_Connector::bluider_channel_falied ip is %S,port is %d",
      v19,
      v25);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v20);
    }
    Outpop::Utility::Lock::unlock(v11);
    v10 = this;
  }
  if ( Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v10 + 132)) )
  {
    Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)&a3);
    sub_1003A2E0(v10 + 192);
    Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(v10 + 132));
  }
  a3 = &Outpop::IONetwork::Addr::`vftable';
  if ( a10 )
    Outpop::Utility::Ref_Object::release(a10);
}
