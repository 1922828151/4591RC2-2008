/*
 * func-name: ?handle_write_stream@P2PUdpBuilder@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x1004c7b0
 * callers: 0x1004da00
 * callees: 0x10007400, 0x1002b5c0
 */

void __thiscall Outpop::IONetwork::P2PUdpBuilder::handle_write_stream(
        Outpop::IONetwork::P2PUdpBuilder *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
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
  wchar_t *tm; // [esp-18h] [ebp-44h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-40h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-3Ch]
  DWORD LastError; // [esp-Ch] [ebp-38h]
  _DWORD v15[6]; // [esp+0h] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object *v16[2]; // [esp+18h] [ebp-14h] BYREF
  int v17; // [esp+28h] [ebp-4h]

  v16[1] = (Outpop::Utility::Ref_Object *)v15;
  v17 = 0;
  if ( *((_DWORD *)a2 + 17) && *((_DWORD *)a2 + 6) )
  {
    sub_1002B5C0((int)a2, v16);
    LOBYTE(v17) = 2;
    Outpop::Utility::Stream_Base::get_read_ptr(v16[0]);
    LOBYTE(v17) = 0;
    if ( v16[0] )
      Outpop::Utility::Ref_Object::release(v16[0]);
    v17 = -1;
  }
  else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
         && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v2 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    v15[5] = v2;
    Outpop::Utility::Lock::lock(v2);
    LOBYTE(v17) = 1;
    v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
    v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
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
           LastError,
           L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
           333);
    sub_10007400(
      0xFFFF - (v9 + v5),
      &log_buffer[v9 + v5],
      L"P2PUdpBuilder::handle_write_stream(Asynch_IO_Result*  io_result),error code is:%d",
      *((_DWORD *)a2 + 19));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v10);
    }
    LOBYTE(v17) = 0;
    Outpop::Utility::Lock::unlock(v2);
  }
}
