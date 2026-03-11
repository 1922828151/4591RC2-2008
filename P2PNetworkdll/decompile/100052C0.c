/*
 * func-name: ?change_peer_id@Peer@P2P@Outpop@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100052c0
 * callers: none
 * callees: 0x10002c60, 0x1000a570, 0x100234ce
 */

void __thiscall Outpop::P2P::Peer::change_peer_id(char *this, void *a2)
{
  _DWORD *v3; // eax
  struct Outpop::IONetwork::Asynch_Result *v4; // esi
  Outpop::Utility::Lock *v5; // ebp
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  wchar_t *tm; // [esp-18h] [ebp-38h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-34h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-30h]
  DWORD LastError; // [esp-Ch] [ebp-2Ch]

  if ( !(unsigned __int8)std::operator==<char>(a2, this + 32)
    && !(unsigned __int8)std::operator==<char>(a2, &unk_10026701) )
  {
    v3 = operator new(0x3Cu);
    v4 = v3 ? (struct Outpop::IONetwork::Asynch_Result *)sub_10002C60(a2, v3, (int)this) : 0;
    if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
           (Outpop::IONetwork::WIN32_IoCompletionPort *)(dword_10030AA4 + 20),
           v4,
           0) == -1 )
    {
      if ( v4 )
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v4)(v4, 1);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
      {
        v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v5);
        v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
        v8 = sub_1000A570(log_buffer, L"\n%s", L"LOG_FATAL");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v9);
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v10);
        v12 = sub_1000A570(
                &log_buffer[v8],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                682);
        sub_1000A570(&log_buffer[v12 + v8], L"Peer post peer change id error");
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v13);
        }
        Outpop::Utility::Lock::unlock(v5);
      }
    }
  }
}
