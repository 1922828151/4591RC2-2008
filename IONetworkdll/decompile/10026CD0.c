/*
 * func-name: ?on_new_channel@Dgram_Acceptor@IONetwork@Outpop@@UAEXAAUIO_Channel_Config@23@HHV?$Smart_Ptr@VBinary_Stream@Utility@Outpop@@@Utility@3@@Z
 * func-address: 0x10026cd0
 * callers: none
 * callees: 0x10003890, 0x10007400, 0x10018600, 0x1002a530, 0x1002b5c0, 0x1002b630, 0x1002bba0, 0x1002cbf0, 0x100321f0, 0x1003a2e0, 0x1003be30, 0x1003ff40, 0x1004e98e
 */

void __thiscall Outpop::IONetwork::Dgram_Acceptor::on_new_channel(
        int this,
        struct in_addr *a2,
        Outpop::IONetwork::INET_Addr *a3,
        Outpop::Utility::Lock *a4,
        Outpop::Utility::Ref_Object *a5)
{
  struct in_addr *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  Outpop::IONetwork::Dgram_Channel *v15; // eax
  Outpop::Utility::Ref_Object *v16; // ebp
  Outpop::Utility::Thread_Mutex *v17; // ecx
  bool v18; // zf
  bool v19; // al
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // esi
  int send_stream; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // ebp
  int v27; // esi
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // eax
  int v31; // esi
  char *v32; // eax
  Outpop::Utility::Logger *v33; // eax
  int v34; // edx
  bool v35; // al
  int v36; // eax
  int v37; // edx
  int v38; // esi
  int v39; // ebp
  int v40; // esi
  int v41; // eax
  Outpop::Utility::Logger *v42; // eax
  wchar_t *log_buffer; // ebp
  int v44; // esi
  Outpop::Utility::Logger *v45; // eax
  Outpop::Utility::Logger *v46; // eax
  wchar_t *dt; // eax
  int v48; // esi
  char *v49; // eax
  Outpop::Utility::Logger *v50; // eax
  int v51; // edx
  Outpop::Utility::Logger *v52; // eax
  wchar_t *v53; // ebp
  int v54; // esi
  Outpop::Utility::Logger *v55; // eax
  Outpop::Utility::Logger *v56; // eax
  wchar_t *v57; // eax
  int v58; // esi
  u_short v59; // ax
  int v60; // eax
  int v61; // edx
  Outpop::Utility::Logger *v62; // eax
  Outpop::Utility::Thread_Mutex *v63; // esi
  bool v64; // al
  int v65; // eax
  int v66; // edx
  int v67; // eax
  Outpop::Utility::Logger *v68; // eax
  wchar_t *v69; // ebp
  int v70; // esi
  Outpop::Utility::Logger *v71; // eax
  Outpop::Utility::Logger *v72; // eax
  wchar_t *v73; // eax
  int v74; // esi
  int v75; // eax
  int v76; // edx
  Outpop::Utility::Logger *v77; // eax
  void (__thiscall *v78)(Outpop::Utility::Ref_Object *__hidden); // esi
  wchar_t *v79; // [esp-18h] [ebp-9Ch]
  wchar_t *tm; // [esp-18h] [ebp-9Ch]
  wchar_t *v81; // [esp-18h] [ebp-9Ch]
  wchar_t *v82; // [esp-18h] [ebp-9Ch]
  DWORD v83; // [esp-14h] [ebp-98h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-98h]
  DWORD v85; // [esp-14h] [ebp-98h]
  DWORD v86; // [esp-14h] [ebp-98h]
  DWORD v87; // [esp-10h] [ebp-94h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-94h]
  DWORD v89; // [esp-10h] [ebp-94h]
  DWORD v90; // [esp-10h] [ebp-94h]
  DWORD v91; // [esp-Ch] [ebp-90h]
  DWORD LastError; // [esp-Ch] [ebp-90h]
  DWORD v93; // [esp-Ch] [ebp-90h]
  int v94; // [esp-Ch] [ebp-90h]
  DWORD v95; // [esp-Ch] [ebp-90h]
  int v96; // [esp-8h] [ebp-8Ch]
  int v97; // [esp-4h] [ebp-88h]
  int v98; // [esp-4h] [ebp-88h]
  int v99; // [esp-4h] [ebp-88h]
  int v100; // [esp-4h] [ebp-88h]
  Outpop::Utility::Ref_Object *v101; // [esp+14h] [ebp-70h] BYREF
  int v102; // [esp+18h] [ebp-6Ch] BYREF
  int v103; // [esp+1Ch] [ebp-68h]
  Outpop::Utility::Thread_Mutex *v104; // [esp+28h] [ebp-5Ch]
  int v105; // [esp+2Ch] [ebp-58h]
  int v106; // [esp+30h] [ebp-54h] BYREF
  int v107; // [esp+34h] [ebp-50h]
  char v108; // [esp+38h] [ebp-4Ch]
  _BYTE v109[16]; // [esp+3Ch] [ebp-48h] BYREF
  _DWORD v110[6]; // [esp+4Ch] [ebp-38h] BYREF
  int v111; // [esp+64h] [ebp-20h]
  int v112; // [esp+68h] [ebp-1Ch]
  int v113; // [esp+6Ch] [ebp-18h]
  int v114; // [esp+70h] [ebp-14h]
  int v115; // [esp+74h] [ebp-10h]
  int v116; // [esp+80h] [ebp-4h]

  v116 = 0;
  v6 = a2;
  a2[1].S_un.S_addr = 1;
  v7 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)(this + 156) + 16))(this + 156);
  v8 = (_DWORD *)(*(int (__thiscall **)(struct in_addr *))(v6[2].S_un.S_addr + 16))(v6 + 2);
  *v8 = *v7;
  v8[1] = v7[1];
  v8[2] = v7[2];
  v8[3] = v7[3];
  v9 = *(_DWORD *)(this + 28);
  v10 = *(_DWORD *)(this + 8);
  v110[4] = *(_DWORD *)(this + 24);
  v11 = *(_DWORD *)(this + 16);
  v110[5] = v9;
  v12 = *(_DWORD *)(this + 40);
  v110[0] = v10;
  v13 = *(_DWORD *)(this + 32);
  v110[2] = v11;
  v14 = *(_DWORD *)(this + 36);
  v113 = v12;
  v111 = v13;
  v115 = 100;
  v114 = 300;
  v112 = v14;
  v110[1] = a3;
  v110[3] = a4;
  v15 = (Outpop::IONetwork::Dgram_Channel *)operator new(704);
  a3 = v15;
  LOBYTE(v116) = 1;
  if ( v15 )
  {
    v16 = (Outpop::Utility::Ref_Object *)Outpop::IONetwork::Dgram_Channel::Dgram_Channel(
                                           v15,
                                           (struct Outpop::IONetwork::Channel_Config *)v110,
                                           (struct Outpop::IONetwork::IO_Channel_Config *)v6);
    a2 = (struct in_addr *)v16;
  }
  else
  {
    a2 = 0;
    v16 = 0;
  }
  LOBYTE(v116) = 0;
  v101 = v16;
  if ( v16 )
    Outpop::Utility::Ref_Object::addref(v16);
  LOBYTE(v116) = 2;
  v17 = (Outpop::Utility::Thread_Mutex *)(this + 208);
  v104 = (Outpop::Utility::Thread_Mutex *)(this + 208);
  v18 = *(_BYTE *)(this + 88) == 0;
  v105 = 0;
  if ( v18 )
  {
    v35 = Outpop::Utility::Thread_Mutex::acquire(v17);
    v105 = v35 - 1;
    LOBYTE(v116) = 6;
    if ( v35 )
    {
      a3 = (Outpop::IONetwork::INET_Addr *)&v6[9];
      v36 = Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)&v6[9]);
      v107 = v37;
      v106 = v36;
      sub_1002BBA0(&v102, &v106);
      v38 = *(_DWORD *)(this + 336);
      if ( !v102 || v102 != this + 332 )
        invalid_parameter_noinfo();
      v39 = v103;
      if ( v103 == v38 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          a4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(a4);
          LOBYTE(v116) = 8;
          v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v42);
          v44 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v45);
          v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v46);
          v48 = sub_10007400(
                  0xFFFF - v44,
                  &log_buffer[v44],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                  164)
              + v44;
          v98 = ntohs(v6[12].S_un.S_un_w.s_w2);
          v49 = inet_ntoa(v6[13]);
          sub_10007400(
            0xFFFF - v48,
            &log_buffer[v48],
            L"Dgram_Acceptor::on_new_channel Error  wait_channel_hash_map_ not found channel,ip is %S,port is %d",
            v49,
            v98);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v50);
          }
          LOBYTE(v116) = 6;
          Outpop::Utility::Lock::unlock(a4);
        }
      }
      else
      {
        v40 = v102;
        if ( !v102 )
          invalid_parameter_noinfo();
        if ( v39 == *(_DWORD *)(v40 + 4) )
          invalid_parameter_noinfo();
        v41 = sub_1002B5C0(*(_DWORD *)(v39 + 16), &a4);
        LOBYTE(v116) = 7;
        Outpop::IONetwork::Dgram_Channel::set_login_in_pakcet(v41);
        LOBYTE(v116) = 6;
        if ( a4 )
          Outpop::Utility::Ref_Object::release(a4);
      }
      v106 = Outpop::IONetwork::INET_Addr::hash64(a3);
      v107 = v51;
      sub_1003A2E0(this + 328);
      LOBYTE(v116) = 2;
      v105 = -1;
      Outpop::Utility::Thread_Mutex::release(v104);
      v16 = (Outpop::Utility::Ref_Object *)a2;
      goto LABEL_47;
    }
  }
  else
  {
    v19 = Outpop::Utility::Thread_Mutex::acquire(v17);
    v105 = v19 - 1;
    LOBYTE(v116) = 3;
    if ( v19 )
    {
      a3 = (Outpop::IONetwork::INET_Addr *)&v6[9];
      v20 = Outpop::IONetwork::INET_Addr::hash64((Outpop::IONetwork::INET_Addr *)&v6[9]);
      v107 = v21;
      v106 = v20;
      sub_1002BBA0(&v102, &v106);
      v22 = v102;
      v23 = *(_DWORD *)(this + 296);
      if ( !v102 || v102 != this + 292 )
      {
        invalid_parameter_noinfo();
        v22 = v102;
      }
      if ( v103 == v23 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          a4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(a4);
          LOBYTE(v116) = 5;
          v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v26 = Outpop::Utility::Logger::get_log_buffer(v25);
          v27 = sub_10007400(0xFFFFu, v26, L"\n%s", L"LOG_ERROR");
          v91 = GetLastError();
          v87 = GetCurrentThreadId();
          v83 = GetCurrentProcessId();
          v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v79 = Outpop::Utility::Logger::make_tm(v28);
          v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v30 = Outpop::Utility::Logger::make_dt(v29);
          v31 = sub_10007400(
                  0xFFFF - v27,
                  &v26[v27],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v30,
                  v79,
                  v83,
                  v87,
                  v91,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                  150)
              + v27;
          v97 = ntohs(v6[12].S_un.S_un_w.s_w2);
          v32 = inet_ntoa(v6[13]);
          sub_10007400(
            0xFFFF - v31,
            &v26[v31],
            L"Dgram_Acceptor::on_new_channel Error  wait_channel_hash_map_ not found channel,ip is %S,port is %d",
            v32,
            v97);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v26);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v33);
          }
          LOBYTE(v116) = 3;
          Outpop::Utility::Lock::unlock(a4);
          v16 = (Outpop::Utility::Ref_Object *)a2;
        }
      }
      else
      {
        if ( !v22 )
        {
          invalid_parameter_noinfo();
          v22 = v102;
        }
        if ( v103 == *(_DWORD *)(v22 + 4) )
          invalid_parameter_noinfo();
        send_stream = Outpop::IONetwork::Dgram_Accept_Bluider_Process::get_send_stream(&a4);
        LOBYTE(v116) = 4;
        Outpop::IONetwork::Dgram_Channel::set_login_in_pakcet(send_stream);
        LOBYTE(v116) = 3;
        if ( a4 )
          Outpop::Utility::Ref_Object::release(a4);
      }
      v106 = Outpop::IONetwork::INET_Addr::hash64(a3);
      v107 = v34;
      sub_1003A2E0(this + 288);
      LOBYTE(v116) = 2;
      v105 = -1;
      Outpop::Utility::Thread_Mutex::release(v104);
