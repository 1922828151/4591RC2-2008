/*
 * func-name: ?unprocess@Security_Processer@IONetwork@Outpop@@QAE_NAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@PAVSecurity@23@_N@Z
 * func-address: 0x1000ce40
 * callers: 0x100117b0, 0x1002f880, 0x10031010
 * callees: 0x10007250, 0x10007400
 */

char __stdcall Outpop::IONetwork::Security_Processer::unprocess(
        Outpop::Utility::Stream_Base **a1,
        DWORD LastError,
        int a3)
{
  Outpop::Utility::Stream_Base **v3; // esi
  Outpop::Utility::Stream_Base **readable; // eax
  Outpop::Utility::Stream_Base *v5; // ecx
  BYTE *ptr; // eax
  Outpop::Utility::Lock *v7; // ebx
  Outpop::Utility::Logger *v8; // eax
  wchar_t *log_buffer; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *dt; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Stream_Base *v17; // esi
  int v18; // eax
  wchar_t *tm; // [esp-18h] [ebp-3Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-38h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-34h]
  DWORD v22; // [esp-Ch] [ebp-30h]

  v3 = a1;
  readable = (Outpop::Utility::Stream_Base **)Outpop::Utility::Stream_Base::get_readable(*a1);
  v5 = *v3;
  a1 = readable;
  ptr = (BYTE *)Outpop::Utility::Stream_Base::get_read_ptr(v5);
  if ( Outpop::IONetwork::Crypto_Aes::aes_decrypt_buff(
         (Outpop::IONetwork::Crypto_Aes *)(LastError + 32),
         ptr,
         1,
         0,
         (unsigned int *)&a1) )
  {
    v17 = *v3;
    v18 = Outpop::Utility::Stream_Base::get_readable(v17);
    Outpop::Utility::Stream_Base::move_write_pos(v17, (char *)a1 - v18);
    return 1;
  }
  else
  {
    LastError = GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v7);
      v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v8);
      v10 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v22 = GetLastError();
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
              v22,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Processer.cpp",
              62);
      sub_10007400(0xFFFF - (v14 + v10), &log_buffer[v14 + v10], L"aes_decrypt_buff error is:%d", LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v15);
      }
      Outpop::Utility::Lock::unlock(v7);
    }
    return 0;
  }
}
