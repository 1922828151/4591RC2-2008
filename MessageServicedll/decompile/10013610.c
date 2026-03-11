/*
 * func-name: ?handle_connect_succeed@Connector_Manager@Message@Outpop@@UAEXAAV?$Smart_Ptr@VChannel@IONetwork@Outpop@@@Utility@3@AAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@53@AAV?$Smart_Ptr@VConnector@IONetwork@Outpop@@@53@@Z
 * func-address: 0x10013610
 * callers: none
 * callees: 0x10011070, 0x1001f910, 0x10023490, 0x10028ed0
 */

void __thiscall Outpop::Message::Connector_Manager::handle_connect_succeed(
        char *this,
        Outpop::IONetwork::Channel **a2,
        int a3,
        _DWORD *a4)
{
  Outpop::Utility::Lock *v5; // esi
  char v6; // bl
  Outpop::IONetwork::Channel **v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // ebx
  int v10; // edi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::IONetwork::Channel *v15; // esi
  int v16; // edi
  Outpop::IONetwork::INET_Addr *remote_address; // eax
  Outpop::IONetwork::INET_Addr *v18; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v20; // eax
  int v21; // esi
  struct Outpop::IONetwork::INET_Addr *v22; // eax
  int act; // eax
  int v24; // edi
  Outpop::IONetwork::Channel *v25; // esi
  struct Outpop::IONetwork::INET_Addr *v26; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  int v31; // [esp-Ch] [ebp-34h]
  int v32; // [esp-8h] [ebp-30h]
  int port_number; // [esp-4h] [ebp-2Ch]
  int v34; // [esp-4h] [ebp-2Ch]
  Outpop::Utility::Lock *v35; // [esp+14h] [ebp-14h]
  Outpop::Utility::Ref_Object *v36[3]; // [esp+18h] [ebp-10h] BYREF
  int v37; // [esp+24h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+28h] [ebp+0h]

  v5 = (Outpop::Utility::Lock *)(this + 48);
  v36[0] = (Outpop::Utility::Ref_Object *)(this + 48);
  Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)(this + 48));
  v37 = 0;
  v6 = this[124];
  v37 = -1;
  Outpop::Utility::Lock::unlock(v5);
  if ( v6 == 1 )
  {
    v7 = a2;
    if ( Outpop::Message::Channel_Manager::add_channel(*(_DWORD **)(*((_DWORD *)this + 1) + 32), a2) == -1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v35 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v35);
        v37 = 1;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = sub_10023490(log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v11);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v12);
        v14 = sub_10023490(
                &log_buffer[v10],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
                130);
        v15 = *a2;
        v16 = v14 + v10;
        remote_address = Outpop::IONetwork::Channel::get_remote_address(*a2);
        port_number = Outpop::IONetwork::INET_Addr::get_port_number(remote_address);
        v18 = Outpop::IONetwork::Channel::get_remote_address(v15);
        host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v18);
        sub_10023490(
          &log_buffer[v16],
          L"Connector_Manager::handle_connect_succeed add channel repert remote id %d remote type %d local id %d local typ"
           "e %d remote address %S:%d",
          *((_DWORD *)v15 + 3),
          *((_DWORD *)v15 + 5),
          *((_DWORD *)v15 + 2),
          *((_DWORD *)v15 + 4),
          host_addr,
          port_number);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v20);
        }
        v37 = -1;
        Outpop::Utility::Lock::unlock(v35);
        v7 = a2;
      }
      (*(void (__thiscall **)(Outpop::IONetwork::Channel *))(*(_DWORD *)*v7 + 24))(*v7);
      v21 = *(_DWORD *)this;
      v22 = Outpop::IONetwork::Channel::get_remote_address(*v7);
      (*(void (__thiscall **)(char *, int, struct Outpop::IONetwork::INET_Addr *))(v21 + 8))(this, -1, v22);
    }
    else
    {
      act = Outpop::IONetwork::Connector::get_act(*a4, v36);
      v36[2] = (Outpop::Utility::Ref_Object *)2;
      v24 = *a4;
      v25 = *a2;
      v32 = act;
      v31 = *(_DWORD *)(*a4 + 108);
      retaddr = (_UNKNOWN *)*((_DWORD *)*a2 + 28);
      Outpop::IONetwork::Channel::get_local_address(*a2);
      v26 = Outpop::IONetwork::Channel::get_remote_address(v25);
      Outpop::Message::Handler_Manager::dispatch_new_channel_build(
        a2,
        *(_DWORD *)(v24 + 12),
        *(_DWORD *)(v24 + 20),
        *((_DWORD *)v25 + 3),
        *((_DWORD *)v25 + 5),
        v26,
        a2,
        0,
        v31,
        v32,
        v34);
      v37 = -1;
      if ( v36[0] )
        Outpop::Utility::Ref_Object::release(v36[0]);
      Outpop::Message::Remote_Event_Manager::on_channel_build(
        *(Outpop::Message::Remote_Event_Manager **)(*((_DWORD *)this + 1) + 72),
        *((_DWORD *)*a2 + 28),
        *(_DWORD *)(*a4 + 24),
        *(_DWORD *)(*a4 + 16));
    }
  }
}
