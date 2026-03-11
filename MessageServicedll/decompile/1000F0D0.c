/*
 * func-name: ?flush@Acceptor_Manager@Message@Outpop@@QAEXXZ
 * func-address: 0x1000f0d0
 * callers: 0x1000d2e0
 * callees: 0x1000e0d0, 0x1000fb00, 0x10023490, 0x100295c0
 */

void __thiscall Outpop::Message::Acceptor_Manager::flush(Outpop::Message::Acceptor_Manager *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  struct Outpop::IONetwork::Asynch_Result *v5; // edi
  Outpop::Utility::Lock *v6; // ebp
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]

  v2 = *((_DWORD *)this + 20);
  v3 = (_DWORD *)((char *)this + 76);
  if ( v2 && (*((_DWORD *)this + 21) - v2) / 116 )
  {
    v4 = operator new(0x30u);
    if ( v4 )
      v5 = (struct Outpop::IONetwork::Asynch_Result *)sub_1000E0D0(v4, *((_DWORD *)this + 12), v3);
    else
      v5 = 0;
    if ( v5 )
    {
      if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
             (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 12) + 64) + 76),
             v5,
             0) == -1 )
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v5)(v5, 1);
      else
        sub_1000FB00();
    }
    else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
            || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
           && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10023490(log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v10);
      v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v11);
      v13 = sub_10023490(
              &log_buffer[v9],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Acceptor_Manager.cpp",
              210);
      sub_10023490(&log_buffer[v13 + v9], L"Acceptor_Manager flush Post_Add_Accetpor new error!");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14);
      }
      Outpop::Utility::Lock::unlock(v6);
    }
  }
}
