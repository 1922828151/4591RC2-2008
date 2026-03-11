/*
 * func-name: ?start@P2PUdpBuilder@IONetwork@Outpop@@QAE_NXZ
 * func-address: 0x1004ab10
 * callers: none
 * callees: 0x10007400, 0x1000d690, 0x1000d6f0, 0x1004b970, 0x1004e98e
 */

char __thiscall Outpop::IONetwork::P2PUdpBuilder::start(Outpop::IONetwork::P2PUdpBuilder *this)
{
  SOCKET *v2; // eax
  Outpop::IONetwork::TSocket *v3; // eax
  Outpop::IONetwork::TSocket *v4; // eax
  void *v5; // eax
  int v6; // ebx
  Outpop::Utility::Lock *v7; // ebp
  Outpop::Utility::Logger *v8; // eax
  wchar_t *v9; // edi
  int v10; // esi
  Outpop::Utility::Logger *v11; // eax
  Outpop::Utility::Logger *v12; // eax
  wchar_t *v13; // eax
  int v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Lock *v17; // ebx
  Outpop::Utility::Logger *v18; // eax
  wchar_t *log_buffer; // edi
  int v20; // esi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // eax
  Outpop::Utility::Logger *v25; // eax
  SOCKET *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // eax
  SOCKET *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  Outpop::Utility::Logger *v33; // eax
  Outpop::Utility::Logger *v34; // eax
  wchar_t *v35; // eax
  SOCKET *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  Outpop::Utility::Logger *v38; // eax
  Outpop::Utility::Logger *v39; // eax
  wchar_t *v40; // eax
  Outpop::Utility::Logger *v41; // eax
  Outpop::Utility::Logger *v42; // eax
  Outpop::Utility::Logger *v43; // eax
  wchar_t *v44; // eax
  int v45; // edi
  int Error; // ebp
  Outpop::Utility::Logger *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  Outpop::Utility::Logger *v49; // eax
  wchar_t *dt; // eax
  int v51; // ebp
  Outpop::Utility::Logger *v52; // eax
  int v53; // esi
  Outpop::Utility::Logger *v54; // eax
  Outpop::Utility::Logger *v55; // eax
  wchar_t *v56; // eax
  int v57; // eax
  SOCKET *v58; // eax
  int v59; // ebp
  Outpop::Utility::Logger *v60; // eax
  Outpop::Utility::Logger *v61; // eax
  Outpop::Utility::Logger *v62; // eax
  wchar_t *v63; // eax
  SOCKET *v64; // eax
  int v65; // ebp
  Outpop::Utility::Logger *v66; // eax
  int v67; // esi
  Outpop::Utility::Logger *v68; // eax
  Outpop::Utility::Logger *v69; // eax
  wchar_t *v70; // eax
  int v71; // eax
  int v72; // edi
  int v73; // edi
  int v74; // eax
  wchar_t *v75; // [esp-10h] [ebp-54h]
  wchar_t *v76; // [esp-10h] [ebp-54h]
  wchar_t *v77; // [esp-10h] [ebp-54h]
  wchar_t *v78; // [esp-10h] [ebp-54h]
  wchar_t *v79; // [esp-10h] [ebp-54h]
  wchar_t *v80; // [esp-10h] [ebp-54h]
  wchar_t *tm; // [esp-10h] [ebp-54h]
  wchar_t *v82; // [esp-10h] [ebp-54h]
  wchar_t *v83; // [esp-10h] [ebp-54h]
  wchar_t *v84; // [esp-10h] [ebp-54h]
  DWORD v85; // [esp-Ch] [ebp-50h]
  DWORD v86; // [esp-Ch] [ebp-50h]
  DWORD v87; // [esp-Ch] [ebp-50h]
  DWORD v88; // [esp-Ch] [ebp-50h]
  DWORD v89; // [esp-Ch] [ebp-50h]
  DWORD v90; // [esp-Ch] [ebp-50h]
  DWORD CurrentProcessId; // [esp-Ch] [ebp-50h]
  DWORD v92; // [esp-Ch] [ebp-50h]
  DWORD v93; // [esp-Ch] [ebp-50h]
  DWORD v94; // [esp-Ch] [ebp-50h]
  DWORD v95; // [esp-8h] [ebp-4Ch]
  DWORD v96; // [esp-8h] [ebp-4Ch]
  DWORD v97; // [esp-8h] [ebp-4Ch]
  DWORD v98; // [esp-8h] [ebp-4Ch]
  DWORD v99; // [esp-8h] [ebp-4Ch]
  DWORD v100; // [esp-8h] [ebp-4Ch]
  DWORD CurrentThreadId; // [esp-8h] [ebp-4Ch]
  DWORD v102; // [esp-8h] [ebp-4Ch]
  DWORD v103; // [esp-8h] [ebp-4Ch]
  DWORD v104; // [esp-8h] [ebp-4Ch]
  DWORD v105; // [esp-4h] [ebp-48h]
  DWORD v106; // [esp-4h] [ebp-48h]
  DWORD v107; // [esp-4h] [ebp-48h]
  DWORD v108; // [esp-4h] [ebp-48h]
  DWORD v109; // [esp-4h] [ebp-48h]
  DWORD v110; // [esp-4h] [ebp-48h]
  DWORD LastError; // [esp-4h] [ebp-48h]
  DWORD v112; // [esp-4h] [ebp-48h]
  DWORD v113; // [esp-4h] [ebp-48h]
  DWORD v114; // [esp-4h] [ebp-48h]
  wchar_t *v115; // [esp+0h] [ebp-44h]
  Outpop::Utility::Ref_Object *v116; // [esp+4h] [ebp-40h]
  char optval[4]; // [esp+1Ch] [ebp-28h] BYREF
  char v118[4]; // [esp+20h] [ebp-24h] BYREF
  char v119[4]; // [esp+24h] [ebp-20h] BYREF
  char v120[4]; // [esp+28h] [ebp-1Ch] BYREF
  _DWORD v121[3]; // [esp+2Ch] [ebp-18h] BYREF
  int v122; // [esp+40h] [ebp-4h]

  v2 = (SOCKET *)*((_DWORD *)this + 48);
  if ( v2 )
  {
    if ( *v2 == -1 )
    {
      Error = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 7;
        v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v47);
        v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v48);
        v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v49);
        v24 = sub_10007400(
                0xFFFF - v20,
                &log_buffer[v20],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                88);
        v116 = (Outpop::Utility::Ref_Object *)Error;
        v115 = L"new listen_socket failed,errcode is %d";
        goto LABEL_21;
      }
      return 0;
    }
    *(_DWORD *)v120 = 1;
    if ( setsockopt(*v2, 0xFFFF, 4, v120, 4) == -1 )
    {
      v51 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 8;
        v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v52);
        v53 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v112 = GetLastError();
        v102 = GetCurrentThreadId();
        v92 = GetCurrentProcessId();
        v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v82 = Outpop::Utility::Logger::make_tm(v54);
        v55 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v56 = Outpop::Utility::Logger::make_dt(v55);
        v57 = sub_10007400(
                0xFFFF - v53,
                &log_buffer[v53],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v56,
                v82,
                v92,
                v102,
                v112,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                102);
        sub_10007400(
          0xFFFF - (v57 + v53),
          &log_buffer[v57 + v53],
          L"listen socket set socketopt error,errcode is %d",
          v51);
        goto LABEL_22;
      }
      return 0;
    }
    v58 = (SOCKET *)*((_DWORD *)this + 48);
    *(_DWORD *)v119 = 1310700;
    if ( setsockopt(*v58, 0xFFFF, 4098, v119, 4) )
    {
      v59 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 9;
        v60 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v60);
        v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v113 = GetLastError();
        v103 = GetCurrentThreadId();
        v93 = GetCurrentProcessId();
        v61 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v83 = Outpop::Utility::Logger::make_tm(v61);
        v62 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v63 = Outpop::Utility::Logger::make_dt(v62);
        v24 = sub_10007400(
                0xFFFF - v20,
                &log_buffer[v20],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v63,
                v83,
                v93,
                v103,
                v113,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                110);
        v116 = (Outpop::Utility::Ref_Object *)v59;
        v115 = L"listen socket set_SOCKET_opt SO_RCVBUF  error,errcode is %d";
        goto LABEL_21;
      }
      return 0;
    }
    v64 = (SOCKET *)*((_DWORD *)this + 48);
    *(_DWORD *)v118 = 1310700;
    if ( setsockopt(*v64, 0xFFFF, 4097, v118, 4) )
    {
      v65 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 10;
        v66 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v66);
        v67 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v114 = GetLastError();
        v104 = GetCurrentThreadId();
        v94 = GetCurrentProcessId();
        v68 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v84 = Outpop::Utility::Logger::make_tm(v68);
        v69 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v70 = Outpop::Utility::Logger::make_dt(v69);
        v71 = sub_10007400(
                0xFFFF - v67,
                &log_buffer[v67],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v70,
                v84,
                v94,
                v104,
                v114,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                118);
        sub_10007400(
          0xFFFF - (v71 + v67),
          &log_buffer[v71 + v67],
          L"listen socket set_SOCKET_opt SO_SNDBUF  error,errcode is %d",
          v65);
        goto LABEL_22;
      }
      return 0;
    }
    v72 = 0;
    if ( *((_DWORD *)this + 26) )
    {
      while ( Outpop::IONetwork::P2PUdpBuilder::PostAccept(this, 65500) != -1 )
      {
        if ( (unsigned int)++v72 >= *((_DWORD *)this + 26) )
          goto LABEL_75;
      }
      return 0;
    }
  }
  else
  {
    v3 = (Outpop::IONetwork::TSocket *)operator new(4);
    *(_DWORD *)v118 = v3;
    v122 = 0;
    if ( v3 )
      v4 = Outpop::IONetwork::TSocket::TSocket(v3, 2, 2, 0);
    else
      v4 = 0;
    v122 = -1;
    *((_DWORD *)this + 48) = v4;
    v5 = *(void **)v4;
    if ( v5 == (void *)-1 )
    {
      v6 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v7 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        *(_DWORD *)v118 = v7;
        Outpop::Utility::Lock::lock(v7);
        v122 = 1;
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v9 = Outpop::Utility::Logger::get_log_buffer(v8);
        v10 = sub_10007400(0xFFFFu, v9, L"\n%s", L"LOG_ERROR");
        v105 = GetLastError();
        v95 = GetCurrentThreadId();
        v85 = GetCurrentProcessId();
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v75 = Outpop::Utility::Logger::make_tm(v11);
        v12 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v13 = Outpop::Utility::Logger::make_dt(v12);
        v14 = sub_10007400(
                0xFFFF - v10,
                &v9[v10],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v13,
                v75,
                v85,
                v95,
                v105,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                32);
        sub_10007400(0xFFFF - (v14 + v10), &v9[v14 + v10], L"new listen_socket failed,errcode is %d", v6);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v9);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        v122 = -1;
        Outpop::Utility::Lock::unlock(v7);
      }
      return 0;
    }
    if ( !CreateIoCompletionPort(v5, **((HANDLE **)this + 27), 0, 0) && GetLastError() != 87 )
    {
      *(_DWORD *)v118 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 2;
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v18);
        v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v106 = GetLastError();
        v96 = GetCurrentThreadId();
        v86 = GetCurrentProcessId();
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v76 = Outpop::Utility::Logger::make_tm(v21);
        v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v23 = Outpop::Utility::Logger::make_dt(v22);
        v24 = sub_10007400(
                0xFFFF - v20,
                &log_buffer[v20],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v23,
                v76,
                v86,
                v96,
                v106,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                38);
        v116 = *(Outpop::Utility::Ref_Object **)v118;
        v115 = L"bind to win32comport error,errcode is %d";
