/*
 * func-name: ??0Crypto_Aes@IONetwork@Outpop@@QAE@XZ
 * func-address: 0x10005b70
 * callers: 0x1000d110
 * callees: 0x10007400
 */

HCRYPTPROV *__thiscall Outpop::IONetwork::Crypto_Aes::Crypto_Aes(HCRYPTPROV *phProv)
{
  HCRYPTPROV *v1; // ebx
  Outpop::Utility::Logger *v2; // eax
  wchar_t *v3; // edi
  int v4; // esi
  Outpop::Utility::Logger *v5; // eax
  Outpop::Utility::Logger *v6; // eax
  wchar_t *v7; // eax
  int v8; // eax
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Lock *v10; // ebx
  Outpop::Utility::Logger *v11; // eax
  wchar_t *log_buffer; // edi
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *dt; // eax
  int v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v20; // [esp-18h] [ebp-44h]
  wchar_t *tm; // [esp-18h] [ebp-44h]
  DWORD v22; // [esp-14h] [ebp-40h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD v24; // [esp-10h] [ebp-3Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD v26; // [esp-Ch] [ebp-38h]
  DWORD v27; // [esp-Ch] [ebp-38h]
  DWORD v29; // [esp+14h] [ebp-18h]
  Outpop::Utility::Lock *v30; // [esp+18h] [ebp-14h]
  DWORD LastError; // [esp+18h] [ebp-14h]

  v1 = phProv;
  phProv[1] = 0;
  if ( !CryptAcquireContextA(phProv, "aes_key", 0, 0x18u, 0) )
  {
    if ( GetLastError() != -2146893802 )
    {
      LastError = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v10 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v10);
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v11);
        v13 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
        v27 = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v14);
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v15);
        v17 = sub_10007400(
                &log_buffer[v13],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                v27,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
                29);
        sub_10007400(
          &log_buffer[v17 + v13],
          L"Error  Crypto_Aes::Crypto_Aes   CryptAcquireContext falsed  error is %d",
          LastError);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v18);
        }
        Outpop::Utility::Lock::unlock(v10);
        v1 = phProv;
      }
      goto LABEL_20;
    }
    if ( !CryptAcquireContextA(v1, "aes_key", 0, 0x18u, 8u) )
    {
      v29 = GetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v30 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v30);
        v2 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v3 = Outpop::Utility::Logger::get_log_buffer(v2);
        v4 = sub_10007400(v3, L"\n%s", L"LOG_ERROR");
        v26 = GetLastError();
        v24 = GetCurrentThreadId();
        v22 = GetCurrentProcessId();
        v5 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v20 = Outpop::Utility::Logger::make_tm(v5);
        v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v7 = Outpop::Utility::Logger::make_dt(v6);
        v8 = sub_10007400(
               &v3[v4],
               L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
               v7,
               v20,
               v22,
               v24,
               v26,
               L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
               22);
        sub_10007400(&v3[v8 + v4], L"Error  Crypto_Aes::Crypto_Aes  CryptAcquireContext falsed  error is %d", v29);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v3);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v9);
        }
        Outpop::Utility::Lock::unlock(v30);
      }
LABEL_20:
      *v1 = 0;
    }
  }
  return v1;
}
