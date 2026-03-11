/*
 * func-name: ?handle_read_stream@Dgram_Acceptor@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x10027c50
 * callers: 0x1002b740
 * callees: 0x10002e10, 0x100037d0, 0x10003850, 0x10003890, 0x10005b30, 0x10005b50, 0x10007400, 0x10008ca0, 0x10008d20, 0x10018600, 0x10027810, 0x10029c80, 0x1002a530, 0x1002ab40, 0x1002ad90, 0x1002b5c0, 0x1002b630, 0x1002bba0, 0x1002f880, 0x10032020, 0x10032220, 0x10035ee0, 0x1003be30, 0x1003fdd0, 0x1004a7f0, 0x1004e861, 0x1004e98e
 */

void __thiscall Outpop::IONetwork::Dgram_Acceptor::handle_read_stream(
        volatile LONG *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  Outpop::IONetwork::INET_Addr *v3; // ebx
  wchar_t *v4; // edx
  Outpop::Utility::Thread_Mutex *v5; // ecx
  Outpop::Utility::Lock *v6; // esi
  Outpop::Utility::Logger *v7; // eax
  wchar_t *v8; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *v12; // eax
  int v13; // esi
  char *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  Outpop::Utility::Thread_Mutex *v16; // esi
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // edi
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // esi
  char *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  Outpop::Utility::Lock *v26; // eax
  Outpop::Utility::Lock *v27; // edi
  struct Outpop::IONetwork::Asynch_IO_Result *v28; // edx
  int v29; // eax
  Outpop::Utility::Lock *v30; // eax
  int v31; // edx
  int v32; // eax
  Outpop::Utility::Logger *v33; // eax
  wchar_t *log_buffer; // edi
  int v35; // esi
  Outpop::Utility::Logger *v36; // eax
  Outpop::Utility::Logger *v37; // eax
  wchar_t *dt; // eax
  int v39; // esi
  u_short v40; // ax
  char *host_addr; // eax
  Outpop::Utility::Logger *v42; // eax
  Outpop::Utility::Logger *v43; // eax
  wchar_t *v44; // edi
  int v45; // esi
  Outpop::Utility::Logger *v46; // eax
  Outpop::Utility::Logger *v47; // eax
  wchar_t *v48; // eax
  int v49; // eax
  Outpop::Utility::Logger *v50; // eax
  int v51; // [esp-24h] [ebp-74h] BYREF
  int v52; // [esp-20h] [ebp-70h]
  wchar_t *tm; // [esp-1Ch] [ebp-6Ch]
  wchar_t *CurrentProcessId; // [esp-18h] [ebp-68h]
  DWORD CurrentThreadId; // [esp-14h] [ebp-64h]
  DWORD LastError; // [esp-10h] [ebp-60h]
  DWORD v57; // [esp-Ch] [ebp-5Ch]
  wchar_t *v58; // [esp-8h] [ebp-58h]
  wchar_t *v59; // [esp-4h] [ebp-54h]
  int v60; // [esp+0h] [ebp-50h] BYREF
  char v61[4]; // [esp+14h] [ebp-3Ch] BYREF
  _DWORD v62[2]; // [esp+18h] [ebp-38h] BYREF
  _BYTE v63[8]; // [esp+20h] [ebp-30h] BYREF
  _DWORD v64[2]; // [esp+28h] [ebp-28h] BYREF
  _BYTE v65[8]; // [esp+30h] [ebp-20h] BYREF
  int v66; // [esp+38h] [ebp-18h] BYREF
  wchar_t *v67; // [esp+3Ch] [ebp-14h]
  int *v68; // [esp+40h] [ebp-10h]
  int v69; // [esp+4Ch] [ebp-4h]
  int v70; // [esp+50h] [ebp+0h] BYREF
  struct Outpop::IONetwork::Asynch_IO_Result *v71; // [esp+54h] [ebp+4h]
  Outpop::Utility::Lock *v72; // [esp+58h] [ebp+8h] BYREF
  Outpop::Utility::Thread_Mutex *v73; // [esp+5Ch] [ebp+Ch] BYREF
  int v74; // [esp+60h] [ebp+10h]
  Outpop::Utility::Ref_Object *v75; // [esp+64h] [ebp+14h] BYREF
  bool v76; // [esp+6Bh] [ebp+1Bh]
  volatile LONG *v77; // [esp+6Ch] [ebp+1Ch]
  Outpop::Utility::Lock *v78; // [esp+70h] [ebp+20h] BYREF
  _DWORD v79[16]; // [esp+74h] [ebp+24h] BYREF

  v68 = &v60;
  v77 = this;
  v71 = a2;
  v69 = 0;
  InterlockedDecrement(this + 60);
  Outpop::IONetwork::Dgram_Acceptor::PostAccept((Outpop::IONetwork::Dgram_Acceptor *)this, 0xFFDCu);
  if ( *((_DWORD *)a2 + 12) && *((_DWORD *)a2 + 6) )
  {
    sub_1002B5C0(a2, &v75);
    LOBYTE(v69) = 2;
    Outpop::Utility::Stream_Base::move_write_pos(v75, *((_DWORD *)a2 + 6));
    v76 = *Outpop::Utility::Stream_Base::get_read_ptr(v75) < 0;
    v3 = (struct Outpop::IONetwork::Asynch_IO_Result *)((char *)a2 + 60);
    v66 = Outpop::IONetwork::INET_Addr::hash64((struct Outpop::IONetwork::Asynch_IO_Result *)((char *)a2 + 60));
    v67 = v4;
    v5 = (Outpop::Utility::Thread_Mutex *)(this + 46);
    if ( !v76 )
    {
      v77 = this + 46;
      Outpop::Utility::Thread_Mutex::acquire(v5);
      sub_1002BBA0(v62, &v66);
      v64[1] = *((_DWORD *)this + 64);
      v64[0] = this + 63;
      if ( !(unsigned __int8)sub_1004A7F0() )
      {
        Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)v77);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v78 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v78);
          LOBYTE(v69) = 21;
          v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v33);
          v35 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = (wchar_t *)GetCurrentProcessId();
          v36 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v36);
          v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v37);
          v39 = sub_10007400(
                  0xFFFF - v35,
                  &log_buffer[v35],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                  333)
              + v35;
          v40 = ntohs(*((_WORD *)v71 + 37));
          v58 = v67;
          v57 = v66;
          LastError = v40;
          CurrentThreadId = Outpop::IONetwork::INET_Addr::get_ip_address(v3);
          host_addr = Outpop::IONetwork::INET_Addr::get_host_addr((struct in_addr *)v3);
          sub_10007400(
            0xFFFF - v39,
            &log_buffer[v39],
            L"Dgram handle_read_stream  packet is not  find  match channel.ip is:%S,ip  num  is:%d, port is %d,addrindex  is  %lld",
            host_addr,
            CurrentThreadId,
            LastError,
            v57,
            v58);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v58 = log_buffer;
            v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v42);
          }
          LOBYTE(v69) = 2;
          Outpop::Utility::Lock::unlock(v78);
        }
        goto LABEL_65;
      }
      v6 = *(Outpop::Utility::Lock **)(sub_10035EE0() + 8);
      v78 = v6;
      if ( v6 )
        Outpop::Utility::Ref_Object::addref(v6);
      LOBYTE(v69) = 20;
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)v77);
      Outpop::IONetwork::Dgram_Channel::handle_read_stream(v6, v71);
      LOBYTE(v69) = 2;
      if ( !v6 )
      {
LABEL_65:
        LOBYTE(v69) = 0;
        if ( v75 )
          Outpop::Utility::Ref_Object::release(v75);
        v69 = -1;
        return;
      }
