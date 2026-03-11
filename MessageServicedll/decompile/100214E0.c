/*
 * func-name: ?flush@Message_Sender@Message@Outpop@@QAEXXZ
 * func-address: 0x100214e0
 * callers: 0x1000d2e0
 * callees: 0x10020c00, 0x10021930, 0x10023490, 0x100295c0
 */

void __thiscall Outpop::Message::Message_Sender::flush(Outpop::Message::Message_Sender *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  struct Outpop::IONetwork::Asynch_Result *v4; // edi
  Outpop::Utility::Lock *v5; // ebp
  Outpop::Utility::Logger *v6; // eax
  wchar_t *v7; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *v11; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Lock *v14; // esi
  Outpop::Utility::Logger *v15; // eax
  wchar_t *log_buffer; // ebp
  int v17; // edi
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *dt; // eax
  int v21; // edi
  DWORD v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // [esp-18h] [ebp-44h]
  wchar_t *tm; // [esp-18h] [ebp-44h]
  DWORD v26; // [esp-14h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD v28; // [esp-10h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v30; // [esp-Ch] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-38h]
  struct Outpop::IONetwork::Asynch_Result *v32; // [esp+14h] [ebp-18h]

  v2 = *((_DWORD *)this + 1);
  if ( v2 && (*((_DWORD *)this + 2) - v2) >> 3 )
  {
    v3 = operator new(0x30u);
    if ( v3 )
    {
      v4 = (struct Outpop::IONetwork::Asynch_Result *)sub_10020C00(v3, *((_DWORD *)this + 4), this);
      v32 = v4;
    }
    else
    {
      v32 = 0;
      v4 = 0;
    }
    if ( v4 )
    {
      if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
             (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 4) + 64) + 76),
             v4,
             0) == -1 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
        {
          v14 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v14);
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v15);
          v17 = sub_10023490(log_buffer, L"\n%s", L"LOG_FATAL");
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v18);
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v19);
          v21 = sub_10023490(
                  &log_buffer[v17],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\MessageService\\Message_Sender.cpp",
                  143)
              + v17;
          v22 = GetLastError();
          sub_10023490(&log_buffer[v21], L"Message Sender flush failed becase win32 io port %d", v22);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v23);
          }
          Outpop::Utility::Lock::unlock(v14);
          v4 = v32;
        }
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v4)(v4, 1);
      }
      sub_10021930();
    }
    else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
            || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
           && *(_BYTE *)(Outpop::Utility::Logger::instance() + 142) == 1 )
    {
      v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v5);
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v7 = Outpop::Utility::Logger::get_log_buffer(v6);
      v8 = sub_10023490(v7, L"\n%s", L"LOG_FATAL");
      v30 = GetLastError();
      v28 = GetCurrentThreadId();
      v26 = GetCurrentProcessId();
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v24 = Outpop::Utility::Logger::make_tm(v9);
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v11 = Outpop::Utility::Logger::make_dt(v10);
      v12 = sub_10023490(
              &v7[v8],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v11,
              v24,
              v26,
              v28,
              v30,
              L"D:\\R3\\OutpopGameProject\\MessageService\\Message_Sender.cpp",
              138);
      sub_10023490(&v7[v12 + v8], L"Message Sender flush can't creat pam");
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v7);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v13);
      }
      Outpop::Utility::Lock::unlock(v5);
    }
  }
}
