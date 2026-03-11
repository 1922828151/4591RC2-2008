/*
 * func-name: sub_1003B200
 * func-address: 0x1003b200
 * callers: 0x100390a0
 * callees: 0x10007400, 0x10038ad0
 */

int __thiscall sub_1003B200(int this)
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
  Outpop::Utility::Lock *v12; // ebx
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // ebp
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  _DWORD *v21; // eax
  wchar_t *tm; // [esp-18h] [ebp-44h]
  wchar_t *v23; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD v25; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v27; // [esp-10h] [ebp-3Ch]
  DWORD v28; // [esp-Ch] [ebp-38h]
  DWORD v29; // [esp-Ch] [ebp-38h]
  DWORD LastError; // [esp+14h] [ebp-18h]
  _DWORD v31[2]; // [esp+18h] [ebp-14h] BYREF
  int v32; // [esp+28h] [ebp-4h]

  if ( Outpop::IONetwork::Dgram_Connector::asynch_send_to(
         *(_DWORD **)(this + 72),
         (Outpop::Utility::Stream_Base **)(this + 88),
         this + 40,
         0) == -1 )
  {
    LastError = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v31[0] = v2;
      Outpop::Utility::Lock::lock(v2);
      v32 = 0;
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v28 = GetLastError();
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
             v28,
             L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
             553);
      sub_10007400(
        0xFFFF - (v9 + v5),
        &log_buffer[v9 + v5],
        L"Simple_Wait_Stream_Channel resend_stream error: %d",
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
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v31[0] = v12;
      Outpop::Utility::Lock::lock(v12);
      v32 = 1;
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v14 = Outpop::Utility::Logger::get_log_buffer(v13);
      v15 = sub_10007400(0xFFFFu, v14, L"\n%s", L"LOG_DEBUG");
      v29 = GetLastError();
      v27 = GetCurrentThreadId();
      v25 = GetCurrentProcessId();
      v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v23 = Outpop::Utility::Logger::make_tm(v16);
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::make_dt(v17);
      v19 = sub_10007400(
              0xFFFF - v15,
              &v14[v15],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v18,
              v23,
              v25,
              v27,
              v29,
              L"d:\\r3\\outpopgameproject\\ionetwork\\Simple_Channel_Bluider.h",
              558);
      sub_10007400(
        0xFFFF - (v19 + v15),
        &v14[v19 + v15],
        L"Simple_Wait_Stream_Channel resend_stream re_send_count_  is  %d",
        *(__int16 *)(this + 92));
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v14);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v20);
      }
      v32 = -1;
      Outpop::Utility::Lock::unlock(v12);
    }
    v21 = (_DWORD *)Outpop::Utility::Time_Value::gettimeofday(v31);
    v32 = 2;
    *(_DWORD *)(this + 96) = *v21;
    *(_DWORD *)(this + 100) = v21[1];
    v32 = -1;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v31);
    ++*(_WORD *)(this + 92);
    return 0;
  }
}
