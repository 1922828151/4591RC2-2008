/*
 * func-name: ?asynch_send_to@Dgram_Acceptor@IONetwork@Outpop@@QAEHAAV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@AAVINET_Addr@23@PAX@Z
 * func-address: 0x100279d0
 * callers: 0x1002ad90, 0x1002d330, 0x1002e1c0, 0x1002efa0, 0x10030dd0, 0x10032020, 0x1003ffb0
 * callees: 0x10007400, 0x1002c250
 */

int __thiscall Outpop::IONetwork::Dgram_Acceptor::asynch_send_to(
        _DWORD *this,
        Outpop::Utility::Stream_Base **a2,
        int a3,
        const wchar_t *a4)
{
  Outpop::Utility::Thread_Mutex *v5; // ebx
  bool v6; // al
  int totallength; // eax
  Outpop::Utility::Lock *v8; // ebx
  Outpop::Utility::Logger *v9; // eax
  wchar_t *log_buffer; // edi
  int v11; // eax
  int v12; // esi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *dt; // eax
  int v16; // eax
  Outpop::Utility::Logger *v17; // eax
  int v19; // [esp-18h] [ebp-4Ch]
  wchar_t *tm; // [esp-18h] [ebp-4Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-48h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-44h]
  DWORD v23; // [esp-Ch] [ebp-40h] BYREF
  const wchar_t *v24; // [esp-8h] [ebp-3Ch]
  int v25; // [esp-4h] [ebp-38h]
  DWORD *LastError; // [esp+14h] [ebp-20h]
  Outpop::Utility::Lock *v27; // [esp+18h] [ebp-1Ch]
  Outpop::Utility::Thread_Mutex *v28; // [esp+1Ch] [ebp-18h]
  int v29; // [esp+20h] [ebp-14h]
  int v30; // [esp+30h] [ebp-4h]

  v5 = (Outpop::Utility::Thread_Mutex *)(this + 33);
  v28 = (Outpop::Utility::Thread_Mutex *)(this + 33);
  v6 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 33));
  v29 = v6 - 1;
  v30 = 0;
  if ( !v6 )
    return -1;
  v25 = a3;
  v24 = a4;
  LastError = &v23;
  v23 = (DWORD)this;
  if ( this )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v30) = 1;
  totallength = Outpop::Utility::Stream_Base::get_totallength(*a2);
  v19 = this[59];
  LOBYTE(v30) = 0;
  if ( sub_1002C250(v19, a2, totallength, v23, v24, v25) == -1 )
  {
    LastError = (DWORD *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v8 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v27 = v8;
      Outpop::Utility::Lock::lock(v8);
      LOBYTE(v30) = 2;
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v9);
      v11 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v25 = 223;
      v24 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp";
      v12 = v11;
      v23 = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v13);
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v14);
      v16 = sub_10007400(
              0xFFFF - v12,
              &log_buffer[v12],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId);
      sub_10007400(
        0xFFFF - (v16 + v12),
        &log_buffer[v16 + v12],
        L"Dgram_Acceptor::asynch_send_to  error is:%d",
        LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v25 = (int)log_buffer;
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v17);
      }
      LOBYTE(v30) = 0;
      Outpop::Utility::Lock::unlock(v8);
      v5 = v28;
    }
    v30 = -1;
    v29 = -1;
    Outpop::Utility::Thread_Mutex::release(v5);
    return -1;
  }
  else
  {
    v30 = -1;
    v29 = -1;
    Outpop::Utility::Thread_Mutex::release(v5);
    return 0;
  }
}
