/*
 * func-name: ?ExportCryptExportKey@CryptProv@IONetwork@Outpop@@QAE_NAAPAEPAK@Z
 * func-address: 0x100084a0
 * callers: none
 * callees: 0x10007400, 0x10008ae0, 0x1004f112
 */

char __thiscall Outpop::IONetwork::CryptProv::ExportCryptExportKey(
        HCRYPTPROV *this,
        unsigned __int8 **a2,
        unsigned int *pdwDataLen)
{
  unsigned __int8 *v5; // eax
  int Error; // ebx
  Outpop::Utility::Lock *v7; // ebp
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *tm; // [esp-18h] [ebp-48h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-44h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-40h]
  HCRYPTPROV v19; // [esp-Ch] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-3Ch]
  HCRYPTKEY phUserKey; // [esp+14h] [ebp-1Ch] BYREF
  _BYTE pExceptionObject[12]; // [esp+18h] [ebp-18h] BYREF
  int v23; // [esp+2Ch] [ebp-4h]

  v19 = *this;
  phUserKey = 0;
  if ( !CryptGetUserKey(v19, 1u, &phUserKey) )
    return 0;
  CryptExportKey(this[2], phUserKey, 6u, 0, 0, pdwDataLen);
  v5 = (unsigned __int8 *)malloc(*pdwDataLen);
  *a2 = v5;
  if ( !v5 )
  {
    sub_10008AE0(pExceptionObject, "CryptProv::ExportCryptExportKey(PBYTE& key,DWORD*  dwKeyBlobLen)");
    CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
  }
  CryptExportKey(this[2], phUserKey, 6u, 0, v5, pdwDataLen);
  if ( phUserKey )
  {
    if ( !CryptDestroyKey(phUserKey) )
    {
      Error = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v7);
        v23 = 0;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v11);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v12);
        v14 = sub_10007400(
                0xFFFF - v10,
                &log_buffer[v10],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\CryptProv.cpp",
                176);
        sub_10007400(
          0xFFFF - (v14 + v10),
          &log_buffer[v14 + v10],
          L" CryptProv::ExportCryptExportKey   CryptDestroyKey  Error:%d",
          Error);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        v23 = -1;
        Outpop::Utility::Lock::unlock(v7);
      }
    }
  }
  return 1;
}
