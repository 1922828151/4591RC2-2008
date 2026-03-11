/*
 * func-name: ?add_connector@Connector_Manager@Message@Outpop@@QAEHAAUMessage_Connector_Config@23@@Z
 * func-address: 0x100146d0
 * callers: 0x1000cbc0, 0x1000d690, 0x1000d8f0, 0x100138e0
 * callees: 0x10013940, 0x10023490
 */

void *__thiscall Outpop::Message::Connector_Manager::add_connector(
        Outpop::Message::Connector_Manager *this,
        struct Outpop::Message::Message_Connector_Config *a2)
{
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // ebx
  int v5; // edi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  int v10; // edi
  const char *host_addr; // eax
  Outpop::Utility::Logger *v12; // eax
  int port_number; // [esp-20h] [ebp-44h]
  int v15; // [esp-1Ch] [ebp-40h]
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  int v17; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  int v19; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  int v21; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  int v23; // [esp-Ch] [ebp-30h]
  int v24; // [esp-8h] [ebp-2Ch]
  int v25; // [esp-4h] [ebp-28h]
  struct Outpop::Message::Message_Connector_Config *v27; // [esp+28h] [ebp+4h]

  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v27 = (struct Outpop::Message::Message_Connector_Config *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v27);
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v6);
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v7);
    v9 = sub_10023490(
           &log_buffer[v5],
           L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
           dt,
           tm,
           CurrentProcessId,
           CurrentThreadId,
           LastError,
           L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
           259);
    v25 = *((_DWORD *)a2 + 25);
    v24 = *((unsigned __int8 *)a2 + 96);
    v10 = v9 + v5;
    v23 = *((_DWORD *)a2 + 5);
    v21 = *((_DWORD *)a2 + 4);
    v19 = *((unsigned __int8 *)a2 + 72);
    v17 = *(_DWORD *)a2;
    v15 = *((_DWORD *)a2 + 1);
    port_number = Outpop::IONetwork::INET_Addr::get_port_number((struct Outpop::Message::Message_Connector_Config *)((char *)a2 + 44));
    host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((struct Outpop::Message::Message_Connector_Config *)((char *)a2 + 44));
    sub_10023490(
      &log_buffer[v10],
      L"\tinitialize connector %S:%d,remote id %d,local id %d,security %d,channel send buffer %d,channel recv buffer ,chan"
       "nel cache %d,channel cache time %d,re connect %d,re connect time %d",
      host_addr,
      port_number,
      v15,
      v17,
      v19,
      v21,
      v23,
      v24,
      v25);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v12);
    }
    Outpop::Utility::Lock::unlock(v27);
  }
  return Outpop::Message::Connector_Manager::build_connector(this, a2);
}