LABEL_21:
        sub_10007400(0xFFFF - (v24 + v20), &log_buffer[v24 + v20], v115, v116);
LABEL_22:
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v25);
        }
        v122 = -1;
        Outpop::Utility::Lock::unlock(v17);
        return 0;
      }
      return 0;
    }
    v26 = (SOCKET *)*((_DWORD *)this + 48);
    *(_DWORD *)optval = 1;
    if ( setsockopt(*v26, 0xFFFF, 4, optval, 4) == -1 )
    {
      *(_DWORD *)v118 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 3;
        v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v27);
        v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v107 = GetLastError();
        v97 = GetCurrentThreadId();
        v87 = GetCurrentProcessId();
        v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v77 = Outpop::Utility::Logger::make_tm(v28);
        v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v30 = Outpop::Utility::Logger::make_dt(v29);
        v24 = sub_10007400(
                0xFFFF - v20,
                &log_buffer[v20],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v30,
                v77,
                v87,
                v97,
                v107,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                46);
        v116 = *(Outpop::Utility::Ref_Object **)v118;
        v115 = L"listen socket set socketopt error,errcode is %d";
        goto LABEL_21;
      }
      return 0;
    }
    v31 = (SOCKET *)*((_DWORD *)this + 48);
    *(_DWORD *)v119 = 1310700;
    if ( setsockopt(*v31, 0xFFFF, 4098, v119, 4) )
    {
      *(_DWORD *)v118 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 4;
        v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v32);
        v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v108 = GetLastError();
        v98 = GetCurrentThreadId();
        v88 = GetCurrentProcessId();
        v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v78 = Outpop::Utility::Logger::make_tm(v33);
        v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v35 = Outpop::Utility::Logger::make_dt(v34);
        v24 = sub_10007400(
                0xFFFF - v20,
                &log_buffer[v20],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v35,
                v78,
                v88,
                v98,
                v108,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                54);
        v116 = *(Outpop::Utility::Ref_Object **)v118;
        v115 = L"listen socket set_SOCKET_opt SO_RCVBUF  error,errcode is %d";
        goto LABEL_21;
      }
      return 0;
    }
    v36 = (SOCKET *)*((_DWORD *)this + 48);
    *(_DWORD *)v120 = 1310700;
    if ( setsockopt(*v36, 0xFFFF, 4097, v120, 4) )
    {
      *(_DWORD *)v118 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 5;
        v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v37);
        v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v109 = GetLastError();
        v99 = GetCurrentThreadId();
        v89 = GetCurrentProcessId();
        v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v79 = Outpop::Utility::Logger::make_tm(v38);
        v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v40 = Outpop::Utility::Logger::make_dt(v39);
        v24 = sub_10007400(
                0xFFFF - v20,
                &log_buffer[v20],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v40,
                v79,
                v89,
                v99,
                v109,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                62);
        v116 = *(Outpop::Utility::Ref_Object **)v118;
        v115 = L"listen socket set_SOCKET_opt SO_SNDBUF  error,errcode is %d";
        goto LABEL_21;
      }
      return 0;
    }
    if ( Outpop::IONetwork::TSocket::bind_addr(
           *((SOCKET **)this + 48),
           (Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 116)) == -1 )
    {
      *(_DWORD *)v118 = WSAGetLastError();
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
      {
        v17 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v121[0] = v17;
        Outpop::Utility::Lock::lock(v17);
        v122 = 6;
        v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v41);
        v20 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v110 = GetLastError();
        v100 = GetCurrentThreadId();
        v90 = GetCurrentProcessId();
        v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v80 = Outpop::Utility::Logger::make_tm(v42);
        v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v44 = Outpop::Utility::Logger::make_dt(v43);
        v24 = sub_10007400(
                0xFFFF - v20,
                &log_buffer[v20],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v44,
                v80,
                v90,
                v100,
                v110,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                69);
        v116 = *(Outpop::Utility::Ref_Object **)v118;
        v115 = L"listen socket ind_addr error,errcode is %d";
        goto LABEL_21;
      }
      return 0;
    }
    v45 = 0;
    if ( *((_DWORD *)this + 26) )
    {
      while ( Outpop::IONetwork::P2PUdpBuilder::PostAccept(this, 65500) != -1 )
      {
        if ( (unsigned int)++v45 >= *((_DWORD *)this + 26) )
          goto LABEL_75;
      }
      return 0;
    }
  }
LABEL_75:
  *(_DWORD *)v118 = 0;
  v122 = 11;
  v73 = Outpop::Utility::Time_Value::Time_Value((Outpop::Utility::Time_Value *)v121, 1, 0);
  LOBYTE(v122) = 12;
  *(_DWORD *)optval = this;
  Outpop::Utility::Ref_Object::addref(this);
  LOBYTE(v122) = 13;
  v74 = Outpop::Utility::Timer_Queue::instance(optval, v73, v118, 0, 0);
  *((_DWORD *)this + 61) = Outpop::Utility::Timer_Queue::schedule_repeating_timer(v74);
  LOBYTE(v122) = 12;
  if ( *(_DWORD *)optval )
    Outpop::Utility::Ref_Object::release(*(Outpop::Utility::Ref_Object **)optval);
  LOBYTE(v122) = 11;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v121);
  v122 = -1;
  if ( *(_DWORD *)v118 )
    Outpop::Utility::Ref_Object::release(*(Outpop::Utility::Ref_Object **)v118);
  return 1;
}
