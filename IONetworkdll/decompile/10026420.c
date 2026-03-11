/*
 * func-name: ?start@Dgram_Acceptor@IONetwork@Outpop@@UAE_NXZ
 * func-address: 0x10026420
 * callers: none
 * callees: 0x10007400, 0x1000d690, 0x1000d6f0, 0x10027810, 0x1004e98e
 */

char __thiscall Outpop::IONetwork::Dgram_Acceptor::start(Outpop::IONetwork::Dgram_Acceptor *this)
{
  Outpop::Utility::Ref_Object *v2; // eax
  Outpop::IONetwork::TSocket *v3; // eax
  void *v4; // eax
  int Error; // ebx
  Outpop::Utility::Ref_Object *v6; // ebp
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Lock *v15; // ecx
  Outpop::Utility::Ref_Object *v17; // ebx
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // edi
  int v20; // esi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  Outpop::Utility::Logger *v25; // eax
  SOCKET *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  int v28; // esi
  Outpop::Utility::Logger *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // eax
  int v32; // eax
  SOCKET *v33; // eax
  Outpop::Utility::Logger *v34; // eax
  int v35; // esi
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  wchar_t *v38; // eax
  int v39; // eax
  SOCKET *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  int v42; // esi
  Outpop::Utility::Logger *v43; // eax
  Outpop::Utility::Logger *v44; // eax
  wchar_t *v45; // eax
  int v46; // eax
  Outpop::Utility::Logger *v47; // eax
  int v48; // esi
  Outpop::Utility::Logger *v49; // eax
  Outpop::Utility::Logger *v50; // eax
  wchar_t *v51; // eax
  int v52; // eax
  int v53; // edi
  int v54; // edi
  int v55; // eax
  wchar_t *tm; // [esp-14h] [ebp-5Ch]
  wchar_t *v57; // [esp-14h] [ebp-5Ch]
  wchar_t *v58; // [esp-14h] [ebp-5Ch]
  wchar_t *v59; // [esp-14h] [ebp-5Ch]
  wchar_t *v60; // [esp-14h] [ebp-5Ch]
  wchar_t *v61; // [esp-14h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-10h] [ebp-58h]
  DWORD v63; // [esp-10h] [ebp-58h]
  DWORD v64; // [esp-10h] [ebp-58h]
  DWORD v65; // [esp-10h] [ebp-58h]
  DWORD v66; // [esp-10h] [ebp-58h]
  DWORD v67; // [esp-10h] [ebp-58h]
  DWORD CurrentThreadId; // [esp-Ch] [ebp-54h]
  DWORD v69; // [esp-Ch] [ebp-54h]
  DWORD v70; // [esp-Ch] [ebp-54h]
  DWORD v71; // [esp-Ch] [ebp-54h]
  DWORD v72; // [esp-Ch] [ebp-54h]
  DWORD v73; // [esp-Ch] [ebp-54h]
  DWORD LastError; // [esp-8h] [ebp-50h]
  DWORD v75; // [esp-8h] [ebp-50h]
  DWORD v76; // [esp-8h] [ebp-50h]
  DWORD v77; // [esp-8h] [ebp-50h]
  DWORD v78; // [esp-8h] [ebp-50h]
  DWORD v79; // [esp-8h] [ebp-50h]
  Outpop::Utility::Ref_Object *v80; // [esp+1Ch] [ebp-2Ch] BYREF
  Outpop::Utility::Ref_Object *v81; // [esp+20h] [ebp-28h] BYREF
  char optval[4]; // [esp+24h] [ebp-24h] BYREF
  char v83[4]; // [esp+28h] [ebp-20h] BYREF
  char v84[4]; // [esp+2Ch] [ebp-1Ch] BYREF
  _BYTE v85[12]; // [esp+30h] [ebp-18h] BYREF
  int v86; // [esp+44h] [ebp-4h]

  if ( *((_DWORD *)this + 59) )
    return 0;
  v2 = (Outpop::Utility::Ref_Object *)operator new(4);
  v81 = v2;
  v86 = 0;
  if ( v2 )
    v3 = Outpop::IONetwork::TSocket::TSocket(v2, 2, 2, 0);
  else
    v3 = 0;
  v86 = -1;
  *((_DWORD *)this + 59) = v3;
  v4 = *(void **)v3;
  if ( v4 == (void *)-1 )
  {
    Error = WSAGetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return 0;
    }
    v6 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v81 = v6;
    Outpop::Utility::Lock::lock(v6);
    v86 = 1;
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
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            31);
    sub_10007400(0xFFFF - (v13 + v9), &log_buffer[v13 + v9], L"new listen_socket failed,errcode is %d", Error);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v14);
    }
    v86 = -1;
    v15 = v6;
    goto LABEL_14;
  }
  if ( !CreateIoCompletionPort(v4, **((HANDLE **)this + 31), 0, 0) && GetLastError() != 87 )
  {
    v81 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return 0;
    }
    v17 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v80 = v17;
    Outpop::Utility::Lock::lock(v17);
    v86 = 2;
    v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::get_log_buffer(v18);
    v20 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
    v75 = GetLastError();
    v69 = GetCurrentThreadId();
    v63 = GetCurrentProcessId();
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v57 = Outpop::Utility::Logger::make_tm(v21);
    v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v23 = Outpop::Utility::Logger::make_dt(v22);
    v24 = sub_10007400(
            0xFFFF - v20,
            &v19[v20],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v23,
            v57,
            v63,
            v69,
            v75,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            37);
    sub_10007400(0xFFFF - (v24 + v20), &v19[v24 + v20], L"bind to win32comport error,errcode is %d", v81);
    goto LABEL_22;
  }
  v26 = (SOCKET *)*((_DWORD *)this + 59);
  *(_DWORD *)optval = 1;
  if ( setsockopt(*v26, 0xFFFF, 4, optval, 4) == -1 )
  {
    v81 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return 0;
    }
    v17 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v80 = v17;
    Outpop::Utility::Lock::lock(v17);
    v86 = 3;
    v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::get_log_buffer(v27);
    v28 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
    v76 = GetLastError();
    v70 = GetCurrentThreadId();
    v64 = GetCurrentProcessId();
    v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v58 = Outpop::Utility::Logger::make_tm(v29);
    v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v31 = Outpop::Utility::Logger::make_dt(v30);
    v32 = sub_10007400(
            0xFFFF - v28,
            &v19[v28],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v31,
            v58,
            v64,
            v70,
            v76,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            45);
    sub_10007400(0xFFFF - (v32 + v28), &v19[v32 + v28], L"listen socket set socketopt error,errcode is %d", v81);
    goto LABEL_22;
  }
  v33 = (SOCKET *)*((_DWORD *)this + 59);
  *(_DWORD *)v83 = 1310700;
  if ( setsockopt(*v33, 0xFFFF, 4098, v83, 4) )
  {
    v81 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return 0;
    }
    v17 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v80 = v17;
    Outpop::Utility::Lock::lock(v17);
    v86 = 4;
    v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::get_log_buffer(v34);
    v35 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
    v77 = GetLastError();
    v71 = GetCurrentThreadId();
    v65 = GetCurrentProcessId();
    v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v59 = Outpop::Utility::Logger::make_tm(v36);
    v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v38 = Outpop::Utility::Logger::make_dt(v37);
    v39 = sub_10007400(
            0xFFFF - v35,
            &v19[v35],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v38,
            v59,
            v65,
            v71,
            v77,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            53);
    sub_10007400(
      0xFFFF - (v39 + v35),
      &v19[v39 + v35],
      L"listen socket set_SOCKET_opt SO_RCVBUF  error,errcode is %d",
      v81);
    goto LABEL_22;
  }
  v40 = (SOCKET *)*((_DWORD *)this + 59);
  *(_DWORD *)v84 = 1310700;
  if ( setsockopt(*v40, 0xFFFF, 4097, v84, 4) )
  {
    v81 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return 0;
    }
    v17 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v80 = v17;
    Outpop::Utility::Lock::lock(v17);
    v86 = 5;
    v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::get_log_buffer(v41);
    v42 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
    v78 = GetLastError();
    v72 = GetCurrentThreadId();
    v66 = GetCurrentProcessId();
    v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v60 = Outpop::Utility::Logger::make_tm(v43);
    v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v45 = Outpop::Utility::Logger::make_dt(v44);
    v46 = sub_10007400(
            0xFFFF - v42,
            &v19[v42],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v45,
            v60,
            v66,
            v72,
            v78,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            61);
    sub_10007400(
      0xFFFF - (v46 + v42),
      &v19[v46 + v42],
      L"listen socket set_SOCKET_opt SO_SNDBUF  error,errcode is %d",
      v81);
    goto LABEL_22;
  }
  if ( Outpop::IONetwork::TSocket::bind_addr(
         *((SOCKET **)this + 59),
         (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 156)) == -1 )
  {
    v81 = (Outpop::Utility::Ref_Object *)WSAGetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      return 0;
    }
    v17 = (Outpop::Utility::Ref_Object *)(Outpop::Utility::Logger::instance() + 144);
    v80 = v17;
    Outpop::Utility::Lock::lock(v17);
    v86 = 6;
    v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v19 = Outpop::Utility::Logger::get_log_buffer(v47);
    v48 = sub_10007400(0xFFFFu, v19, L"\n%s", L"LOG_ERROR");
    v79 = GetLastError();
    v73 = GetCurrentThreadId();
    v67 = GetCurrentProcessId();
    v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v61 = Outpop::Utility::Logger::make_tm(v49);
    v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v51 = Outpop::Utility::Logger::make_dt(v50);
    v52 = sub_10007400(
            0xFFFF - v48,
            &v19[v48],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v51,
            v61,
            v67,
            v73,
            v79,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            68);
    sub_10007400(0xFFFF - (v52 + v48), &v19[v52 + v48], L"listen socket ind_addr error,errcode is %d", v81);
LABEL_22:
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v19);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v25);
    }
    v86 = -1;
    v15 = v17;
LABEL_14:
    Outpop::Utility::Lock::unlock(v15);
    return 0;
  }
  v53 = 0;
  if ( *((_DWORD *)this + 27) )
  {
    while ( Outpop::IONetwork::Dgram_Acceptor::PostAccept(this, 65500) != -1 )
    {
      if ( (unsigned int)++v53 >= *((_DWORD *)this + 27) )
        goto LABEL_50;
    }
    return 0;
  }
LABEL_50:
  v81 = 0;
  v86 = 7;
  v54 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v85, 10, 0);
  LOBYTE(v86) = 8;
  v80 = this;
  Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v86) = 9;
  v55 = Outpop::Utility::Timer_Queue::instance(&v80, v54, &v81, 0, 0);
  *((_DWORD *)this + 32) = Outpop::Utility::Timer_Queue::schedule_repeating_timer(v55);
  LOBYTE(v86) = 8;
  if ( v80 )
    Outpop::Utility::Ref_Object::release(v80);
  LOBYTE(v86) = 7;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v85);
  v86 = -1;
  if ( v81 )
    Outpop::Utility::Ref_Object::release(v81);
  return 1;
}
