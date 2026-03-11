/*
 * func-name: ?flush@Connector_Manager@Message@Outpop@@QAEXXZ
 * func-address: 0x10015330
 * callers: 0x1000d2e0
 * callees: 0x10012e10, 0x10013040, 0x10015d70, 0x10015db0, 0x10023490, 0x100295c0
 */

void __thiscall Outpop::Message::Connector_Manager::flush(Outpop::Message::Connector_Manager *this)
{
  int v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  struct Outpop::IONetwork::Asynch_Result *v5; // edi
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
  int v16; // eax
  _DWORD *v17; // eax
  struct Outpop::IONetwork::Asynch_Result *v18; // ebx
  Outpop::Utility::Lock *v19; // ebp
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // edi
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // eax
  int v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *tm; // [esp-18h] [ebp-44h]
  wchar_t *v29; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD v31; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v33; // [esp-10h] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-38h]
  DWORD v35; // [esp-Ch] [ebp-38h]
  struct Outpop::IONetwork::Asynch_Result *v36; // [esp+14h] [ebp-18h]

  v2 = *((_DWORD *)this + 28);
  v3 = (_DWORD *)((char *)this + 108);
  if ( v2 && (*((_DWORD *)this + 29) - v2) >> 2 )
  {
    v4 = operator new(0x30u);
    if ( v4 )
    {
      v5 = (struct Outpop::IONetwork::Asynch_Result *)sub_10013040(v4, *((_DWORD *)this + 1), v3);
      v36 = v5;
    }
    else
    {
      v36 = 0;
      v5 = 0;
    }
    if ( v5 )
    {
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
                  L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
                  379);
          sub_10023490(&log_buffer[v13 + v9], L"Connector_Manager::flush post close error");
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v14);
          }
          Outpop::Utility::Lock::unlock(v6);
          v5 = v36;
        }
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v5)(v5, 1);
      }
      else
      {
        sub_10015DB0();
      }
    }
  }
  v15 = *((_DWORD *)this + 20);
  if ( v15 && (*((_DWORD *)this + 21) - v15) / 108
    || (v16 = *((_DWORD *)this + 24)) != 0 && (*((_DWORD *)this + 25) - v16) >> 2 )
  {
    v17 = operator new(0x40u);
    v18 = v17
        ? (struct Outpop::IONetwork::Asynch_Result *)sub_10012E10(
                                                       v17,
                                                       *((_DWORD *)this + 1),
                                                       (_DWORD *)this + 23,
                                                       (_DWORD *)this + 19)
        : 0;
    if ( v18 )
    {
      if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
             (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*((_DWORD *)this + 1) + 64) + 76),
             v18,
             0) == -1 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v19 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v19);
          v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v21 = Outpop::Utility::Logger::get_log_buffer(v20);
          v22 = sub_10023490(v21, L"\n%s", L"LOG_ERROR");
          v35 = GetLastError();
          v33 = GetCurrentThreadId();
          v31 = GetCurrentProcessId();
          v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v29 = Outpop::Utility::Logger::make_tm(v23);
          v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v25 = Outpop::Utility::Logger::make_dt(v24);
          v26 = sub_10023490(
                  &v21[v22],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v25,
                  v29,
                  v31,
                  v33,
                  v35,
                  L"D:\\R3\\OutpopGameProject\\MessageService\\Connector_Manager.cpp",
                  395);
          sub_10023490(&v21[v26 + v22], L"Connector_Manager::flush post connect error");
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v21);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v27);
          }
          Outpop::Utility::Lock::unlock(v19);
        }
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v18)(v18, 1);
      }
      else
      {
        sub_10015D70();
        sub_10015DB0();
      }
    }
  }
}
