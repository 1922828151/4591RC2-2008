/*
 * func-name: ?resend_test_packet@P2P_Channel@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x100452b0
 * callers: 0x100455d0
 * callees: 0x10007400, 0x1004bb00
 */

void __thiscall Outpop::IONetwork::P2P_Channel::resend_test_packet(volatile LONG *this)
{
  Outpop::Utility::Lock *v2; // ebp
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // eax
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  char v12[8]; // [esp-24h] [ebp-50h] BYREF
  int v13; // [esp-1Ch] [ebp-48h]
  wchar_t *tm; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v17; // [esp-Ch] [ebp-38h]
  const wchar_t *v18; // [esp-8h] [ebp-34h]
  int v19; // [esp-4h] [ebp-30h]
  char *LastError; // [esp+18h] [ebp-14h]
  Outpop::Utility::Lock *v21; // [esp+1Ch] [ebp-10h]
  int v22; // [esp+28h] [ebp-4h]

  v19 = 0;
  v18 = 0;
  LastError = v12;
  std::string::string(this + 159);
  v22 = -1;
  if ( Outpop::IONetwork::P2PUdpBuilder::asynch_send_to(
         this + 155,
         this + 20,
         v12[0],
         v12[4],
         v13,
         tm,
         CurrentProcessId,
         CurrentThreadId,
         v17,
         (char)v18,
         v19) == -1 )
  {
    LastError = (char *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v21 = v2;
      Outpop::Utility::Lock::lock(v2);
      v22 = 1;
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v19 = 630;
      v18 = L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp";
      v6 = v5;
      v17 = GetLastError();
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
              dt);
      sub_10007400(
        0xFFFF - (v10 + v6),
        &log_buffer[v10 + v6],
        L"P2P_Channel::send_login_in_packet asynch_send_to  Error code is:%d",
        LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v19 = (int)log_buffer;
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v11);
      }
      v22 = -1;
      Outpop::Utility::Lock::unlock(v2);
    }
  }
  else
  {
    InterlockedIncrement(this + 154);
  }
}