LABEL_47:
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        a4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(a4);
        LOBYTE(v116) = 9;
        v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v53 = Outpop::Utility::Logger::get_log_buffer(v52);
        v54 = sub_10007400(0xFFFFu, v53, L"\n%s", L"LOG_DEBUG");
        v93 = GetLastError();
        v89 = GetCurrentThreadId();
        v85 = GetCurrentProcessId();
        v55 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v81 = Outpop::Utility::Logger::make_tm(v55);
        v56 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v57 = Outpop::Utility::Logger::make_dt(v56);
        v58 = sub_10007400(
                0xFFFF - v54,
                &v53[v54],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v57,
                v81,
                v85,
                v89,
                v93,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                171)
            + v54;
        v59 = ntohs(v6[12].S_un.S_un_w.s_w2);
        v99 = v112;
        v96 = v111;
        v94 = v59;
        v60 = Outpop::IONetwork::INET_Addr::hash64(a3);
        sub_10007400(
          0xFFFF - v58,
          &v53[v58],
          L" Dgram_Acceptor::on_new_channel  hash64  is  %lld,port is  %d,udp_resend_time_ is %d,udp_timer_tick_ is %d",
          v60,
          v61,
          v94,
          v96,
          v99);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v53);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v62 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v62);
        }
        LOBYTE(v116) = 2;
        Outpop::Utility::Lock::unlock(a4);
        v16 = (Outpop::Utility::Ref_Object *)a2;
      }
      v63 = (Outpop::Utility::Thread_Mutex *)(this + 184);
      v104 = (Outpop::Utility::Thread_Mutex *)(this + 184);
      v105 = 0;
      v64 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 184));
      v105 = v64 - 1;
      LOBYTE(v116) = 10;
      if ( v64 )
      {
        v65 = Outpop::IONetwork::INET_Addr::hash64(a3);
        v107 = v66;
        v106 = v65;
        v67 = sub_1002B630(v109, &v106, &v101);
        LOBYTE(v116) = 11;
        sub_1003BE30(&v102, v67);
        LOBYTE(v116) = 12;
        sub_1002A530(this + 248, &v106, &v102);
        LOBYTE(v116) = 11;
        sub_10018600((int)&v102);
        LOBYTE(v116) = 10;
        sub_10018600((int)v109);
        if ( !v108
          && (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          a4 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(a4);
          LOBYTE(v116) = 13;
          v68 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v69 = Outpop::Utility::Logger::get_log_buffer(v68);
          v70 = sub_10007400(0xFFFFu, v69, L"\n%s", L"LOG_ERROR");
          v95 = GetLastError();
          v90 = GetCurrentThreadId();
          v86 = GetCurrentProcessId();
          v71 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v82 = Outpop::Utility::Logger::make_tm(v71);
          v72 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v73 = Outpop::Utility::Logger::make_dt(v72);
          v74 = sub_10007400(
                  0xFFFF - v70,
                  &v69[v70],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v73,
                  v82,
                  v86,
                  v90,
                  v95,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                  176)
              + v70;
          v100 = ntohs(v6[12].S_un.S_un_w.s_w2);
          v75 = Outpop::IONetwork::INET_Addr::hash64(a3);
          sub_10007400(
            0xFFFF - v74,
            &v69[v74],
            L" Dgram_Acceptor::on_new_channel  insert tohash error   hash64  is  %lld,port is  %d",
            v75,
            v76,
            v100);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v69);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v77 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v77);
          }
          LOBYTE(v116) = 10;
          Outpop::Utility::Lock::unlock(a4);
          v63 = v104;
          v16 = (Outpop::Utility::Ref_Object *)a2;
        }
        LOBYTE(v116) = 2;
        v105 = -1;
        Outpop::Utility::Thread_Mutex::release(v63);
        (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, int))(*(_DWORD *)v16 + 28))(v16, this);
        if ( *(_DWORD *)(this + 232) )
        {
          a3 = (Outpop::IONetwork::INET_Addr *)this;
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
          LOBYTE(v116) = 14;
          a2 = (struct in_addr *)v16;
          Outpop::Utility::Ref_Object::addref(v16);
          LOBYTE(v116) = 15;
          (*(void (__thiscall **)(_DWORD, struct in_addr **, Outpop::Utility::Ref_Object **, Outpop::IONetwork::INET_Addr **))(**(_DWORD **)(this + 232) + 4))(
            *(_DWORD *)(this + 232),
            &a2,
            &a5,
            &a3);
          LOBYTE(v116) = 14;
          v78 = Outpop::Utility::Ref_Object::release;
          if ( a2 )
            Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a2);
          LOBYTE(v116) = 2;
          if ( a3 )
            Outpop::Utility::Ref_Object::release(a3);
        }
        else
        {
          v78 = Outpop::Utility::Ref_Object::release;
        }
        LOBYTE(v116) = 0;
        v78(v16);
        v116 = -1;
        if ( a5 )
          v78(a5);
      }
      else
      {
        LOBYTE(v116) = 0;
        if ( v16 )
          Outpop::Utility::Ref_Object::release(v16);
        v116 = -1;
        if ( a5 )
          Outpop::Utility::Ref_Object::release(a5);
      }
      return;
    }
  }
  LOBYTE(v116) = 0;
  if ( v16 )
    Outpop::Utility::Ref_Object::release(v16);
  v116 = -1;
  if ( a5 )
    Outpop::Utility::Ref_Object::release(a5);
}
