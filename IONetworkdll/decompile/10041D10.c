/*
 * func-name: ?resend_stream@Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAEHXZ
 * func-address: 0x10041d10
 * callers: 0x100390a0
 * callees: 0x10007400, 0x10038ad0
 */

int __thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::resend_stream(
        Outpop::IONetwork::Dgram_Connect_Bluider_Process *this)
{
  Outpop::Utility::Lock *v2; // ebp
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // edi
  int v14; // esi
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *v17; // eax
  int v18; // eax
  Outpop::Utility::Logger *v19; // eax
  _DWORD *v20; // eax
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  wchar_t *v22; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD v24; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD v26; // [esp-10h] [ebp-44h]
  DWORD v27; // [esp-Ch] [ebp-40h]
  DWORD v28; // [esp-Ch] [ebp-40h]
  DWORD LastError; // [esp+14h] [ebp-20h]
  Outpop::Utility::Lock *v30; // [esp+14h] [ebp-20h]
  _BYTE v31[12]; // [esp+1Ch] [ebp-18h] BYREF
  int v32; // [esp+30h] [ebp-4h]

  if ( Outpop::IONetwork::Dgram_Connector::asynch_send_to(
         *((_DWORD **)this + 10),
         (Outpop::Utility::Stream_Base **)this + 13,
         (int)this + 8,
         0) == -1 )
  {
    LastError = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v2);
      v32 = 0;
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v27 = GetLastError();
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
             v27,
             L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
             766);
      sub_10007400(
        0xFFFF - (v9 + v5),
        &log_buffer[v9 + v5],
        L"Dgram_Connect_Bluider_Process  resend_stream  error: %d",
        LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v10);
      }
      v32 = -1;
      Outpop::Utility::Lock::unlock(v2);
    }
    return -1;
  }
  else
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v30 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v30);
      v32 = 1;
      v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v13 = Outpop::Utility::Logger::get_log_buffer(v12);
      v14 = sub_10007400(0xFFFFu, v13, L"\n%s", L"LOG_ERROR");
      v28 = GetLastError();
      v26 = GetCurrentThreadId();
      v24 = GetCurrentProcessId();
      v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v22 = Outpop::Utility::Logger::make_tm(v15);
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v17 = Outpop::Utility::Logger::make_dt(v16);
      v18 = sub_10007400(
              0xFFFF - v14,
              &v13[v14],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v17,
              v22,
              v24,
              v26,
              v28,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Bluider_Process.cpp",
              771);
      sub_10007400(
        0xFFFF - (v18 + v14),
        &v13[v18 + v14],
        L"Dgram_Connect_Bluider_Process  resend_stream  re_send_count_  is %d",
        *((_DWORD *)this + 14));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v13);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v19);
      }
      v32 = -1;
      Outpop::Utility::Lock::unlock(v30);
    }
    v20 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v31);
    v32 = 2;
    *((_DWORD *)this + 15) = *v20;
    *((_DWORD *)this + 16) = v20[1];
    v32 = -1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v31);
    InterlockedIncrement((volatile LONG *)this + 14);
    return 0;
  }
}
