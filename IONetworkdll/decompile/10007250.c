/*
 * func-name: ?aes_decrypt_buff@Crypto_Aes@IONetwork@Outpop@@QAE_NPADHHPAK@Z
 * func-address: 0x10007250
 * callers: 0x1000ce40
 * callees: 0x10007400
 */

char __thiscall Outpop::IONetwork::Crypto_Aes::aes_decrypt_buff(
        Outpop::IONetwork::Crypto_Aes *this,
        BYTE *pbData,
        BOOL Final,
        int a4,
        unsigned int *pdwDataLen)
{
  Outpop::Utility::Lock *v5; // ebx
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
  DWORD *pdwDataLena; // [esp+30h] [ebp+10h]

  if ( CryptDecrypt(*((_DWORD *)this + 1), 0, Final, 0, pbData, pdwDataLen) )
    return 1;
  pdwDataLena = (DWORD *)GetLastError();
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v5);
    v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
    v8 = sub_10007400(log_buffer, L"\n%s", L"LOG_ERROR");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v9);
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v10);
    v12 = sub_10007400(
            &log_buffer[v8],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Crypto_Aes.cpp",
            210);
    sub_10007400(&log_buffer[v12 + v8], L"Crypto_Aes::aes_decrypt_buff  CryptEncrypt   Error is %d", pdwDataLena);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v13);
    }
    Outpop::Utility::Lock::unlock(v5);
  }
  return 0;
}
