/*
 * func-name: ?send_login_in_packet@Dgram_Channel@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x10032020
 * callers: 0x10027c50
 * callees: 0x10007400, 0x100279d0
 */

void __thiscall Outpop::IONetwork::Dgram_Channel::send_login_in_packet(Outpop::IONetwork::Dgram_Channel *this)
{
  _DWORD *v2; // ecx
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD v15; // [esp-Ch] [ebp-34h]
  DWORD LastError; // [esp+14h] [ebp-14h]

  v2 = (_DWORD *)*((_DWORD *)this + 46);
  if ( v2 )
  {
    if ( Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(
           v2,
           (Outpop::Utility::Stream_Base **)this + 157,
           (int)this + 80,
           0) == -1 )
    {
      LastError = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v3);
        v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
        v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v15 = GetLastError();
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
                v15,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Channel.cpp",
                1061);
        sub_10007400(
          0xFFFF - (v10 + v6),
          &log_buffer[v10 + v6],
          L"Dgram_Channel::send_login_in_packet asynch_send_to  Error code is:%d",
          LastError);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v11);
        }
        Outpop::Utility::Lock::unlock(v3);
      }
    }
    else
    {
      InterlockedIncrement((volatile LONG *)this + 156);
    }
  }
}
