/*
 * func-name: ?check_bliued_login_time@Dgram_Connector@IONetwork@Outpop@@QAEXXZ
 * func-address: 0x100390a0
 * callers: 0x100389d0, 0x1003b890
 * callees: 0x10007400, 0x10016370, 0x100169a0, 0x10032250, 0x1003a130, 0x1003b200, 0x1003b530, 0x1003b8c0, 0x1003ba70, 0x10041d10
 */

void __thiscall Outpop::IONetwork::Dgram_Connector::check_bliued_login_time(Outpop::Utility::Lock ***this)
{
  Outpop::IONetwork::Dgram_Connector *v1; // edi
  bool v2; // al
  int *v3; // ebp
  _DWORD *v4; // ebx
  int *v5; // esi
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // esi
  Outpop::Utility::Logger *v13; // eax
  char **v14; // eax
  _DWORD **v15; // esi
  void (__cdecl *v16)(); // ebx
  _DWORD **v17; // ebp
  Outpop::Utility::Ref_Object **connect_stream; // ebp
  bool v19; // al
  Outpop::Utility::Lock *v20; // ebp
  Outpop::Utility::Ref_Object *v21; // edi
  Outpop::Utility::Ref_Object *v22; // esi
  Outpop::Utility::Lock *v23; // ebx
  Outpop::Utility::Lock *v24; // ebx
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // edi
  int v27; // esi
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // eax
  int v31; // esi
  Outpop::Utility::Logger *v32; // eax
  Outpop::Utility::Lock **v33; // eax
  int *v34; // esi
  void (__cdecl *v35)(); // ebx
  int *v36; // ebp
  int v37; // ebp
  Outpop::IONetwork::INET_Addr *v38; // eax
  Outpop::IONetwork::Dgram_Connector *v39; // esi
  bool v40; // al
  int *v41; // edi
  Outpop::Utility::Lock *v42; // ebp
  int *v43; // ebx
  Outpop::Utility::Time_Value *last_receive_stream_time; // eax
  int v45; // eax
  bool v46; // bl
  Outpop::Utility::Ref_Object *v47; // esi
  Outpop::Utility::Lock *v48; // ebp
  Outpop::Utility::Logger *v49; // eax
  wchar_t *v50; // edi
  Outpop::Utility::Logger *v51; // eax
  Outpop::Utility::Logger *v52; // eax
  wchar_t *v53; // eax
  int v54; // ebx
  u_short v55; // ax
  char *v56; // eax
  Outpop::Utility::Logger *v57; // eax
  Outpop::Utility::Lock **v58; // eax
  void (__thiscall *v59)(Outpop::Utility::Ref_Object *); // eax
  wchar_t *tm; // [esp-18h] [ebp-FCh]
  wchar_t *v61; // [esp-18h] [ebp-FCh]
  DWORD CurrentProcessId; // [esp-14h] [ebp-F8h]
  DWORD v63; // [esp-14h] [ebp-F8h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-F4h]
  DWORD v65; // [esp-10h] [ebp-F4h]
  DWORD LastError; // [esp-Ch] [ebp-F0h]
  DWORD v67; // [esp-Ch] [ebp-F0h]
  wchar_t *v68; // [esp-4h] [ebp-E8h]
  struct in_addr v69; // [esp-4h] [ebp-E8h]
  int v70; // [esp+0h] [ebp-E4h]
  int v71; // [esp+4h] [ebp-E0h]
  Outpop::Utility::Ref_Object *v73; // [esp+18h] [ebp-CCh] BYREF
  Outpop::Utility::Lock ***v74; // [esp+1Ch] [ebp-C8h] BYREF
  Outpop::Utility::Lock *v75; // [esp+20h] [ebp-C4h]
  int *v76; // [esp+24h] [ebp-C0h]
  Outpop::Utility::Lock *v77; // [esp+28h] [ebp-BCh]
  _BYTE v78[8]; // [esp+2Ch] [ebp-B8h] BYREF
  Outpop::Utility::Ref_Object *v79; // [esp+34h] [ebp-B0h] BYREF
  Outpop::Utility::Lock *v80; // [esp+38h] [ebp-ACh]
  _DWORD **v81; // [esp+44h] [ebp-A0h]
  unsigned int v82; // [esp+48h] [ebp-9Ch]
  int v83; // [esp+4Ch] [ebp-98h]
  int *v84; // [esp+54h] [ebp-90h]
  unsigned int v85; // [esp+58h] [ebp-8Ch]
  int v86; // [esp+5Ch] [ebp-88h]
  Outpop::Utility::Ref_Object *v87; // [esp+60h] [ebp-84h] BYREF
  Outpop::Utility::Thread_Mutex *v88; // [esp+64h] [ebp-80h]
  int v89; // [esp+68h] [ebp-7Ch]
  Outpop::Utility::Thread_Mutex *v90; // [esp+6Ch] [ebp-78h]
  int v91; // [esp+70h] [ebp-74h]
  Outpop::Utility::Thread_Mutex *v92; // [esp+74h] [ebp-70h]
  int v93; // [esp+78h] [ebp-6Ch]
  char *v94; // [esp+7Ch] [ebp-68h]
  int v95; // [esp+88h] [ebp-5Ch]
  int v96; // [esp+8Ch] [ebp-58h]
  int v97; // [esp+90h] [ebp-54h]
  _BYTE v98[8]; // [esp+94h] [ebp-50h] BYREF
  Outpop::Utility::Ref_Object *v99; // [esp+9Ch] [ebp-48h]
  char v100[8]; // [esp+A0h] [ebp-44h] BYREF
  int v101; // [esp+A8h] [ebp-3Ch] BYREF
  char v102[8]; // [esp+B0h] [ebp-34h] BYREF
  void **v103; // [esp+B8h] [ebp-2Ch] BYREF
  int v104; // [esp+E0h] [ebp-4h]

  v1 = (Outpop::IONetwork::Dgram_Connector *)this;
  Outpop::Utility::Time_Value::gettimeofday(v78);
  v104 = 0;
  if ( *((_BYTE *)v1 + 84) )
  {
    v81 = 0;
    v82 = 0;
    v83 = 0;
    LOBYTE(v104) = 1;
    v88 = (Outpop::IONetwork::Dgram_Connector *)((char *)v1 + 232);
    v89 = 0;
    v2 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)v1 + 232));
    v89 = v2 - 1;
    LOBYTE(v104) = 2;
    if ( v2 )
    {
      v3 = (int *)**((_DWORD **)v1 + 66);
      v4 = (_DWORD *)((char *)v1 + 260);
      v94 = (char *)v1 + 260;
      while ( 1 )
      {
        v5 = (int *)*((_DWORD *)v1 + 66);
        if ( !v4 || v4 != (_DWORD *)((char *)v1 + 260) )
          invalid_parameter_noinfo();
        if ( v3 == v5 )
          break;
        if ( !v4 )
          invalid_parameter_noinfo();
        if ( v3 == (int *)v4[1] )
          invalid_parameter_noinfo();
        if ( *(int *)(v3[4] + 56) <= 3 )
        {
          if ( v3 == (int *)v4[1] )
            invalid_parameter_noinfo();
          v74 = (Outpop::Utility::Lock ***)Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(v3[4] + 60));
          if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v78) - (int)v74 > 5 )
          {
            if ( v3 == (int *)v4[1] )
              invalid_parameter_noinfo();
            Outpop::IONetwork::Dgram_Connect_Bluider_Process::resend_stream((Outpop::IONetwork::Dgram_Connect_Bluider_Process *)v3[4]);
          }
          if ( v3 == (int *)v4[1] )
            invalid_parameter_noinfo();
          v3 = (int *)*v3;
        }
        else
        {
          if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
             || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
            && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
          {
            v77 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
            Outpop::Utility::Lock::lock(v77);
            LOBYTE(v104) = 3;
            v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
            v8 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
            LastError = GetLastError();
            CurrentThreadId = GetCurrentThreadId();
            CurrentProcessId = GetCurrentProcessId();
            v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            tm = Outpop::Utility::Logger::make_tm(v9);
            v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            dt = Outpop::Utility::Logger::make_dt(v10);
            v12 = sub_10007400(
                    0xFFFF - v8,
                    &log_buffer[v8],
                    L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                    dt,
                    tm,
                    CurrentProcessId,
                    CurrentThreadId,
                    LastError,
                    L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
                    482)
                + v8;
            if ( v3 == (int *)v4[1] )
              invalid_parameter_noinfo();
            sub_10007400(
              0xFFFF - v12,
              &log_buffer[v12],
              L"Dgram_Connector  channel   login  get_resend_count  > 3,count is %d, remote_ip is %S, port is %d",
              *(_DWORD *)(v3[4] + 56));
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
              wprintf(L"%s", log_buffer);
            if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
            {
              v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
              Outpop::Utility::Logger::write_file(v13);
            }
            LOBYTE(v104) = 2;
            Outpop::Utility::Lock::unlock(v77);
          }
          if ( v3 == (int *)v4[1] )
            invalid_parameter_noinfo();
          sub_1003B8C0();
          v14 = (char **)sub_1003A130(&v101, v94, v3);
          v3 = (int *)v14[1];
          v1 = (Outpop::IONetwork::Dgram_Connector *)this;
          v94 = *v14;
          v4 = v94;
        }
      }
      v89 = -1;
      Outpop::Utility::Thread_Mutex::release(v88);
      v15 = v81;
      v16 = invalid_parameter_noinfo;
      if ( (unsigned int)v81 > v82 )
        invalid_parameter_noinfo();
      while ( 1 )
      {
        v17 = (_DWORD **)v82;
        if ( (unsigned int)v81 > v82 )
          v16();
        if ( v15 == v17 )
          break;
        if ( *((_DWORD *)v1 + 30) )
        {
          v87 = v1;
          Outpop::Utility::Ref_Object::addref(v1);
          LOBYTE(v104) = 4;
          if ( (unsigned int)v15 >= v82 )
            v16();
          connect_stream = Outpop::IONetwork::Dgram_Connect_Bluider_Process::get_connect_stream(*v15, &v79);
          LOBYTE(v104) = 5;
          if ( (unsigned int)v15 >= v82 )
            v16();
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD *, Outpop::Utility::Ref_Object **, Outpop::Utility::Ref_Object **))(**((_DWORD **)v1 + 30) + 8))(
            *((_DWORD *)v1 + 30),
            0,
            *v15 + 2,
            connect_stream,
            &v87);
          LOBYTE(v104) = 4;
          if ( v79 )
            Outpop::Utility::Ref_Object::release(v79);
          LOBYTE(v104) = 2;
          if ( v87 )
            Outpop::Utility::Ref_Object::release(v87);
          v16 = invalid_parameter_noinfo;
        }
        if ( (unsigned int)v15 >= v82 )
          v16();
        ++v15;
      }
      LOBYTE(v104) = 0;
      sub_1003BA70();
      goto LABEL_107;
    }
