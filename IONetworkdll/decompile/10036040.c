/*
 * func-name: ??0Dgram_Connector@IONetwork@Outpop@@QAE@PAVConnector_Handler@12@PAVWIN32_IoCompletionPort@12@@Z
 * func-address: 0x10036040
 * callers: none
 * callees: 0x10002600, 0x10004ca0, 0x10007400, 0x1000d890, 0x1002ba30, 0x1004e98e
 */

HANDLE **__thiscall Outpop::IONetwork::Dgram_Connector::Dgram_Connector(
        HANDLE **this,
        struct Outpop::IONetwork::Connector_Handler *LastError,
        struct Outpop::IONetwork::WIN32_IoCompletionPort *a3)
{
  struct Outpop::IONetwork::Connector_Handler *v4; // eax
  struct Outpop::IONetwork::WIN32_IoCompletionPort *v5; // edx
  struct Outpop::IONetwork::Connector_Handler *v6; // edi
  SOCKET v7; // eax
  int v8; // eax
  HANDLE *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // ebp
  int v12; // edi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *dt; // eax
  int v16; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // ebp
  int v20; // edi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  Outpop::Utility::Logger *v25; // eax
  SOCKET *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // ebp
  int v29; // edi
  Outpop::Utility::Logger *v30; // eax
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // eax
  int v33; // eax
  Outpop::Utility::Logger *v34; // eax
  int v35; // edi
  int v36; // eax
  wchar_t *tm; // [esp-8h] [ebp-60h]
  wchar_t *v39; // [esp-8h] [ebp-60h]
  wchar_t *v40; // [esp-8h] [ebp-60h]
  DWORD CurrentProcessId; // [esp-4h] [ebp-5Ch]
  DWORD v42; // [esp-4h] [ebp-5Ch]
  DWORD v43; // [esp-4h] [ebp-5Ch]
  DWORD CurrentThreadId; // [esp+0h] [ebp-58h]
  DWORD v45; // [esp+0h] [ebp-58h]
  DWORD v46; // [esp+0h] [ebp-58h]
  DWORD v47; // [esp+4h] [ebp-54h]
  DWORD v48; // [esp+4h] [ebp-54h]
  DWORD v49; // [esp+4h] [ebp-54h]
  char v50; // [esp+26h] [ebp-32h] BYREF
  char v51; // [esp+27h] [ebp-31h] BYREF
  HANDLE **v52; // [esp+28h] [ebp-30h] BYREF
  Outpop::Utility::Ref_Object *v53; // [esp+2Ch] [ebp-2Ch] BYREF
  Outpop::Utility::Lock *v54; // [esp+30h] [ebp-28h]
  Outpop::Utility::Lock *v55; // [esp+34h] [ebp-24h]
  int optval; // [esp+38h] [ebp-20h] BYREF
  Outpop::Utility::Lock *v57; // [esp+3Ch] [ebp-1Ch]
  HANDLE **v58; // [esp+40h] [ebp-18h]
  _BYTE v59[8]; // [esp+44h] [ebp-14h] BYREF
  int v60; // [esp+54h] [ebp-4h]

