/*
 * func-name: ?send_system_packet@Dgram_Channel@IONetwork@Outpop@@QAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@W4EPacketType@53@@Z
 * func-address: 0x10030dd0
 * callers: none
 * callees: 0x10007400, 0x10009580, 0x1000cc60, 0x100279d0, 0x10038ad0
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::send_system_packet(
        char *this,
        Outpop::Utility::Ref_Object *LastError,
        int a3)
{
  Outpop::Utility::Stream_Base **v4; // ebp
  char v5; // bl
  Outpop::Utility::Lock *v6; // ebp
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // ebx
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  _DWORD *v15; // ecx
  wchar_t *tm; // [esp-18h] [ebp-38h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-34h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-30h]
  DWORD v19; // [esp-Ch] [ebp-2Ch]

  v4 = (Outpop::Utility::Stream_Base **)LastError;
  if ( !this[200]
    || (Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 132)),
        v5 = Outpop::IONetwork::Security_Processer::process(v4, *((_DWORD *)this + 45), (unsigned __int8)this[201]),
        Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 132)),
        v5) )
  {
    Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&LastError, v4, a3, this[201], 0, 0, 0);
    if ( LastError )
      Outpop::Utility::Ref_Object::release(LastError);
    v15 = (_DWORD *)*((_DWORD *)this + 46);
    if ( v15 )
    {
      Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(v15, v4, (int)(this + 80), 0);
    }
    else if ( *((_DWORD *)this + 47) )
    {
      Outpop::IONetwork::Dgram_Connector::asynch_send_to(v4, this + 80, 0);
    }
  }
  else
  {
    LastError = (Outpop::Utility::Ref_Object *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      a3 = (int)v6;
      Outpop::Utility::Lock::lock(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v19 = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v10);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v11);
      v13 = sub_10007400(
              0xFFFF - v9,
              &log_buffer[v9],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              v19,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
              792);
      sub_10007400(
        0xFFFF - (v13 + v9),
        &log_buffer[v13 + v9],
        L"Dgram_Channel::send_system_packet  process Error:%d",
        LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14);
      }
      Outpop::Utility::Lock::unlock(v6);
    }
    (*(void (__thiscall **)(char *))(*(_DWORD *)this + 24))(this);
  }
}
