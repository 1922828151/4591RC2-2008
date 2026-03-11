/*
 * func-name: ?send@Message_Sender@Message@Outpop@@QAEXHAAV?$Smart_Ptr@VMessage@1Outpop@@@Utility@3@@Z
 * func-address: 0x10020fa0
 * callers: 0x1000cd90, 0x1001ae60, 0x100253f0, 0x10025e70, 0x10026580, 0x10028370, 0x10028ae0
 * callees: 0x10011530, 0x10023490
 */

void __thiscall Outpop::Message::Message_Sender::send(_DWORD *this, int a2, Outpop::Utility::Stream_Base **a3)
{
  Outpop::Utility::Ref_Object *v3; // ebp
  Outpop::Utility::Lock *v4; // ebx
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // esi
  Outpop::IONetwork::INET_Addr *remote_address; // eax
  Outpop::IONetwork::INET_Addr *v13; // eax
  const char *host_addr; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  int port_number; // [esp-8h] [ebp-30h]
  int readable; // [esp-4h] [ebp-2Ch]

  v3 = (Outpop::Utility::Ref_Object *)*Outpop::Message::Channel_Manager::find_channel(*(_DWORD **)(this[4] + 32), a2);
  if ( v3 )
  {
    Outpop::Utility::Ref_Object::addref(v3);
    (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, Outpop::Utility::Stream_Base **))(*(_DWORD *)v3 + 20))(
      v3,
      a3);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v4);
      v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
      v7 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v8);
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v9);
      v11 = sub_10023490(
              &log_buffer[v7],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Message_Sender.cpp",
              62)
          + v7;
      readable = Outpop::Utility::Stream_Base::get_readable(*a3);
      remote_address = Outpop::IONetwork::Channel::get_remote_address(v3);
      port_number = Outpop::IONetwork::INET_Addr::get_port_number(remote_address);
      v13 = Outpop::IONetwork::Channel::get_remote_address(v3);
      host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v13);
      sub_10023490(
        &log_buffer[v11],
        L"Message_Sender send message to channel id %d remote %S:%d data size %d",
        a2,
        host_addr,
        port_number,
        readable);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v15);
      }
      Outpop::Utility::Lock::unlock(v4);
    }
  }
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
}
