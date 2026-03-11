/*
 * func-name: ?UpdateKey@CryptProv@IONetwork@Outpop@@QAE_NPAEH@Z
 * func-address: 0x10008000
 * callers: 0x1003e800, 0x100407c0
 * callees: 0x10007400
 */

char __thiscall Outpop::IONetwork::CryptProv::UpdateKey(HCRYPTPROV *this, BYTE *pbData, DWORD dwDataLen)
{
  Outpop::Utility::Lock *v3; // ebx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // edi
  int v6; // esi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // esi
  DWORD v11; // eax
  Outpop::Utility::Logger *v12; // eax
  Outpop::Utility::Lock *v14; // ebx
  Outpop::Utility::Logger *v15; // eax
  wchar_t *v16; // edi
  int v17; // esi
  Outpop::Utility::Logger *v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // eax
  int v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  wchar_t *v24; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD v26; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v28; // [esp-10h] [ebp-34h]
  DWORD LastError; // [esp-Ch] [ebp-30h]
  DWORD v30; // [esp-Ch] [ebp-30h]
  BYTE *pbDataa; // [esp+28h] [ebp+4h]

  if ( CryptImportKey(*this, pbData, dwDataLen, 0, 0x40u, this + 2) )
    return 1;
  if ( !GetLastError() )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v3 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v3);
      v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
      v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v7);
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v8);
      v10 = sub_10007400(
              0xFFFF - v6,
              &log_buffer[v6],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
              109)
          + v6;
      v11 = GetLastError();
      sub_10007400(
        0xFFFF - v10,
        &log_buffer[v10],
        L"CryptImportKey(h_csd_key_,pbkeyblob,len,0,0,&h_xche_key_) failed:%d",
        v11);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v12);
      }
      Outpop::Utility::Lock::unlock(v3);
    }
    return 1;
  }
  pbDataa = (BYTE *)GetLastError();
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v14 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v14);
    v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v16 = Outpop::Utility::Logger::get_log_buffer(v15);
    v17 = sub_10007400(0xFFFFu, v16, L"\n%s", L"LOG_ERROR");
    v30 = GetLastError();
    v28 = GetCurrentThreadId();
    v26 = GetCurrentProcessId();
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v24 = Outpop::Utility::Logger::make_tm(v18);
    v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v20 = Outpop::Utility::Logger::make_dt(v19);
    v21 = sub_10007400(
            0xFFFF - v17,
            &v16[v17],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v20,
            v24,
            v26,
            v28,
            v30,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
            113);
    sub_10007400(
      0xFFFF - (v21 + v17),
      &v16[v21 + v17],
      L"CryptImportKey(h_csd_key_,pbkeyblob,len,0,0,&h_xche_key_) failed:%d, len is %d",
      pbDataa,
      dwDataLen);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v16);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v22);
    }
    Outpop::Utility::Lock::unlock(v14);
  }
  return 0;
}
