/*
 * func-name: ?handle_accept@Stream_Acceptor@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x10017730
 * callers: 0x10019280
 * callees: 0x10002600, 0x10002e10, 0x10003890, 0x100038e0, 0x10007400, 0x10008ca0, 0x10008d20, 0x10017670, 0x10018600, 0x10018650, 0x100192b0, 0x10019db0, 0x1001a2c0, 0x1002b630, 0x10039b80, 0x1003a2e0, 0x1003be30, 0x1003edf0, 0x1004e861, 0x1004e98e
 */

void __thiscall Outpop::IONetwork::Stream_Acceptor::handle_accept(
        Outpop::IONetwork::Stream_Acceptor *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  struct Outpop::IONetwork::Asynch_IO_Result *v2; // ebx
  int v4; // eax
  SOCKET v5; // eax
  Outpop::Utility::Sect_Block_Allocator *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // ebx
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // eax
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Lock *v15; // ecx
  Outpop::Utility::Sect_Block_Allocator *v16; // eax
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // ebx
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // eax
  Outpop::Utility::Logger *v24; // eax
  int v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // eax
  int v29; // eax
  Outpop::Utility::Logger *v30; // eax
  SOCKET v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // ebx
  int v34; // esi
  Outpop::Utility::Logger *v35; // eax
  Outpop::Utility::Logger *v36; // eax
  wchar_t *v37; // eax
  int v38; // eax
  Outpop::Utility::Logger *v39; // eax
  Outpop::Utility::Sect_Block_Allocator *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  wchar_t *v42; // ebx
  int v43; // esi
  Outpop::Utility::Logger *v44; // eax
  Outpop::Utility::Logger *v45; // eax
  wchar_t *v46; // eax
  int v47; // esi
  char *v48; // eax
  Outpop::Utility::Logger *v49; // eax
  bool v50; // zf
  Outpop::Utility::Lock *v51; // eax
  Outpop::IONetwork::Accept_Bluider_Process **v52; // ebx
  bool v53; // al
  int v54; // edx
  int v55; // eax
  bool v56; // al
  int v57; // edx
  Outpop::Utility::Lock *v58; // eax
  bool v59; // al
  int v60; // edx
  int v61; // eax
  bool v62; // al
  int v63; // edx
  Outpop::Utility::Lock *v64; // edi
  Outpop::Utility::Logger *v65; // eax
  wchar_t *v66; // ebx
  int v67; // eax
  int v68; // esi
  Outpop::Utility::Logger *v69; // eax
  Outpop::Utility::Logger *v70; // eax
  wchar_t *v71; // eax
  int v72; // eax
  Outpop::Utility::Logger *v73; // eax
  int v74; // [esp-24h] [ebp-118h]
  int v75; // [esp-24h] [ebp-118h]
  int v76; // [esp-1Ch] [ebp-110h] BYREF
  wchar_t *tm; // [esp-18h] [ebp-10Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-108h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-104h]
  DWORD v80; // [esp-Ch] [ebp-100h]
  const wchar_t *v81; // [esp-8h] [ebp-FCh]
  int v82; // [esp-4h] [ebp-F8h]
  int v83; // [esp+0h] [ebp-F4h]
  int v84; // [esp+4h] [ebp-F0h]
  DWORD LastError; // [esp+14h] [ebp-E0h] BYREF
  int v86; // [esp+18h] [ebp-DCh]
  Outpop::Utility::Lock *v87; // [esp+20h] [ebp-D4h] BYREF
  int v88; // [esp+24h] [ebp-D0h]
  Outpop::Utility::Lock *Error; // [esp+28h] [ebp-CCh]
  struct Outpop::IONetwork::Asynch_IO_Result *v90; // [esp+2Ch] [ebp-C8h] BYREF
  int v91; // [esp+30h] [ebp-C4h]
  char optval[4]; // [esp+3Ch] [ebp-B8h] BYREF
  int v93; // [esp+40h] [ebp-B4h] BYREF
  _BYTE v94[16]; // [esp+44h] [ebp-B0h] BYREF
  _BYTE v95[14]; // [esp+54h] [ebp-A0h] BYREF
  _DWORD v96[4]; // [esp+62h] [ebp-92h] BYREF
  u_short v97; // [esp+72h] [ebp-82h]
  in_addr in; // [esp+74h] [ebp-80h]
  _BYTE v99[28]; // [esp+80h] [ebp-74h] BYREF
  _DWORD v100[17]; // [esp+9Ch] [ebp-58h] BYREF
  int v101; // [esp+F0h] [ebp-4h]

  v2 = a2;
  *(_DWORD *)optval = **((_DWORD **)this + 47);
  v4 = *((_DWORD *)a2 + 14);
  v90 = a2;
  LastError = 0;
  if ( !v4 || (v5 = *((_DWORD *)a2 + 15), v5 == -1) )
  {
    v6 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(*((_DWORD *)a2 + 9));
    Outpop::Utility::Sect_Block_Allocator::free(v6);
    LastError = (DWORD)this;
    Outpop::Utility::Ref_Object::addref(this);
    v101 = 0;
    (*(void (__thiscall **)(_DWORD, DWORD *))(**((_DWORD **)this + 46) + 8))(*((_DWORD *)this + 46), &LastError);
    v101 = -1;
    if ( LastError )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LastError);
    LastError = GetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      goto LABEL_34;
    }
    Error = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(Error);
    v101 = 1;
    v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    log_buffer = Outpop::Utility::Logger::get_log_buffer(v7);
    v9 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
    v80 = GetLastError();
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
            v80,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
            122);
    sub_10007400(0xFFFF - (v13 + v9), &log_buffer[v13 + v9], L"GXH handle_accept accept error,errcode is %d", LastError);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v82 = (int)log_buffer;
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v14);
    }
    v101 = -1;
    v15 = Error;
    goto LABEL_33;
  }
  if ( setsockopt(v5, 0xFFFF, 28683, optval, 4) == -1 )
  {
    v16 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(*((_DWORD *)a2 + 9));
    Outpop::Utility::Sect_Block_Allocator::free(v16);
    LastError = (DWORD)this;
    Outpop::Utility::Ref_Object::addref(this);
    v101 = 2;
    (*(void (__thiscall **)(_DWORD, DWORD *))(**((_DWORD **)this + 46) + 8))(*((_DWORD *)this + 46), &LastError);
    v101 = -1;
    if ( LastError )
      Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LastError);
    Error = (Outpop::Utility::Lock *)GetLastError();
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
      || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
    {
      goto LABEL_34;
    }
    LastError = Outpop::Utility::Logger::instance() + 144;
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)LastError);
    v101 = 3;
    v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v18 = Outpop::Utility::Logger::get_log_buffer(v17);
    v19 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_ERROR");
    v80 = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v20);
    v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v22 = Outpop::Utility::Logger::make_dt(v21);
    v23 = sub_10007400(
            0xFFFF - v19,
            &v18[v19],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v22,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            v80,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
            133);
    sub_10007400(0xFFFF - (v23 + v19), &v18[v23 + v19], L"GXH handle_accept setsockopt error,errcode is %d", Error);
    goto LABEL_28;
  }
  if ( CreateIoCompletionPort(*((HANDLE *)a2 + 15), **((HANDLE **)this + 31), 0, 0) || GetLastError() == 87 )
    goto LABEL_35;
  LastError = (DWORD)this;
  Outpop::Utility::Ref_Object::addref(this);
  v101 = 4;
  (*(void (__thiscall **)(_DWORD, DWORD *))(**((_DWORD **)this + 46) + 8))(*((_DWORD *)this + 46), &LastError);
  v101 = -1;
  if ( LastError )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)LastError);
  Error = (Outpop::Utility::Lock *)GetLastError();
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    LastError = Outpop::Utility::Logger::instance() + 144;
    Outpop::Utility::Lock::lock((Outpop::Utility::Lock *)LastError);
    v101 = 5;
    v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v18 = Outpop::Utility::Logger::get_log_buffer(v24);
    v25 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_ERROR");
    v80 = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v26);
    v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v28 = Outpop::Utility::Logger::make_dt(v27);
    v29 = sub_10007400(
            0xFFFF - v25,
            &v18[v25],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v28,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            v80,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
            141);
    sub_10007400(0xFFFF - (v29 + v25), &v18[v29 + v25], L"GXH handle_accept bind comport error,errcode is %d", Error);
