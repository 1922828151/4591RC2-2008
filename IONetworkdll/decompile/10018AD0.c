/*
 * func-name: ?handle_time_out@Stream_Acceptor@IONetwork@Outpop@@UAEXABVTime_Value@Utility@3@0AAV?$Smart_Ptr@VRef_Object@Utility@Outpop@@@53@J@Z
 * func-address: 0x10018ad0
 * callers: none
 * callees: 0x10007400, 0x10016370, 0x1003a130
 */

void __thiscall Outpop::IONetwork::Stream_Acceptor::handle_time_out(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // ebp
  Outpop::Utility::Lock *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  bool v15; // al
  char *v16; // esi
  char *v17; // ebx
  char *v18; // edi
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // ebp
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // edi
  Outpop::IONetwork::INET_Addr *v25; // ebx
  char *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  char **v28; // eax
  wchar_t *tm; // [esp-18h] [ebp-A4h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-A0h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-9Ch]
  DWORD LastError; // [esp-Ch] [ebp-98h]
  wchar_t *v33; // [esp-4h] [ebp-90h]
  int v34; // [esp-4h] [ebp-90h]
  int v35; // [esp+18h] [ebp-74h]
  Outpop::IONetwork::INET_Addr *v36; // [esp+18h] [ebp-74h]
  Outpop::Utility::Lock *v37; // [esp+1Ch] [ebp-70h]
  Outpop::Utility::Thread_Mutex *v39; // [esp+24h] [ebp-68h]
  char *v40; // [esp+2Ch] [ebp-60h]
  _BYTE v41[8]; // [esp+34h] [ebp-58h] BYREF
  char v42[8]; // [esp+3Ch] [ebp-50h] BYREF
  void **v43; // [esp+44h] [ebp-48h] BYREF
  void **v44; // [esp+60h] [ebp-2Ch] BYREF
  int v45; // [esp+88h] [ebp-4h]

  v5 = this;
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v6 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v6);
    v45 = 0;
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
    v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
    LastError = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v10);
    v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    dt = Outpop::Utility::Logger::make_dt(v11);
    v13 = sub_10007400(
            0xFFFF - v9,
            &log_buffer[v9],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            dt,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
            281);
    sub_10007400(0xFFFF - (v13 + v9), &log_buffer[v13 + v9], L"Stream_Acceptor::handle_time_out  id is ", v5[3]);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v14);
    }
    v45 = -1;
    Outpop::Utility::Lock::unlock(v6);
  }
  Outpop::Utility::Time_Value::gettimeofday(v41);
  v45 = 1;
  v39 = (Outpop::Utility::Thread_Mutex *)(v5 + 33);
  v15 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(v5 + 33));
  LOBYTE(v45) = 2;
  if ( v15 )
  {
    v16 = *(char **)v5[50];
    v17 = (char *)(v5 + 49);
    v40 = (char *)(v5 + 49);
    while ( 1 )
    {
      v18 = (char *)v5[50];
      if ( !v17 || v17 != (char *)(v5 + 49) )
        invalid_parameter_noinfo();
      if ( v16 == v18 )
        break;
      if ( !v17 )
        invalid_parameter_noinfo();
      if ( v16 == *((char **)v17 + 1) )
        invalid_parameter_noinfo();
      v35 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(*((_DWORD *)v16 + 4) + 68));
      if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v41) - v35 <= 60 )
      {
        if ( v16 == *((char **)v17 + 1) )
          invalid_parameter_noinfo();
        v16 = *(char **)v16;
      }
      else
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
        {
          v37 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v37);
          LOBYTE(v45) = 3;
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v20 = Outpop::Utility::Logger::get_log_buffer(v19);
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v33 = Outpop::Utility::Logger::make_tm(v21);
          v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v23 = Outpop::Utility::Logger::make_dt(v22);
          v24 = sub_10007400(0xFFFFu, v20, L"\nLOGINFO %s:%s Message:", v23, v33);
          if ( v16 == *((char **)v17 + 1) )
            invalid_parameter_noinfo();
          v36 = sub_10016370(*((_DWORD *)v16 + 4), (Outpop::IONetwork::INET_Addr *)&v44);
          LOBYTE(v45) = 4;
          if ( v16 == *((char **)v17 + 1) )
            invalid_parameter_noinfo();
          v25 = sub_10016370(*((_DWORD *)v16 + 4), (Outpop::IONetwork::INET_Addr *)&v43);
          LOBYTE(v45) = 5;
          v34 = ntohs(*((_WORD *)v36 + 7));
          v26 = inet_ntoa(*(struct in_addr *)((char *)v25 + 16));
          sub_10007400(
            0xFFFF - v24,
            &v20[v24],
            L"Stream_Acceptor::handle_time_out  channel  not  send  packet sec() > 10,ip is %S,port is %d",
            v26,
            v34);
          v43 = &Outpop::IONetwork::Addr::`vftable';
          LOBYTE(v45) = 3;
          v44 = &Outpop::IONetwork::Addr::`vftable';
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v20);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v27);
          }
          LOBYTE(v45) = 2;
          Outpop::Utility::Lock::unlock(v37);
          v5 = this;
          v17 = v40;
        }
        if ( v16 == *((char **)v17 + 1) )
          invalid_parameter_noinfo();
        (*(void (__thiscall **)(_DWORD))(**((_DWORD **)v16 + 4) + 16))(*((_DWORD *)v16 + 4));
        v28 = (char **)sub_1003A130(v42, v17, v16);
        v16 = v28[1];
        v40 = *v28;
        v17 = *v28;
      }
    }
    LOBYTE(v45) = 1;
    Outpop::Utility::Thread_Mutex::release(v39);
    v45 = -1;
  }
  else
  {
    v45 = -1;
  }
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v41);
}
