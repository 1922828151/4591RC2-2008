/*
 * func-name: ?send@Message_Sender@Message@Outpop@@QAEXHAAV?$vector@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@V?$allocator@V?$Smart_Ptr@VMessage@1Outpop@@@Utility@Outpop@@@std@@@std@@@Z
 * func-address: 0x100211a0
 * callers: 0x1000cdb0, 0x10020d10
 * callees: 0x10011530, 0x10023490
 */

void __thiscall Outpop::Message::Message_Sender::send(_DWORD *this, int a2, int a3)
{
  Outpop::Utility::Ref_Object *v3; // ebp
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  Outpop::IONetwork::INET_Addr *remote_address; // eax
  Outpop::IONetwork::INET_Addr *v14; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  int port_number; // [esp-8h] [ebp-30h]
  int v22; // [esp-4h] [ebp-2Ch]
  Outpop::Utility::Lock *v23; // [esp+14h] [ebp-14h]

  v3 = (Outpop::Utility::Ref_Object *)*Outpop::Message::Channel_Manager::find_channel(*(_DWORD **)(this[4] + 32), a2);
  if ( v3 )
  {
    Outpop::Utility::Ref_Object::addref(v3);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v23 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v23);
      v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
      v6 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v7);
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v8);
      v10 = sub_10023490(
              &log_buffer[v6],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Message_Sender.cpp",
              92)
          + v6;
      v11 = *(_DWORD *)(a3 + 4);
      if ( v11 )
        v12 = (*(_DWORD *)(a3 + 8) - v11) >> 2;
      else
        v12 = 0;
      v22 = v12;
      remote_address = Outpop::IONetwork::Channel::get_remote_address(v3);
      port_number = Outpop::IONetwork::INET_Addr::get_port_number(remote_address);
      v14 = Outpop::IONetwork::Channel::get_remote_address(v3);
      host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v14);
      sub_10023490(
        &log_buffer[v10],
        L"Message_Sender send vector message to channel id %d remote %S:%d packets %d",
        a2,
        host_addr,
        port_number,
        v22);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v16);
      }
      Outpop::Utility::Lock::unlock(v23);
    }
    (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, int))(*(_DWORD *)v3 + 12))(v3, a3);
  }
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
}
