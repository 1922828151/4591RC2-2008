/*
 * func-name: sub_10020640
 * func-address: 0x10020640
 * callers: 0x10020860
 * callees: 0x10023490, 0x10029d92
 */

int __fastcall sub_10020640(int a1, _WORD *a2, const char *const a3, int a4, int a5, Outpop::Utility::Lock *a6)
{
  Outpop::Utility::Lock *v7; // edi
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  Outpop::Utility::Lock *v11; // ebx
  Outpop::Utility::Logger *v12; // eax
  wchar_t *log_buffer; // edi
  int v14; // esi
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Logger *v16; // eax
  wchar_t *dt; // eax
  int v18; // eax
  Outpop::Utility::Logger *v19; // eax
  __int16 v20; // dx
  int v21; // eax
  __int16 v22; // cx
  int v23; // edx
  wchar_t *tm; // [esp-18h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-38h]
  DWORD LastError; // [esp-Ch] [ebp-34h]
  _BYTE pExceptionObject[12]; // [esp+10h] [ebp-18h] BYREF
  int v30; // [esp+24h] [ebp-4h]

  v7 = a6;
  v8 = (_BYTE)a3 == 0;
  *(_BYTE *)a6 = 0;
  v9 = 2;
  *a2 = 0;
  if ( !v8 )
  {
    *a2 = 0x2000;
    v9 = 4;
  }
  if ( a1 )
  {
    v10 = a1 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v11 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          a6 = v11;
          Outpop::Utility::Lock::lock(v11);
          v30 = 0;
          v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v12);
          v14 = sub_10023490(log_buffer, L"\n%s", L"LOG_DEBUG");
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v15);
          v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v16);
          v18 = sub_10023490(
                  &log_buffer[v14],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\MessageService\\Message.cpp",
                  39);
          sub_10023490(&log_buffer[v18 + v14], L"calculate_total_message_size known message type!");
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v19);
          }
          v30 = -1;
          Outpop::Utility::Lock::unlock(v11);
        }
        a3 = (const char *const)&unk_1002F41A;
        std::exception::exception((std::exception *)pExceptionObject, &a3);
        CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AVexception_std__);
      }
      LOBYTE(v20) = 0;
      HIBYTE(v20) = v9 & 0xF;
      v21 = v9 + 4;
      *a2 |= v20;
      *a2 |= 16 * (v21 & 0xF);
      v9 = v21 + 2;
    }
    else
    {
      LOBYTE(v22) = 0;
      HIBYTE(v22) = v9 & 0xF;
      *a2 |= v22;
      v9 += 4;
    }
  }
  if ( a4 )
  {
    *a2 |= v9;
    v9 += 4;
  }
  v23 = a5;
  *(_BYTE *)v7 = v9;
  return v23 + v9;
}