LABEL_28:
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v18);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v82 = (int)v18;
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v30);
    }
    v101 = -1;
    v15 = (Outpop::Utility::Lock *)LastError;
LABEL_33:
    Outpop::Utility::Lock::unlock(v15);
    v2 = v90;
  }
LABEL_34:
  LastError = 1;
LABEL_35:
  v31 = *((_DWORD *)v2 + 15);
  v93 = 1;
  if ( setsockopt(v31, 6, 1, (const char *)&v93, 4) == -1 )
  {
    closesocket(*((_DWORD *)v2 + 15));
    Error = (Outpop::Utility::Lock *)WSAGetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v87 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v87);
      v101 = 6;
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v33 = Outpop::Utility::Logger::get_log_buffer(v32);
      v34 = sub_10007400(0xFFFFu, v33, L"\n%s", L"LOG_ERROR");
      v80 = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v35);
      v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v37 = Outpop::Utility::Logger::make_dt(v36);
      v38 = sub_10007400(
              0xFFFF - v34,
              &v33[v34],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v37,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              v80,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
              150);
      sub_10007400(
        0xFFFF - (v38 + v34),
        &v33[v38 + v34],
        L"handle_accept PostAccept can't set tcp no delay error %d",
        Error);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v33);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v82 = (int)v33;
        v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v39);
      }
      v101 = -1;
      Outpop::Utility::Lock::unlock(v87);
      v2 = v90;
    }
  }
  if ( LastError )
    goto LABEL_89;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)v99);
  v101 = 7;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
  LOBYTE(v101) = 8;
  Outpop::IONetwork::Stream_Acceptor::ParseAddress(v2, (char *)v96 + 2, v99, 0);
  v40 = (Outpop::Utility::Sect_Block_Allocator *)Outpop::Utility::Sect_Block_Allocator::instance(*((_DWORD *)v2 + 9));
  Outpop::Utility::Sect_Block_Allocator::free(v40);
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v87 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v87);
    LOBYTE(v101) = 9;
    v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v42 = Outpop::Utility::Logger::get_log_buffer(v41);
    v43 = sub_10007400(0xFFFFu, v42, L"\n%s", L"LOG_DEBUG");
    v80 = GetLastError();
    CurrentThreadId = GetCurrentThreadId();
    CurrentProcessId = GetCurrentProcessId();
    v44 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    tm = Outpop::Utility::Logger::make_tm(v44);
    v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v46 = Outpop::Utility::Logger::make_dt(v45);
    v47 = sub_10007400(
            0xFFFF - v43,
            &v42[v43],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v46,
            tm,
            CurrentProcessId,
            CurrentThreadId,
            v80,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp",
            163)
        + v43;
    v82 = ntohs(v97);
    v48 = inet_ntoa(in);
    sub_10007400(0xFFFF - v47, &v42[v47], L"handle_accept remote ip is %S,port is %d", v48, v82);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v42);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v82 = (int)v42;
      v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v49);
    }
    LOBYTE(v101) = 8;
    Outpop::Utility::Lock::unlock(v87);
    v2 = v90;
  }
  v50 = *((_BYTE *)this + 88) == 0;
  v87 = (Outpop::Utility::Lock *)&v76;
  if ( !v50 )
  {
    Outpop::IONetwork::INET_Addr::INET_Addr(
      (Outpop::IONetwork::INET_Addr *)&v76,
      (const struct Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
    LOBYTE(v101) = 10;
    v74 = *((_DWORD *)v2 + 15);
    LOBYTE(v101) = 8;
    Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet(
      v100,
      v74,
      (const struct Outpop::IONetwork::INET_Addr *)v99,
      v76,
      (int)tm,
      CurrentProcessId,
      CurrentThreadId,
      v80,
      (int)v81,
      v82);
    LOBYTE(v101) = 11;
    v51 = (Outpop::Utility::Lock *)operator new(92);
    v87 = v51;
    LOBYTE(v101) = 12;
    if ( v51 )
      v52 = (Outpop::IONetwork::Accept_Bluider_Process **)sub_100192B0(v51, v100, this);
    else
      v52 = 0;
    LOBYTE(v101) = 11;
    Error = (Outpop::Utility::Lock *)v52;
    if ( v52 )
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v52);
    LOBYTE(v101) = 13;
    LastError = (DWORD)this + 132;
    v86 = 0;
    v53 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
    v86 = v53 - 1;
    LOBYTE(v101) = 14;
    if ( v53 )
    {
      v90 = (struct Outpop::IONetwork::Asynch_IO_Result *)Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
      v91 = v54;
      v87 = (Outpop::Utility::Lock *)v52;
      if ( v52 )
        Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v52);
      LOBYTE(v101) = 15;
      v55 = sub_1002B630(v95, &v90, &v87);
      LOBYTE(v101) = 16;
      sub_1003BE30(v94, v55);
      LOBYTE(v101) = 17;
      sub_10039B80((char *)this + 192, &v90, v94);
      LOBYTE(v101) = 16;
      sub_10018600(v94);
      LOBYTE(v101) = 15;
      sub_10018600(v95);
      LOBYTE(v101) = 14;
      if ( v52 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v52);
      LOBYTE(v101) = 13;
      v86 = -1;
      Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
      if ( Outpop::IONetwork::Accept_Bluider_Process::first_process(v52[21]) != -1 )
        goto LABEL_67;
      v87 = (Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132);
      v88 = 0;
      v56 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
      v88 = v56 - 1;
      LOBYTE(v101) = 18;
      if ( v56 )
      {
        LastError = Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
        v86 = v57;
        sub_1003A2E0((char *)this + 192);
        LOBYTE(v101) = 13;
        v88 = -1;
        Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
LABEL_67:
        LOBYTE(v101) = 11;
LABEL_87:
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v52);
        goto LABEL_88;
      }
      LOBYTE(v101) = 11;
      goto LABEL_71;
    }
    LOBYTE(v101) = 11;
