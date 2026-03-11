/*
 * func-name: ??1CryptProv@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10007d00
 * callers: 0x100089a0, 0x1000d560
 * callees: 0x10007400
 */

void __thiscall Outpop::IONetwork::CryptProv::~CryptProv(HCRYPTPROV *this)
{
  HCRYPTPROV *v1; // esi
  Outpop::Utility::Lock *v2; // ebp
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  HCRYPTPROV v11; // esi
  Outpop::Utility::Lock *v12; // ebp
  Outpop::Utility::Logger *v13; // eax
  wchar_t *v14; // edi
  int v15; // esi
  Outpop::Utility::Logger *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // eax
  int v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *tm; // [esp-18h] [ebp-44h]
  wchar_t *v22; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD v24; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v26; // [esp-10h] [ebp-3Ch]
  DWORD v27; // [esp-Ch] [ebp-38h]
  DWORD v28; // [esp-Ch] [ebp-38h]
  DWORD LastError; // [esp+14h] [ebp-18h]
  DWORD v31; // [esp+18h] [ebp-14h]

  v1 = this;
  if ( this[2] )
  {
    if ( !CryptDestroyKey(this[2]) )
    {
      LastError = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v2);
        v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
        v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v27 = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v6);
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v7);
        v9 = sub_10007400(
               0xFFFF - v5,
               &log_buffer[v5],
               L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
               dt,
               tm,
               CurrentProcessId,
               CurrentThreadId,
               v27,
               L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
               87);
        sub_10007400(
          0xFFFF - (v9 + v5),
          &log_buffer[v9 + v5],
          L"CryptProv::~CryptProv  CryptDestroyKey  failed:%d",
          LastError);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v10);
        }
        Outpop::Utility::Lock::unlock(v2);
        v1 = this;
      }
    }
  }
  v11 = *v1;
  if ( v11 )
  {
    if ( !CryptReleaseContext(v11, 0) )
    {
      v31 = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v12 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v12);
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v14 = Outpop::Utility::Logger::get_log_buffer(v13);
        v15 = sub_10007400(0xFFFFu, v14, L"\n%s", L"LOG_ERROR");
        v28 = GetLastError();
        v26 = GetCurrentThreadId();
        v24 = GetCurrentProcessId();
        v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v22 = Outpop::Utility::Logger::make_tm(v16);
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v18 = Outpop::Utility::Logger::make_dt(v17);
        v19 = sub_10007400(
                0xFFFF - v15,
                &v14[v15],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v18,
                v22,
                v24,
                v26,
                v28,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
                96);
        sub_10007400(
          0xFFFF - (v19 + v15),
          &v14[v19 + v15],
          L"CryptProv::~CryptProv  CryptReleaseContext  failed:%d",
          v31);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v14);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v20);
        }
        Outpop::Utility::Lock::unlock(v12);
      }
    }
  }
}
