/*
 * func-name: sub_10010FD0
 * func-address: 0x10010fd0
 * callers: 0x10003ce0
 * callees: 0x1000a570, 0x10013690
 */

void __stdcall sub_10010FD0(int a1)
{
  int v1; // esi
  int v2; // eax
  int v3; // ebx
  Outpop::Utility::Lock *v4; // ebp
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 168);
  if ( v2 )
  {
    v3 = sub_10013690(v2, *(_WORD *)(a1 + 162));
    if ( v3
      && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v4);
      v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
      v7 = sub_1000A570(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v8);
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v9);
      v11 = sub_1000A570(
              0xFFFF - v7,
              &log_buffer[v7],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\P2PNetwork\\UPNP_Network.cpp",
              258);
      sub_1000A570(0xFFFF - (v11 + v7), &log_buffer[v11 + v7], L"UPNPNetwork remove map port error %d", v3);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v12);
      }
      Outpop::Utility::Lock::unlock(v4);
      v1 = a1;
    }
    *(_DWORD *)(v1 + 168) = 0;
  }
}