LABEL_70:
    if ( !v52 )
    {
LABEL_72:
      LOBYTE(v101) = 8;
      Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)v100);
      LOBYTE(v101) = 7;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
      v101 = -1;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v99);
      return;
    }
LABEL_71:
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v52);
    goto LABEL_72;
  }
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::INET_Addr *)&v76,
    (const struct Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
  LOBYTE(v101) = 19;
  v75 = *((_DWORD *)v2 + 15);
  LOBYTE(v101) = 8;
  Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet(
    v100,
    v75,
    (const struct Outpop::IONetwork::INET_Addr *)v99,
    v76,
    (int)tm,
    CurrentProcessId,
    CurrentThreadId,
    v80,
    (int)v81,
    v82);
  LOBYTE(v101) = 20;
  v58 = (Outpop::Utility::Lock *)operator new(156);
  v87 = v58;
  LOBYTE(v101) = 21;
  if ( v58 )
    v52 = (Outpop::IONetwork::Accept_Bluider_Process **)sub_10019DB0(v58, v100, this);
  else
    v52 = 0;
  LOBYTE(v101) = 20;
  Error = (Outpop::Utility::Lock *)v52;
  if ( v52 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v52);
  LOBYTE(v101) = 22;
  LastError = (DWORD)this + 132;
  v86 = 0;
  v59 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
  v86 = v59 - 1;
  LOBYTE(v101) = 23;
  if ( !v59 )
    goto LABEL_99;
  v90 = (struct Outpop::IONetwork::Asynch_IO_Result *)Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
  v91 = v60;
  v87 = (Outpop::Utility::Lock *)v52;
  if ( v52 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v52);
  LOBYTE(v101) = 24;
  v61 = sub_1002B630(v95, &v90, &v87);
  LOBYTE(v101) = 25;
  sub_1003BE30(v94, v61);
  LOBYTE(v101) = 26;
  sub_10039B80((char *)this + 192, &v90, v94);
  LOBYTE(v101) = 25;
  sub_10018600(v94);
  LOBYTE(v101) = 24;
  sub_10018600(v95);
  LOBYTE(v101) = 23;
  if ( v52 )
    Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v52);
  LOBYTE(v101) = 22;
  v86 = -1;
  Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
  if ( sub_1001A2C0(v83, v84) == -1 )
  {
    v87 = (Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132);
    v88 = 0;
    v62 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
    v88 = v62 - 1;
    LOBYTE(v101) = 27;
    if ( v62 )
    {
      LastError = Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
      v86 = v63;
      sub_1003A2E0((char *)this + 192);
      LOBYTE(v101) = 22;
      v88 = -1;
      Outpop::Utility::Thread_Mutex::release((Outpop::IONetwork::Stream_Acceptor *)((char *)this + 132));
      goto LABEL_86;
    }
LABEL_99:
    LOBYTE(v101) = 20;
    goto LABEL_70;
  }
