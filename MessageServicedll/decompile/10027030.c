/*
 * func-name: ?flush@Request_Ack@Message@Outpop@@QAEXXZ
 * func-address: 0x10027030
 * callers: 0x1000d2e0
 * callees: 0x10023490, 0x10023940, 0x100278a0, 0x100295c0
 */

void __thiscall Outpop::Message::Request_Ack::flush(Outpop::Message::Request_Ack *this)
{
  int v2; // eax
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  struct Outpop::IONetwork::Asynch_Result *v5; // esi
  Outpop::Utility::Lock *v6; // ebp
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // esi
  DWORD v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  struct Outpop::IONetwork::Asynch_Result *v20; // [esp+14h] [ebp-14h]

  v2 = *((_DWORD *)this + 43);
  v3 = (_DWORD *)((char *)this + 168);
  if ( v2 && (*((_DWORD *)this + 44) - v2) / 12 )
  {
    v4 = operator new(0x30u);
    if ( v4 )
    {
      v5 = (struct Outpop::IONetwork::Asynch_Result *)sub_10023940(v4, *((_DWORD *)this + 1), v3);
      v20 = v5;
    }
    else
    {
      v20 = 0;
      v5 = 0;
    }
    if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
           (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76),
           v5,
           0) == -1 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v6);
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
        v9 = sub_10023490(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v10);
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v11);
        v13 = sub_10023490(
                0xFFFF - v9,
                &log_buffer[v9],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Request_Ack.cpp",
                474)
            + v9;
        v14 = GetLastError();
        sub_10023490(
          0xFFFF - v13,
          &log_buffer[v13],
          L"Request Ack flush error because win32 io port post error %d",
          v14);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        Outpop::Utility::Lock::unlock(v6);
        v5 = v20;
      }
      if ( v5 )
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v5)(v5, 1);
    }
    else
    {
      sub_100278A0();
    }
  }
}
