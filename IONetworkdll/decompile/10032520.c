/*
 * func-name: ?mack_ack_head@Dgram_Channel@IONetwork@Outpop@@AAE_NAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@W4EPacketType@53@@Z
 * func-address: 0x10032520
 * callers: 0x1002f880
 * callees: 0x10007400, 0x10009580, 0x1000cc60
 */

char __thiscall Outpop::IONetwork::Dgram_Channel::mack_ack_head(
        DWORD *this,
        Outpop::Utility::Ref_Object *LastError,
        int a3)
{
  Outpop::Utility::Stream_Base **v4; // edi
  char v5; // bl
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *tm; // [esp-18h] [ebp-38h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-34h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-30h]
  DWORD v19; // [esp-Ch] [ebp-2Ch]

  v4 = (Outpop::Utility::Stream_Base **)LastError;
  if ( !*((_BYTE *)this + 200)
    || (Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 33)),
        v5 = Outpop::IONetwork::Security_Processer::process(v4, this[45], *((unsigned __int8 *)this + 201)),
        Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(this + 33)),
        v5) )
  {
    Outpop::IONetwork::Dgram_Protocol_Head_Process::make_head(&LastError, v4, a3, *((_BYTE *)this + 201), 0, 0, 0);
    if ( LastError )
      Outpop::Utility::Ref_Object::release(LastError);
    return 1;
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
              1122);
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
    (*(void (__thiscall **)(DWORD *))(*this + 24))(this);
    return 0;
  }
}