LABEL_86:
  LOBYTE(v101) = 20;
  if ( v52 )
    goto LABEL_87;
LABEL_88:
  LOBYTE(v101) = 8;
  Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)v100);
  LOBYTE(v101) = 7;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)((char *)v96 + 2));
  v101 = -1;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)v99);
LABEL_89:
  if ( Outpop::IONetwork::Stream_Acceptor::PostAccept(this, 0) == -1 )
  {
    v87 = (Outpop::Utility::Lock *)GetLastError();
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
    {
      v64 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Error = v64;
      Outpop::Utility::Lock::lock(v64);
      v101 = 28;
      v65 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v66 = Outpop::Utility::Logger::get_log_buffer(v65);
      v67 = sub_10007400(0xFFFFu, v66, L"\n%s", L"LOG_ERROR");
      v82 = 205;
      v81 = L"D:\\R3\\OutpopGameProject\\IONetwork\\Stream_Accecptor.cpp";
      v68 = v67;
      v80 = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v69 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v69);
      v70 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v71 = Outpop::Utility::Logger::make_dt(v70);
      v72 = sub_10007400(0xFFFF - v68, &v66[v68], L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:", v71);
      sub_10007400(0xFFFF - (v72 + v68), &v66[v72 + v68], L"GXH handle_accept PostAccept error,errcode is %d", v87);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v66);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v82 = (int)v66;
        v73 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v73);
      }
      v101 = -1;
      Outpop::Utility::Lock::unlock(v64);
    }
  }
}
