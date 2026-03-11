/*
 * func-name: ?handle_accept@Acceptor_Manager@Message@Outpop@@UAEXAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@53@AAV?$Smart_Ptr@VAcceptor@IONetwork@Outpop@@@53@@Z
 * func-address: 0x1000e370
 * callers: none
 * callees: 0x10006d70, 0x10011070, 0x1001f910, 0x10023490, 0x10028ed0
 */

void __thiscall Outpop::Message::Acceptor_Manager::handle_accept(
        Outpop::Message::Context **this,
        Outpop::IONetwork::Channel **a2,
        Outpop::Utility::Lock *a3,
        unsigned __int16 *a4)
{
  Outpop::IONetwork::Channel **v5; // ebx
  int v6; // edi
  Outpop::IONetwork::INET_Addr *remote_address; // eax
  unsigned int ip_address; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // edi
  Outpop::IONetwork::INET_Addr *v15; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // ebx
  int v20; // edi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  Outpop::IONetwork::Channel *v25; // esi
  int v26; // edi
  Outpop::IONetwork::Channel *v27; // ecx
  Outpop::IONetwork::INET_Addr *v28; // eax
  Outpop::IONetwork::INET_Addr *v29; // eax
  const char *v30; // eax
  Outpop::Utility::Logger *v31; // eax
  unsigned __int16 *v32; // edi
  Outpop::IONetwork::Channel *v33; // esi
  int v34; // eax
  struct Outpop::IONetwork::INET_Addr *v35; // eax
  wchar_t *v36; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  struct Outpop::IONetwork::INET_Addr *local_address; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  Outpop::Utility::Lock *v40; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  int v42; // [esp-8h] [ebp-30h]
  wchar_t *tm; // [esp-4h] [ebp-2Ch]
  int v44; // [esp-4h] [ebp-2Ch]
  int port_number; // [esp-4h] [ebp-2Ch]

  v5 = a2;
  v6 = *(_DWORD *)a4;
  remote_address = Outpop::IONetwork::Channel::get_remote_address(*a2);
  ip_address = Outpop::IONetwork::INET_Addr::get_ip_address(remote_address);
  if ( !Outpop::Message::Context::allow_this_ip(this[12], *(_WORD *)(v6 + 80), ip_address) )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      a2 = (Outpop::IONetwork::Channel **)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)a2);
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v11);
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v12);
      v14 = sub_10023490(log_buffer, L"\nLOGINFO %s:%s Message:", dt, tm);
      v44 = *(unsigned __int16 *)(*(_DWORD *)a4 + 80);
      v15 = Outpop::IONetwork::Channel::get_remote_address(*v5);
      host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v15);
      sub_10023490(
        &log_buffer[v14],
        L"Acceptor_Manager::handle_accept this ip %S is not allow to service port %d!",
        host_addr,
        v44);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v17);
      }
      Outpop::Utility::Lock::unlock((Outpop::Utility::Lock *)a2);
    }
LABEL_10:
    (*(void (__thiscall **)(Outpop::IONetwork::Channel *))(*(_DWORD *)*v5 + 24))(*v5);
    return;
  }
  if ( Outpop::Message::Channel_Manager::add_channel(v5) == -1 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      a3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(a3);
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v19 = Outpop::Utility::Logger::get_log_buffer(v18);
      v20 = sub_10023490(v19, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v36 = Outpop::Utility::Logger::make_tm(v21);
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v23 = Outpop::Utility::Logger::make_dt(v22);
      v24 = sub_10023490(
              &v19[v20],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v23,
              v36,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Acceptor_Manager.cpp",
              63);
      v25 = *a2;
      v26 = v24 + v20;
      v27 = *a2;
      a4 = *(unsigned __int16 **)a4;
      v28 = Outpop::IONetwork::Channel::get_remote_address(v27);
      port_number = Outpop::IONetwork::INET_Addr::get_port_number(v28);
      v29 = Outpop::IONetwork::Channel::get_remote_address(v25);
      v30 = Outpop::IONetwork::INET_Addr::get_host_addr(v29);
      sub_10023490(
        &v19[v26],
        L"Acceptor_Manager::handle_accept service port %d add channel repert remote id %d remote type %d local id %d local"
         " type %d remote address %S:%d",
        a4[40],
        *((_DWORD *)v25 + 3),
        *((_DWORD *)v25 + 5),
        *((_DWORD *)v25 + 2),
        *((_DWORD *)v25 + 4),
        v30,
        port_number);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v19);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v31);
      }
      Outpop::Utility::Lock::unlock(a3);
      v5 = a2;
    }
    goto LABEL_10;
  }
  a2 = 0;
  v32 = *(unsigned __int16 **)a4;
  v33 = *v5;
  v34 = *(_DWORD *)(*(_DWORD *)a4 + 12);
  a4 = (unsigned __int16 *)*((_DWORD *)*v5 + 28);
  v42 = v34;
  v40 = a3;
  local_address = Outpop::IONetwork::Channel::get_local_address(v33);
  v35 = Outpop::IONetwork::Channel::get_remote_address(v33);
  Outpop::Message::Handler_Manager::dispatch_new_channel_build(
    a4,
    *((_DWORD *)v32 + 2),
    *((_DWORD *)v32 + 4),
    *((_DWORD *)v33 + 3),
    *((_DWORD *)v33 + 5),
    v35,
    local_address,
    v40,
    1,
    v42,
    &a2);
  if ( a2 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a2);
  Outpop::Message::Remote_Event_Manager::on_channel_build(
    *((Outpop::Message::Remote_Event_Manager **)this[12] + 18),
    *((_DWORD *)*v5 + 28),
    *((_DWORD *)*v5 + 5),
    *((_DWORD *)*v5 + 3));
}
