/*
 * func-name: ?flush@Channel_Manager@Message@Outpop@@QAEXXZ
 * func-address: 0x10012080
 * callers: 0x1000d2e0
 * callees: 0x10010270, 0x100105c0, 0x10015db0, 0x10023490, 0x100295c0
 */

void __thiscall Outpop::Message::Channel_Manager::flush(Outpop::Message::Channel_Manager *this)
{
  int v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  struct Outpop::IONetwork::Asynch_Result *v5; // esi
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  struct Outpop::IONetwork::Asynch_Result *v17; // esi
  wchar_t *tm; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-38h]

  v2 = *((_DWORD *)this + 34);
  v3 = (_DWORD *)((char *)this + 132);
  if ( v2 && (*((_DWORD *)this + 35) - v2) >> 2 )
  {
    v4 = operator new(0x30u);
    if ( v4 )
      v5 = (struct Outpop::IONetwork::Asynch_Result *)sub_10010270(v4, *((_DWORD *)this + 15), v3);
    else
      v5 = 0;
    if ( v5 )
    {
      if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
             (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 15) + 64) + 76),
             v5,
             0) == -1 )
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v5)(v5, 1);
      else
        sub_10015DB0();
    }
    else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
            || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
           && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
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
              L"D:\\R3\\OutpopGameProject\\MessageService\\Channel_Manager.cpp",
              326);
      sub_10023490(&log_buffer[v13 + v9], L"Channel_Manager::Flush Post_Start_Channel new error!");
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
  v15 = *((_DWORD *)this + 38);
  if ( v15 && (*((_DWORD *)this + 39) - v15) >> 2 )
  {
    v16 = operator new(0x30u);
    if ( v16 )
      v17 = (struct Outpop::IONetwork::Asynch_Result *)sub_100105C0(v16, *((_DWORD *)this + 15), (_DWORD *)this + 37);
    else
      v17 = 0;
    if ( v17 )
    {
      if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
             (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 15) + 64) + 76),
             v17,
             0) == -1 )
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v17)(v17, 1);
      else
        sub_10015DB0();
    }
  }
}
