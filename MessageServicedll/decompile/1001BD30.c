/*
 * func-name: sub_1001BD30
 * func-address: 0x1001bd30
 * callers: 0x1000d2e0
 * callees: 0x1001a760, 0x1001a980, 0x10021930, 0x10023490, 0x100278a0, 0x100295c0
 */

void __stdcall sub_1001BD30(int *a1)
{
  int *v1; // ebp
  int v2; // eax
  _DWORD *v3; // eax
  struct Outpop::IONetwork::Asynch_Result *v4; // edi
  Outpop::Utility::Lock *v5; // ebp
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // esi
  DWORD v13; // eax
  Outpop::Utility::Logger *v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  struct Outpop::IONetwork::Asynch_Result *v17; // esi
  Outpop::Utility::Lock *v18; // ebp
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // edi
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // esi
  DWORD v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  wchar_t *v29; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD v31; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v33; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  DWORD v35; // [esp-Ch] [ebp-30h]

  v1 = a1;
  v2 = a1[40];
  if ( v2 && (a1[41] - v2) >> 3 )
  {
    v3 = operator new(0x30u);
    v4 = 0;
    if ( v3 )
      v4 = (struct Outpop::IONetwork::Asynch_Result *)sub_1001A760(v3, *a1, (int)(a1 + 39));
    if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
           (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*a1 + 64) + 76),
           v4,
           0) == -1 )
    {
      if ( v4 )
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v4)(v4, 1);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v5);
        v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
        v8 = sub_10023490(log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v9);
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v10);
        v12 = sub_10023490(
                &log_buffer[v8],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Group_Request_Ack.cpp",
                491)
            + v8;
        v13 = GetLastError();
        sub_10023490(&log_buffer[v12], L"Group Request Ack post group message to win32 io port error %d", v13);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v14);
        }
        Outpop::Utility::Lock::unlock(v5);
        v1 = a1;
      }
    }
    else
    {
      sub_10021930();
    }
  }
  v15 = v1[44];
  if ( v15 && (v1[45] - v15) / 12 )
  {
    v16 = operator new(0x30u);
    if ( v16 )
      v17 = (struct Outpop::IONetwork::Asynch_Result *)sub_1001A980(v16, *v1, (int)(v1 + 43));
    else
      v17 = 0;
    if ( Outpop::IONetwork::WIN32_IoCompletionPort::post(
           (Outpop::IONetwork::WIN32_IoCompletionPort *)(*(_DWORD *)(*v1 + 64) + 76),
           v17,
           0) == -1 )
    {
      if ( v17 )
        (**(void (__thiscall ***)(struct Outpop::IONetwork::Asynch_Result *, int))v17)(v17, 1);
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v18 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v18);
        v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v20 = Outpop::Utility::Logger::get_log_buffer(v19);
        v21 = sub_10023490(v20, L"\n%s", L"LOG_ERROR");
        v35 = GetLastError();
        v33 = GetCurrentThreadId();
        v31 = GetCurrentProcessId();
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v29 = Outpop::Utility::Logger::make_tm(v22);
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v24 = Outpop::Utility::Logger::make_dt(v23);
        v25 = sub_10023490(
                &v20[v21],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v24,
                v29,
                v31,
                v33,
                v35,
                L"D:\\R3\\OutpopGameProject\\MessageService\\Group_Request_Ack.cpp",
                505)
            + v21;
        v26 = GetLastError();
        sub_10023490(&v20[v25], L"Group Request Ack post group request to win32 io port error %d", v26);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v20);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v27);
        }
        Outpop::Utility::Lock::unlock(v18);
      }
    }
    else
    {
      sub_100278A0();
    }
  }
}
