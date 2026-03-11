/*
 * func-name: ?ExportCryptPublicKey@CryptProv@IONetwork@Outpop@@QAE_NAAPAEPAK@Z
 * func-address: 0x100086c0
 * callers: 0x1003fba0, 0x10041b20
 * callees: 0x10007400, 0x10008ae0, 0x1004f112
 */

char __thiscall Outpop::IONetwork::CryptProv::ExportCryptPublicKey(
        Outpop::IONetwork::CryptProv *this,
        unsigned __int8 **a2,
        unsigned int *pdwDataLen)
{
  int Error; // ebp
  Outpop::Utility::Lock *v5; // ebx
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // eax
  Outpop::Utility::Logger *v13; // eax
  unsigned __int8 *v15; // eax
  wchar_t *tm; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-38h]
  _BYTE pExceptionObject[12]; // [esp+14h] [ebp-18h] BYREF
  int v21; // [esp+28h] [ebp-4h]

  if ( CryptExportKey(*((_DWORD *)this + 2), 0, 6u, 0, 0, pdwDataLen) )
  {
    v15 = (unsigned __int8 *)malloc(*pdwDataLen);
    *a2 = v15;
    if ( !v15 )
    {
      sub_10008AE0(pExceptionObject, "CryptProv::ExportCryptExportKey(PBYTE& key,DWORD*  dwKeyBlobLen)");
      CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
    }
    if ( !CryptExportKey(*((_DWORD *)this + 2), 0, 6u, 0, v15, pdwDataLen) )
    {
      free(*a2);
      *a2 = 0;
    }
    return 1;
  }
  else
  {
    Error = WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v5 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v5);
      v21 = 0;
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
      v8 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v9);
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v10);
      v12 = sub_10007400(
              0xFFFF - v8,
              &log_buffer[v8],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
              200);
      sub_10007400(
        0xFFFF - (v12 + v8),
        &log_buffer[v12 + v8],
        L" CryptProv::ExportCryptPublicKey  CryptExportKey  Error:%d",
        Error);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v13);
      }
      v21 = -1;
      Outpop::Utility::Lock::unlock(v5);
    }
    return 0;
  }
}
