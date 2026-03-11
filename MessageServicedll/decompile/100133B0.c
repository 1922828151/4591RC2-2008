/*
 * func-name: ?handle_connect_failed@Connector_Manager@Message@Outpop@@UAEXHABVINET_Addr@IONetwork@3@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAV?$Smart_Ptr@VConnector@IONetwork@Outpop@@@73@@Z
 * func-address: 0x100133b0
 * callers: none
 * callees: 0x100167c0, 0x1001fb90, 0x10023490
 */

void __thiscall Outpop::Message::Connector_Manager::handle_connect_failed(
        _BYTE *this,
        int a2,
        Outpop::IONetwork::INET_Addr *a3,
        int a4,
        Outpop::Utility::Lock *a5)
{
  Outpop::Utility::Lock *v6; // esi
  int v7; // eax
  Outpop::Utility::Lock *v8; // ebp
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // edi
  int v11; // esi
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *dt; // eax
  int v15; // esi
  const char *host_addr; // eax
  Outpop::Utility::Logger *v17; // eax
  int act; // eax
  int port_number; // [esp-1Ch] [ebp-44h]
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  int v22; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  int v24; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  int v26; // [esp-Ch] [ebp-34h]
  int v27; // [esp-8h] [ebp-30h]
  int v28; // [esp-4h] [ebp-2Ch]
  char v29; // [esp+17h] [ebp-11h]

  v6 = (Outpop::Utility::Lock *)(this + 48);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 48));
  v29 = this[124];
  Outpop::Utility::Lock::unlock(v6);
  v7 = Outpop::Utility::Logger::instance();
  v8 = a5;
  if ( (*(_BYTE *)(v7 + 136) == 1 || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    a5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(a5);
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
    v11 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v12);
    v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v13);
    v15 = sub_10023490(
            &log_buffer[v11],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
            107)
        + v11;
    v28 = *(_DWORD *)(*(_DWORD *)v8 + 24);
    v27 = *(_DWORD *)(*(_DWORD *)v8 + 16);
    v26 = *(_DWORD *)(*(_DWORD *)v8 + 20);
    v24 = *(_DWORD *)(*(_DWORD *)v8 + 12);
    v22 = *(_DWORD *)(*(_DWORD *)v8 + 108);
    port_number = Outpop::IONetwork::INET_Addr::get_port_number(a3);
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(a3);
    sub_10023490(
      &log_buffer[v15],
      L"connect remote %S:%d failed , error %d connector id %d local id %d local type %d remote id %d remote type %d",
      host_addr,
      port_number,
      a2,
      v22,
      v24,
      v26,
      v27,
      v28);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v17);
    }
    Outpop::Utility::Lock::unlock(a5);
  }
  if ( v29 == 1 && !(unsigned __int8)sub_100167C0() )
  {
    act = Outpop::IONetwork::Connector::get_act(*(_DWORD *)v8, &a5);
    Outpop::Message::Handler_Manager::dispatch_channel_connect_failed(
      *(_DWORD *)(*(_DWORD *)v8 + 108),
      *(_DWORD *)(*(_DWORD *)v8 + 16),
      *(_DWORD *)(*(_DWORD *)v8 + 24),
      *(_DWORD *)(*(_DWORD *)v8 + 12),
      *(_DWORD *)(*(_DWORD *)v8 + 20),
      a2,
      a3,
      a4,
      act);
    if ( a5 )
      Outpop::Utility::Ref_Object::release(a5);
  }
}
