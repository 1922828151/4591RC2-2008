/*
 * func-name: ?CreateCryptGenKey@CryptProv@IONetwork@Outpop@@QAE_NH@Z
 * func-address: 0x100082f0
 * callers: 0x1003fba0, 0x10041b20
 * callees: 0x10007400
 */

char __thiscall Outpop::IONetwork::CryptProv::CreateCryptGenKey(HCRYPTPROV *this, int a2)
{
  Outpop::Utility::Lock *v2; // ebx
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v15; // [esp-Ch] [ebp-30h]
  DWORD LastError; // [esp+28h] [ebp+4h]

  if ( CryptGenKey(*this, 1u, a2 | 1, this + 2) )
    return 1;
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
    v15 = GetLastError();
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
           v15,
           L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
           128);
    sub_10007400(
      0xFFFF - (v9 + v5),
      &log_buffer[v9 + v5],
      L"CryptGenKey(h_csd_key_,AT_KEYEXCHANGE, CRYPT_EXPORTABLE,&h_xche_key_) failed:%d",
      LastError);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    Outpop::Utility::Lock::unlock(v2);
  }
  return 0;
}