  v58 = this;
  Outpop::IONetwork::Connector::Connector((Outpop::IONetwork::Connector *)this);
  v60 = 0;
  v4 = LastError;
  *this = &Outpop::IONetwork::Dgram_Connector::`vftable';
  this[29] = 0;
  this[30] = (HANDLE *)v4;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 31));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(this + 38));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::Utility::Thread_Mutex *)(this + 46));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::Utility::Thread_Mutex *)(this + 52));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::Utility::Thread_Mutex *)(this + 58));
  v57 = (Outpop::Utility::Lock *)(this + 64);
  sub_1002BA30((int)(this + 64), &LastError);
  LOBYTE(v60) = 7;
  LastError = (struct Outpop::IONetwork::Connector_Handler *)(this + 74);
  sub_1002BA30((int)(this + 74), &v50);
  LOBYTE(v60) = 9;
  LastError = (struct Outpop::IONetwork::Connector_Handler *)(this + 84);
  sub_1002BA30((int)(this + 84), &v51);
  LOBYTE(v60) = 11;
  v5 = a3;
  this[94] = 0;
  this[95] = 0;
  this[96] = 0;
  *((_BYTE *)this + 388) = 1;
  this[2] = (HANDLE *)v5;
  v6 = (struct Outpop::IONetwork::Connector_Handler *)operator new(4);
  LastError = v6;
  LOBYTE(v60) = 12;
  if ( v6 )
  {
    v7 = socket(2, 2, 0);
    *(_DWORD *)v6 = v7;
    if ( v7 == -1 )
    {
      v8 = sub_1000D890(std::cout, "TSocket::TSocket construct faild!");
      std::ostream::operator<<(v8, std::endl);
    }
    v9 = (HANDLE *)v6;
  }
  else
  {
    v9 = 0;
  }
  LOBYTE(v60) = 11;
  this[29] = v9;
  if ( *v9 == (HANDLE)-1 )
  {
    LastError = (struct Outpop::IONetwork::Connector_Handler *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v54 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v54);
      LOBYTE(v60) = 13;
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
      v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v47 = GetLastError();
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
              CurrentThreadId,
              v47,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
              17);
      sub_10007400(0xFFFF - (v16 + v12), &log_buffer[v16 + v12], L"new listen_socket failed,errcode is %d", LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v17);
      }
      LOBYTE(v60) = 11;
      Outpop::Utility::Lock::unlock(v54);
    }
  }
  if ( !CreateIoCompletionPort(*this[29], *this[2], 0, 0) && GetLastError() != 87 )
  {
    LastError = (struct Outpop::IONetwork::Connector_Handler *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v55 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v55);
      LOBYTE(v60) = 14;
      v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v19 = Outpop::Utility::Logger::get_log_buffer(v18);
      v20 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
      v48 = GetLastError();
      v45 = GetCurrentThreadId();
      v42 = GetCurrentProcessId();
      v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v39 = Outpop::Utility::Logger::make_tm(v21);
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v23 = Outpop::Utility::Logger::make_dt(v22);
      v24 = sub_10007400(
              0xFFFF - v20,
              &v19[v20],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v23,
              v39,
              v42,
              v45,
              v48,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
              23);
      sub_10007400(0xFFFF - (v24 + v20), &v19[v24 + v20], L"bind to win32comport error,errcode is %d", LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v19);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v25);
      }
      LOBYTE(v60) = 11;
      Outpop::Utility::Lock::unlock(v55);
    }
  }
  v26 = (SOCKET *)this[29];
  optval = 1;
  if ( setsockopt(*v26, 0xFFFF, 4, (const char *)&optval, 4) == -1 )
  {
    LastError = (struct Outpop::IONetwork::Connector_Handler *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v57 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v57);
      LOBYTE(v60) = 15;
      v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v28 = Outpop::Utility::Logger::get_log_buffer(v27);
      v29 = sub_10007400(0xFFFFu, v28, L"\n%s", L"LOG_ERROR");
      v49 = GetLastError();
      v46 = GetCurrentThreadId();
      v43 = GetCurrentProcessId();
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v40 = Outpop::Utility::Logger::make_tm(v30);
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v32 = Outpop::Utility::Logger::make_dt(v31);
      v33 = sub_10007400(
              0xFFFF - v29,
              &v28[v29],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v32,
              v40,
              v43,
              v46,
              v49,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
              30);
      sub_10007400(0xFFFF - (v33 + v29), &v28[v33 + v29], L"listen socket set socketopt error,errcode is %d", LastError);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v28);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v34);
      }
      LOBYTE(v60) = 11;
      Outpop::Utility::Lock::unlock(v57);
    }
  }
  v53 = 0;
  LOBYTE(v60) = 16;
  v35 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v59, 10, 0);
  LOBYTE(v60) = 17;
  v52 = this;
  Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
  LOBYTE(v60) = 18;
  v36 = Outpop::Utility::Timer_Queue::instance(&v52, v35, &v53, 0, 0);
  this[94] = (HANDLE *)Outpop::Utility::Timer_Queue::schedule_repeating_timer(v36);
  LOBYTE(v60) = 17;
  if ( v52 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v52);
  LOBYTE(v60) = 16;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v59);
  LOBYTE(v60) = 11;
  if ( v53 )
    Outpop::Utility::Ref_Object::release(v53);
  return this;
}
