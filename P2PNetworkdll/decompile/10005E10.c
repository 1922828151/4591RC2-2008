/*
 * func-name: ?print_remote_peer@Peer@P2P@Outpop@@QAEXXZ
 * func-address: 0x10005e10
 * callers: none
 * callees: 0x1000a570, 0x100234ce
 */

void __thiscall Outpop::P2P::Peer::print_remote_peer(Outpop::P2P::Peer *this)
{
  struct Outpop::IONetwork::Asynch_Result *v2; // eax
  struct Outpop::IONetwork::Asynch_Result *v3; // esi
  Outpop::Utility::Lock *v4; // ebp
  Outpop::Utility::Logger *v5; // eax
  wchar_t *log_buffer; // edi
  int v7; // esi
  Outpop::Utility::Logger *v8; // eax
  Outpop::Utility::Logger *v9; // eax
  wchar_t *dt; // eax
  int v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]

  v2 = (struct Outpop::IONetwork::Asynch_Result *)operator new(0x20u);
  if ( v2 )
  {
    *((_DWORD *)v2 + 7) = this;
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 5) = 0;
    *((_DWORD *)v2 + 1) = 0;
    *((_DWORD *)v2 + 2) = 0;
    *((_DWORD *)v2 + 4) = 0;
    *((_DWORD *)v2 + 3) = 0;
    *(_DWORD *)v2 = &Outpop::P2P::Peer_Print_Result::`vftable';
    v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
         (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
         v3,
         0) == -1 )
  {
    if ( v3 )
      (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v3)(v3, 1);
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
    {
      v4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v4);
      v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v5);
      v7 = sub_1000A570(log_buffer, L"\n%s", L"LOG_FATAL");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v8);
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v9);
      v11 = sub_1000A570(
              &log_buffer[v7],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
              777);
      sub_1000A570(&log_buffer[v11 + v7], L"Peer post peer print error");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v12);
      }
      Outpop::Utility::Lock::unlock(v4);
    }
  }
}
