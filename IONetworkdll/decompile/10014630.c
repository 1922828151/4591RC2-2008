/*
 * func-name: ?handle_time_result@Stream_Channel@IONetwork@Outpop@@QAEXPAVAsynch_Result@23@@Z
 * func-address: 0x10014630
 * callers: 0x10014db0
 * callees: 0x10007400, 0x10011620
 */

void __thiscall Outpop::IONetwork::Stream_Channel::handle_time_result(
        Outpop::IONetwork::Stream_Channel *this,
        struct Outpop::IONetwork::Asynch_Result *a2)
{
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *tm; // [esp-18h] [ebp-38h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-34h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-30h]
  DWORD LastError; // [esp-Ch] [ebp-2Ch]

  if ( *((_DWORD *)a2 + 6) == 1 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v3);
      v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
      v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v7);
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v8);
      v10 = sub_10007400(
              0xFFFF - v6,
              &log_buffer[v6],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Channel_Base.cpp",
              853);
      sub_10007400(
        0xFFFF - (v10 + v6),
        &log_buffer[v10 + v6],
        L" Stream_Channel::handle_time_result bytes_to_transmit channel id   is",
        *((_DWORD *)this + 28));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v11);
      }
      Outpop::Utility::Lock::unlock(v3);
    }
    Outpop::IONetwork::Stream_Channel::interiorclose(this);
  }
}