LABEL_137:
    LOBYTE(v104) = 0;
    sub_1003BA70();
    goto LABEL_138;
  }
  v84 = 0;
  v85 = 0;
  v86 = 0;
  LOBYTE(v104) = 6;
  v92 = (Outpop::IONetwork::Dgram_Connector *)((char *)v1 + 232);
  v93 = 0;
  v19 = Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)v1 + 232));
  v93 = v19 - 1;
  LOBYTE(v104) = 7;
  if ( !v19 )
    goto LABEL_137;
  v20 = *this[86];
  v21 = (Outpop::Utility::Ref_Object *)(this + 85);
  v22 = (Outpop::Utility::Ref_Object *)(this + 85);
  v79 = (Outpop::Utility::Ref_Object *)(this + 85);
  v80 = (Outpop::Utility::Lock *)(this + 85);
  while ( 1 )
  {
    v23 = (Outpop::Utility::Lock *)*((_DWORD *)v21 + 1);
    if ( !v22 || v22 != v21 )
      invalid_parameter_noinfo();
    if ( v20 == v23 )
      break;
    if ( !v22 )
      invalid_parameter_noinfo();
    if ( v20 == *((Outpop::Utility::Lock **)v22 + 1) )
      invalid_parameter_noinfo();
    if ( *(__int16 *)(*((_DWORD *)v20 + 4) + 92) <= 3 )
    {
      if ( v20 == *((Outpop::Utility::Lock **)v22 + 1) )
        invalid_parameter_noinfo();
      v77 = (Outpop::Utility::Lock *)Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)(*((_DWORD *)v20 + 4) + 96));
      if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v78) - (int)v77 > 5 )
      {
        if ( v20 == *((Outpop::Utility::Lock **)v22 + 1) )
          invalid_parameter_noinfo();
        sub_1003B200(v70, v71);
      }
      if ( v20 == *((Outpop::Utility::Lock **)v22 + 1) )
        invalid_parameter_noinfo();
      v20 = *(Outpop::Utility::Lock **)v20;
    }
    else
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v24 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        v75 = v24;
        Outpop::Utility::Lock::lock(v24);
        LOBYTE(v104) = 8;
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v26 = Outpop::Utility::Logger::get_log_buffer(v25);
        v27 = sub_10007400(0xFFFFu, v26, L"\n%s", L"LOG_DEBUG");
        v67 = GetLastError();
        v65 = GetCurrentThreadId();
        v63 = GetCurrentProcessId();
        v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v61 = Outpop::Utility::Logger::make_tm(v28);
        v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v30 = Outpop::Utility::Logger::make_dt(v29);
        v31 = sub_10007400(
                0xFFFF - v27,
                &v26[v27],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v30,
                v61,
                v63,
                v65,
                v67,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
                516)
            + v27;
        if ( v20 == *((Outpop::Utility::Lock **)v80 + 1) )
          invalid_parameter_noinfo();
        sub_10007400(
          0xFFFF - v31,
          &v26[v31],
          L"Dgram_Connector  channel   login  get_resend_count  > 3,count is %d",
          *(__int16 *)(*((_DWORD *)v20 + 4) + 92));
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v26);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v32);
        }
        LOBYTE(v104) = 7;
        Outpop::Utility::Lock::unlock(v24);
        v22 = v80;
      }
      if ( v20 == *((Outpop::Utility::Lock **)v22 + 1) )
        invalid_parameter_noinfo();
      sub_1003B8C0();
      v33 = (Outpop::Utility::Lock **)sub_1003A130(v100, v80, v20);
      v20 = v33[1];
      v21 = v79;
      v80 = *v33;
      v22 = v80;
    }
  }
  v93 = -1;
  Outpop::Utility::Thread_Mutex::release(v92);
  v34 = v84;
  v35 = invalid_parameter_noinfo;
  if ( (unsigned int)v84 > v85 )
    invalid_parameter_noinfo();
  while ( 1 )
  {
    v36 = (int *)v85;
    if ( (unsigned int)v84 > v85 )
      v35();
    if ( v34 == v36 )
      break;
    if ( this[30] )
    {
      v74 = this;
      Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)this);
      LOBYTE(v104) = 9;
      if ( (unsigned int)v34 >= v85 )
        v35();
      v37 = sub_1003B530(*v34, &v73);
      LOBYTE(v104) = 10;
      if ( (unsigned int)v34 >= v85 )
        v35();
      v38 = sub_10016370(*v34, (Outpop::IONetwork::INET_Addr *)&v103);
      LOBYTE(v104) = 11;
      (*((void (__thiscall **)(Outpop::Utility::Lock **, _DWORD, Outpop::IONetwork::INET_Addr *, int, Outpop::Utility::Lock ****))*this[30]
       + 2))(
        this[30],
        0,
        v38,
        v37,
        &v74);
      v103 = &Outpop::IONetwork::Addr::`vftable';
      LOBYTE(v104) = 9;
      if ( v73 )
        Outpop::Utility::Ref_Object::release(v73);
      LOBYTE(v104) = 7;
      if ( v74 )
        Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v74);
      v35 = invalid_parameter_noinfo;
    }
    if ( (unsigned int)v34 >= v85 )
      v35();
    ++v34;
  }
  LOBYTE(v104) = 0;
  sub_1003BA70();
LABEL_107:
  v95 = 0;
  v96 = 0;
  v97 = 0;
  LOBYTE(v104) = 13;
  v39 = (Outpop::IONetwork::Dgram_Connector *)this;
  v90 = (Outpop::Utility::Thread_Mutex *)(this + 52);
  v91 = 0;
  v40 = Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 52));
  v91 = v40 - 1;
  LOBYTE(v104) = 14;
  if ( !v40 )
  {
    LOBYTE(v104) = 0;
    sub_1003BA70();
LABEL_138:
    v104 = -1;
    goto LABEL_139;
  }
  v41 = (int *)*this[76];
  v42 = (Outpop::Utility::Lock *)(this + 75);
  v75 = (Outpop::Utility::Lock *)(this + 75);
LABEL_109:
  v76 = v41;
  while ( 1 )
  {
    v43 = (int *)*((_DWORD *)v39 + 76);
    if ( !v42 || v42 != (Outpop::IONetwork::Dgram_Connector *)((char *)v39 + 300) )
      invalid_parameter_noinfo();
    if ( v41 == v43 )
      break;
    if ( !v42 )
      invalid_parameter_noinfo();
    if ( v41 == *((int **)v42 + 1) )
      invalid_parameter_noinfo();
    last_receive_stream_time = Outpop::IONetwork::Dgram_Channel::get_last_receive_stream_time(
                                 (_DWORD *)v41[4],
                                 (Outpop::Utility::Time_Value *)v98);
    LOBYTE(v104) = 15;
    v73 = (Outpop::Utility::Ref_Object *)Outpop::Utility::Time_Value::sec(last_receive_stream_time);
    v45 = Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)v78);
    v46 = v45 - (int)v73 > *((_DWORD *)v39 + 12);
    LOBYTE(v104) = 14;
    Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v98);
    if ( !v46 )
    {
      if ( v41 == *((int **)v42 + 1) )
        invalid_parameter_noinfo();
      v41 = (int *)*v41;
      goto LABEL_109;
    }
    if ( v41 == *((int **)v42 + 1) )
      invalid_parameter_noinfo();
    v99 = (Outpop::Utility::Ref_Object *)v41[4];
    v47 = v99;
    if ( v99 )
      Outpop::Utility::Ref_Object::addref(v99);
    LOBYTE(v104) = 16;
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 141) == 1 )
    {
      v48 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      v80 = v48;
      Outpop::Utility::Lock::lock(v48);
      LOBYTE(v104) = 17;
      v49 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v50 = Outpop::Utility::Logger::get_log_buffer(v49);
      v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v68 = Outpop::Utility::Logger::make_tm(v51);
      v52 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v53 = Outpop::Utility::Logger::make_dt(v52);
      v54 = sub_10007400(0xFFFFu, v50, L"\nLOGINFO %s:%s Message:", v53, v68);
      v55 = ntohs(*((_WORD *)v47 + 47));
      v69 = (struct in_addr)*((_DWORD *)v47 + 24);
      v73 = (Outpop::Utility::Ref_Object *)v55;
      v56 = inet_ntoa(v69);
      sub_10007400(
        0xFFFF - v54,
        &v50[v54],
        L"Dgram_Connector::check_channel_map_time_out  it->second->get_last_receive_stream_time().sec() > channel_keep_tim"
         "e_,ip is %S,port is  %d,channel_keep_alive is %d",
        v56,
        (unsigned __int16)v73,
        this[12]);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v50);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v57 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v57);
      }
      LOBYTE(v104) = 16;
      Outpop::Utility::Lock::unlock(v48);
      v41 = v76;
      v42 = v75;
    }
    v58 = (Outpop::Utility::Lock **)sub_1003A130(v102, v42, v41);
    v42 = *v58;
    v41 = (int *)v58[1];
    v59 = *(void (__thiscall **)(Outpop::Utility::Ref_Object *))(*(_DWORD *)v47 + 24);
    v75 = v42;
    v76 = v41;
    v59(v47);
    LOBYTE(v104) = 14;
    Outpop::Utility::Ref_Object::release(v47);
    v39 = (Outpop::IONetwork::Dgram_Connector *)this;
  }
  LOBYTE(v104) = 13;
  v91 = -1;
  Outpop::Utility::Thread_Mutex::release(v90);
  LOBYTE(v104) = 0;
  sub_1003BA70();
  v104 = -1;
LABEL_139:
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)v78);
}
