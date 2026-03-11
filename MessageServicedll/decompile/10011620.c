/*
 * func-name: ?close_channel@Channel_Manager@Message@Outpop@@QAEXH@Z
 * func-address: 0x10011620
 * callers: 0x1000cc90, 0x100106b0
 * callees: 0x10011530, 0x100150f0, 0x10023490
 */

void __thiscall Outpop::Message::Channel_Manager::close_channel(Outpop::Message::Channel_Manager *this, int a2)
{
  Outpop::Utility::Ref_Object *v3; // esi
  Outpop::Message::Connector_Manager *v4; // edi
  unsigned int v5; // eax
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // ebp
  int v9; // edi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *v12; // eax
  int v13; // edi
  Outpop::IONetwork::INET_Addr *remote_address; // eax
  Outpop::IONetwork::INET_Addr *v15; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v17; // eax
  int v18; // edi
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *dt; // eax
  int v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // [esp-18h] [ebp-40h]
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD v26; // [esp-14h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD v28; // [esp-10h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD v30; // [esp-Ch] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  int port_number; // [esp-4h] [ebp-2Ch]

  v3 = (Outpop::Utility::Ref_Object *)*Outpop::Message::Channel_Manager::find_channel(this, a2);
  if ( !v3 )
  {
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) != 1 )
    {
      goto LABEL_17;
    }
    v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v6);
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v17);
    v18 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v19);
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v20);
    v22 = sub_10023490(
            &log_buffer[v18],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
            213);
    sub_10023490(&log_buffer[v22 + v18], L"Channel_Manager::close_channel close channel id %d but channel not find", a2);
    goto LABEL_12;
  }
  Outpop::Utility::Ref_Object::addref(v3);
  (*(void (__thiscall **)(Outpop::Utility::Ref_Object *))(*(_DWORD *)v3 + 24))(v3);
  if ( (*(int (__thiscall **)(Outpop::Utility::Ref_Object *))(*(_DWORD *)v3 + 40))(v3) )
  {
    v4 = *(Outpop::Message::Connector_Manager **)(*((_DWORD *)this + 15) + 36);
    v5 = (*(int (__thiscall **)(Outpop::Utility::Ref_Object *))(*(_DWORD *)v3 + 52))(v3);
    Outpop::Message::Connector_Manager::close_connector(v4, v5);
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
    v9 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
    v30 = GetLastError();
    v28 = GetCurrentThreadId();
    v26 = GetCurrentProcessId();
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v24 = Outpop::Utility::Logger::make_tm(v10);
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v12 = Outpop::Utility::Logger::make_dt(v11);
    v13 = sub_10023490(
            &log_buffer[v9],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v12,
            v24,
            v26,
            v28,
            v30,
            L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
            209)
        + v9;
    remote_address = Outpop::IONetwork::Channel::get_remote_address(v3);
    port_number = Outpop::IONetwork::INET_Addr::get_port_number(remote_address);
    v15 = Outpop::IONetwork::Channel::get_remote_address(v3);
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v15);
    sub_10023490(
      &log_buffer[v13],
      L"Channel_Manager::close_channel close channel id %d remote id %d remote type %d local id %d local type %d remote addr %S:%d",
      a2,
      *((_DWORD *)v3 + 3),
      *((_DWORD *)v3 + 5),
      *((_DWORD *)v3 + 2),
      *((_DWORD *)v3 + 4),
      host_addr,
      port_number);
LABEL_12:
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v23);
    }
    Outpop::Utility::Lock::unlock(v6);
  }
LABEL_17:
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
}
