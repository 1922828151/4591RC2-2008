/*
 * func-name: ?start@Stream_Acceptor@IONetwork@Outpop@@UAE_NXZ
 * func-address: 0x10016f50
 * callers: none
 * callees: 0x10007400, 0x1000d890, 0x10017670, 0x1004e98e
 */

char __thiscall Outpop::IONetwork::Stream_Acceptor::start(Outpop::IONetwork::Stream_Acceptor *this)
{
  Outpop::Utility::Ref_Object *v2; // edi
  SOCKET v3; // eax
  int v4; // eax
  int Error; // ebp
  Outpop::Utility::Ref_Object *v6; // ebx
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Ref_Object *v16; // ebp
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  SOCKET *v25; // edi
  const struct sockaddr *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  int v28; // esi
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // eax
  int v32; // eax
  Outpop::Utility::Logger *v33; // eax
  int v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // eax
  int v38; // eax
  int v39; // edi
  int v40; // edi
  int v41; // eax
  wchar_t *tm; // [esp-10h] [ebp-48h]
  wchar_t *v43; // [esp-10h] [ebp-48h]
  wchar_t *v44; // [esp-10h] [ebp-48h]
  wchar_t *v45; // [esp-10h] [ebp-48h]
  DWORD CurrentProcessId; // [esp-Ch] [ebp-44h]
  DWORD v47; // [esp-Ch] [ebp-44h]
  DWORD v48; // [esp-Ch] [ebp-44h]
  DWORD v49; // [esp-Ch] [ebp-44h]
  DWORD CurrentThreadId; // [esp-8h] [ebp-40h]
  DWORD v51; // [esp-8h] [ebp-40h]
  DWORD v52; // [esp-8h] [ebp-40h]
  DWORD v53; // [esp-8h] [ebp-40h]
  DWORD LastError; // [esp-4h] [ebp-3Ch]
  DWORD v55; // [esp-4h] [ebp-3Ch]
  DWORD v56; // [esp-4h] [ebp-3Ch]
  DWORD v57; // [esp-4h] [ebp-3Ch]
  Outpop::Utility::Ref_Object *v58; // [esp+1Ch] [ebp-1Ch] BYREF
  Outpop::Utility::Ref_Object *v59; // [esp+20h] [ebp-18h] BYREF
  _BYTE v60[8]; // [esp+24h] [ebp-14h] BYREF
  int v61; // [esp+34h] [ebp-4h]

  v2 = (Outpop::Utility::Ref_Object *)operator new(4);
  v59 = v2;
  v61 = 0;
  if ( v2 )
  {
    v3 = socket(2, 1, 0);
    *(_DWORD *)v2 = v3;
    if ( v3 == -1 )
    {
      v4 = sub_1000D890(std::cout, "TSocket::TSocket construct faild!");
      std::ostream::operator<<(v4, std::endl);
    }
  }
  else
  {
    v2 = 0;
  }
  v61 = -1;
  *((_DWORD *)this + 47) = v2;
  if ( *(_DWORD *)v2 == -1 )
  {
    Error = WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v6 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
      v59 = v6;
      Outpop::Utility::Lock::lock(v6);
      v61 = 1;
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
      v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
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
              23);
      sub_10007400(0xFFFF - (v13 + v9), &log_buffer[v13 + v9], L"new listen_socket failed,errcode is %d", Error);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14);
      }
      v61 = -1;
      Outpop::Utility::Lock::unlock(v6);
    }
    return 0;
  }
  if ( !CreateIoCompletionPort(*(HANDLE *)v2, **((HANDLE **)this + 31), 0, 0) && GetLastError() != 87 )
  {
    v59 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v16 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
      v58 = v16;
      Outpop::Utility::Lock::lock(v16);
      v61 = 2;
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::get_log_buffer(v17);
      v19 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_ERROR");
      v55 = GetLastError();
      v51 = GetCurrentThreadId();
      v47 = GetCurrentProcessId();
      v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v43 = Outpop::Utility::Logger::make_tm(v20);
      v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v22 = Outpop::Utility::Logger::make_dt(v21);
      v23 = sub_10007400(
              0xFFFF - v19,
              &v18[v19],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v22,
              v43,
              v47,
              v51,
              v55,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
              29);
      sub_10007400(0xFFFF - (v23 + v19), &v18[v23 + v19], L"bind to win32comport error,errcode is %d", v59);
LABEL_21:
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v18);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v24);
      }
      v61 = -1;
      Outpop::Utility::Lock::unlock(v16);
      return 0;
    }
    return 0;
  }
  v25 = (SOCKET *)*((_DWORD *)this + 47);
  v26 = (const struct sockaddr *)(*(int (__thiscall **)(char *))(*((_DWORD *)this + 39) + 16))((char *)this + 156);
  if ( bind(*v25, v26, 16) == -1 )
  {
    v59 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v16 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
      v58 = v16;
      Outpop::Utility::Lock::lock(v16);
      v61 = 3;
      v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::get_log_buffer(v27);
      v28 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_ERROR");
      v56 = GetLastError();
      v52 = GetCurrentThreadId();
      v48 = GetCurrentProcessId();
      v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v44 = Outpop::Utility::Logger::make_tm(v29);
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v31 = Outpop::Utility::Logger::make_dt(v30);
      v32 = sub_10007400(
              0xFFFF - v28,
              &v18[v28],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v31,
              v44,
              v48,
              v52,
              v56,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
              40);
      sub_10007400(0xFFFF - (v32 + v28), &v18[v32 + v28], L"listen socket ind_addr error,errcode is %d", v59);
      goto LABEL_21;
    }
    return 0;
  }
  if ( listen(**((_DWORD **)this + 47), *((_DWORD *)this + 23)) == -1 )
  {
    v59 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v16 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
      v58 = v16;
      Outpop::Utility::Lock::lock(v16);
      v61 = 4;
      v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::get_log_buffer(v33);
      v34 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_ERROR");
      v57 = GetLastError();
      v53 = GetCurrentThreadId();
      v49 = GetCurrentProcessId();
      v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v45 = Outpop::Utility::Logger::make_tm(v35);
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v37 = Outpop::Utility::Logger::make_dt(v36);
      v38 = sub_10007400(
              0xFFFF - v34,
              &v18[v34],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v37,
              v45,
              v49,
              v53,
              v57,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
              46);
      sub_10007400(0xFFFF - (v38 + v34), &v18[v38 + v34], L"listen socket listen error,errcode is %d", v59);
      goto LABEL_21;
    }
    return 0;
  }
  v39 = 0;
  if ( *((_DWORD *)this + 23) )
  {
    while ( Outpop::IONetwork::Stream_Acceptor::PostAccept(this, 0) != -1 )
    {
      if ( (unsigned int)++v39 >= *((_DWORD *)this + 23) )
        goto LABEL_40;
    }
    return 0;
  }
LABEL_40:
  v59 = 0;
  v61 = 5;
  v40 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v60, 10, 0);
  LOBYTE(v61) = 6;
  v58 = this;
  Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v61) = 7;
  v41 = Outpop::Utility::Timer_Queue::instance(&v58, v40, &v59, 0, 0);
  *((_DWORD *)this + 32) = Outpop::Utility::Timer_Queue::schedule_repeating_timer(v41);
  LOBYTE(v61) = 6;
  if ( v58 )
    Outpop::Utility::Ref_Object::release(v58);
  LOBYTE(v61) = 5;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v60);
  v61 = -1;
  if ( v59 )
    Outpop::Utility::Ref_Object::release(v59);
  return 1;
}