LABEL_19:
      Outpop::Utility::Ref_Object::release(v6);
      goto LABEL_65;
    }
    Outpop::Utility::Thread_Mutex::acquire(v5);
    sub_1002BBA0(v64, &v66);
    v74 = *((_DWORD *)this + 64);
    v73 = (Outpop::Utility::Thread_Mutex *)(this + 63);
    if ( (unsigned __int8)sub_1004A7F0() )
    {
      v6 = *(Outpop::Utility::Lock **)(sub_10035EE0() + 8);
      v78 = v6;
      if ( v6 )
        Outpop::Utility::Ref_Object::addref(v6);
      LOBYTE(v69) = 3;
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(v77 + 46));
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v72 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v72);
        LOBYTE(v69) = 4;
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v8 = Outpop::Utility::Logger::get_log_buffer(v7);
        v9 = sub_10007400(0xFFFFu, v8, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = (wchar_t *)GetCurrentProcessId();
        v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v10);
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v12 = Outpop::Utility::Logger::make_dt(v11);
        v13 = sub_10007400(
                0xFFFF - v9,
                &v8[v9],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v12,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                269)
            + v9;
        v58 = (wchar_t *)ntohs(*((_WORD *)v71 + 37));
        v14 = Outpop::IONetwork::INET_Addr::get_host_addr((struct in_addr *)v3);
        sub_10007400(
          0xFFFF - v13,
          &v8[v13],
          L"Dgram_Acceptor::handle_read_stream  channel  receive  system  packet in channel_hash_map  hash64 is %lld,ip is  %S,port is %d",
          v66,
          v67,
          v14,
          v58);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v8);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v58 = v8;
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v15);
        }
        LOBYTE(v69) = 3;
        Outpop::Utility::Lock::unlock(v72);
        v6 = v78;
      }
      if ( (int)Outpop::IONetwork::Dgram_Channel::get_login_stream_packet_count(v6) < 3 )
      {
        Outpop::IONetwork::Dgram_Channel::send_login_in_packet(v6);
      }
      else
      {
        Outpop::IONetwork::Dgram_Acceptor::erase_channel_from_map((Outpop::IONetwork::Dgram_Acceptor *)v77, v3);
        (*(void (__thiscall **)(Outpop::Utility::Lock *, wchar_t *))(*(_DWORD *)v6 + 24))(v6, v58);
      }
      LOBYTE(v69) = 2;
      if ( !v6 )
        goto LABEL_65;
      goto LABEL_19;
    }
    v16 = (Outpop::Utility::Thread_Mutex *)v77;
    Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)(v77 + 46));
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v78 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v78);
      LOBYTE(v69) = 5;
      v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v18 = Outpop::Utility::Logger::get_log_buffer(v17);
      v19 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = (wchar_t *)GetCurrentProcessId();
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
              LastError,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
              286)
          + v19;
      v58 = (wchar_t *)ntohs(*((_WORD *)v71 + 37));
      v24 = Outpop::IONetwork::INET_Addr::get_host_addr((struct in_addr *)v3);
      sub_10007400(
        0xFFFF - v23,
        &v18[v23],
        L"Dgram_Acceptor::handle_read_stream  channel   receive  system  packet hash64 is %lld,ip is  %S,port is %d",
        v66,
        v67,
        v24,
        v58);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v18);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v58 = v18;
        v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v25);
      }
      LOBYTE(v69) = 2;
      Outpop::Utility::Lock::unlock(v78);
      v16 = (Outpop::Utility::Thread_Mutex *)v77;
    }
    v78 = (Outpop::Utility::Lock *)&v51;
    if ( *((_BYTE *)v16 + 88) )
    {
      Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)&v51, v3);
      LOBYTE(v69) = 2;
      Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet(
        v79,
        -1,
        (Outpop::Utility::Thread_Mutex *)((char *)v16 + 156),
        v51,
        v52,
        (int)tm,
        (int)CurrentProcessId,
        CurrentThreadId,
        LastError,
        v57);
      LOBYTE(v69) = 7;
      v26 = (Outpop::Utility::Lock *)operator new(68);
      v78 = v26;
      LOBYTE(v69) = 8;
      if ( v26 )
        v27 = (Outpop::Utility::Lock *)Outpop::IONetwork::Dgram_Accept_Bluider_Process::Dgram_Accept_Bluider_Process(
                                         v26,
                                         v3,
                                         (struct Outpop::IONetwork::Dgram_Acceptor *)v77);
      else
        v27 = 0;
      LOBYTE(v69) = 7;
      v78 = v27;
      if ( v27 )
        Outpop::Utility::Ref_Object::addref(v27);
      LOBYTE(v69) = 9;
      sub_10005B30((Outpop::Utility::Thread_Mutex *)(v77 + 52), &v73);
      LOBYTE(v69) = 10;
      if ( v74 != -1 )
      {
        v70 = Outpop::IONetwork::INET_Addr::hash64(v3);
        v71 = v28;
        v29 = sub_1002B630(v65, &v70, &v78);
        LOBYTE(v69) = 11;
        sub_1003BE30(v63, v29);
        LOBYTE(v69) = 12;
        sub_1002A530(v77 + 72, v61, v63);
        LOBYTE(v69) = 11;
        sub_10018600((int)v63);
        LOBYTE(v69) = 10;
        sub_10018600((int)v65);
        LOBYTE(v69) = 9;
        sub_10005B50((int)&v73);
        (*(void (__thiscall **)(Outpop::Utility::Lock *, Outpop::Utility::Ref_Object **, wchar_t *))(*(_DWORD *)v27 + 4))(
          v27,
          &v75,
          v58);
        LOBYTE(v69) = 7;
        Outpop::Utility::Ref_Object::release(v27);
        LOBYTE(v69) = 2;
        Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)v79);
        goto LABEL_65;
      }
      LOBYTE(v69) = 9;
      sub_10005B50((int)&v73);
      LOBYTE(v69) = 7;
    }
    else
    {
      Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)&v51, v3);
      LOBYTE(v69) = 2;
      Outpop::IONetwork::Bluid_Pakcet::Bluid_Pakcet(
        v79,
        -1,
        (Outpop::Utility::Thread_Mutex *)((char *)v16 + 156),
        v51,
        v52,
        (int)tm,
        (int)CurrentProcessId,
        CurrentThreadId,
        LastError,
        v57);
      LOBYTE(v69) = 14;
      v30 = (Outpop::Utility::Lock *)operator new(108);
      v78 = v30;
      LOBYTE(v69) = 15;
      if ( v30 )
        v27 = (Outpop::Utility::Lock *)sub_1002AB40(v30, v79, v16);
      else
        v27 = 0;
      LOBYTE(v69) = 14;
      v72 = v27;
      if ( v27 )
        Outpop::Utility::Ref_Object::addref(v27);
      LOBYTE(v69) = 16;
      sub_10005B30((Outpop::Utility::Thread_Mutex *)(v77 + 52), &v73);
      LOBYTE(v69) = 17;
      if ( v74 != -1 )
      {
        v62[0] = Outpop::IONetwork::INET_Addr::hash64(v3);
        v62[1] = v31;
        v32 = sub_1002B630(v65, v62, &v72);
        LOBYTE(v69) = 18;
        sub_1003BE30(v63, v32);
        LOBYTE(v69) = 19;
        sub_1002A530(v77 + 82, v61, v63);
        LOBYTE(v69) = 18;
        sub_10018600((int)v63);
        LOBYTE(v69) = 17;
        sub_10018600((int)v65);
        LOBYTE(v69) = 16;
        sub_10005B50((int)&v73);
        sub_1002AD90(v58, v59);
        LOBYTE(v69) = 14;
        if ( v27 )
          Outpop::Utility::Ref_Object::release(v27);
        LOBYTE(v69) = 2;
        Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)v79);
        goto LABEL_65;
      }
      LOBYTE(v69) = 16;
      sub_10005B50((int)&v73);
      LOBYTE(v69) = 14;
    }
    if ( v27 )
      Outpop::Utility::Ref_Object::release(v27);
    LOBYTE(v69) = 2;
    Outpop::IONetwork::Bluid_Pakcet::~Bluid_Pakcet((Outpop::IONetwork::Bluid_Pakcet *)v79);
    LOBYTE(v69) = 0;
    if ( v75 )
      Outpop::Utility::Ref_Object::release(v75);
  }
  else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
         && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v78 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v78);
    LOBYTE(v69) = 1;
    v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v44 = Outpop::Utility::Logger::get_log_buffer(v43);
    v45 = sub_10007400(0xFFFFu, v44, L"\n%s", L"LOG_ERROR");
    v57 = GetLastError();
    LastError = GetCurrentThreadId();
    CurrentThreadId = GetCurrentProcessId();
    v46 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    CurrentProcessId = Outpop::Utility::Logger::make_tm(v46);
    v47 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v48 = Outpop::Utility::Logger::make_dt(v47);
    v49 = sub_10007400(
            0xFFFF - v45,
            &v44[v45],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v48,
            CurrentProcessId,
            CurrentThreadId,
            LastError,
            v57,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            245);
    sub_10007400(
      0xFFFF - (v49 + v45),
      &v44[v49 + v45],
      L"GXH ERROR Dgram_Acceptor::handle_read_stream(Asynch_IO_Result*  io_result),error code is:%d",
      *((_DWORD *)a2 + 13));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v44);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v59 = v44;
      v50 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v50);
    }
    LOBYTE(v69) = 0;
    Outpop::Utility::Lock::unlock(v78);
  }
}
