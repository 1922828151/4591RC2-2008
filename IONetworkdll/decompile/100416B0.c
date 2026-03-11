/*
 * func-name: ?handle_write_stream@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@UAEXAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x100416b0
 * callers: none
 * callees: 0x10007400, 0x10038d30
 */

void __thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::handle_write_stream(
        Outpop::IONetwork::Dgram_Connector **this,
        int a2)
{
  Outpop::Utility::Lock *v2; // ebx
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD v14; // [esp-Ch] [ebp-34h]
  DWORD LastError; // [esp+14h] [ebp-14h]

  if ( Outpop::IONetwork::Dgram_Connector::asynch_receive(this[10], 0) == -1 )
  {
    LastError = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v2);
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v14 = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v7);
      v9 = sub_10007400(
             0xFFFF - v5,
             &log_buffer[v5],
             L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
             dt,
             tm,
             CurrentProcessId,
             CurrentThreadId,
             v14,
             L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
             663);
      sub_10007400(
        0xFFFF - (v9 + v5),
        &log_buffer[v9 + v5],
        L"Connect_Bluider_Process::handle_write_stream asynch_recv_stream Error,Errorcode is %d",
        LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v10);
      }
      Outpop::Utility::Lock::unlock(v2);
    }
  }
}
