/*
 * func-name: ?aes_encrypt_buff@Crypto_Aes@IONetwork@Outpop@@QAE_NPADHHPAK@Z
 * func-address: 0x100070a0
 * callers: 0x1000cc60
 * callees: 0x10007400
 */

char __thiscall Outpop::IONetwork::Crypto_Aes::aes_encrypt_buff(
        Outpop::IONetwork::Crypto_Aes *this,
        BYTE *pbData,
        BOOL Final,
        DWORD dwBufLen,
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
  DWORD dwBufLena; // [esp+2Ch] [ebp+Ch]

  if ( CryptEncrypt(*((_DWORD *)this + 1), 0, Final, 0, pbData, pdwDataLen, dwBufLen) )
    return 1;
  dwBufLena = GetLastError();
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
            198);
    sub_10007400(&log_buffer[v12 + v8], L"Crypto_Aes::aes_encrypt_buff  CryptEncrypt   Error is %d", dwBufLena);
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
