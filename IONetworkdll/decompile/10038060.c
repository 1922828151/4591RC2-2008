/*
 * func-name: ?handle_read_stream@Dgram_Connector@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x10038060
 * callers: 0x1003b710
 * callees: 0x100037d0, 0x10003890, 0x10007400, 0x1002b5c0, 0x1002bba0, 0x1002bf60, 0x1002f880, 0x10035ee0, 0x10038d30, 0x1003a5b0, 0x1004a7f0
 */

void __thiscall Outpop::IONetwork::Dgram_Connector::handle_read_stream(
        volatile LONG *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  int v4; // edx
  Outpop::Utility::Thread_Mutex *v5; // ecx
  int v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *log_buffer; // edi
  int v9; // esi
  Outpop::Utility::Logger *v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *dt; // eax
  int v13; // esi
  u_short v14; // ax
  Outpop::Utility::Logger *v15; // eax
  int v16; // esi
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Logger *v18; // eax
  wchar_t *v19; // eax
  int v20; // esi
  u_short v21; // ax
  Outpop::Utility::Logger *v22; // eax
  int v23; // esi
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // eax
  int v27; // esi
  char *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  struct in_addr *v30; // esi
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // edi
  int v33; // esi
  Outpop::Utility::Logger *v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *v36; // eax
  int v37; // eax
  Outpop::Utility::Logger *v38; // eax
  wchar_t *tm; // [esp-1Ch] [ebp-68h]
  wchar_t *v40; // [esp-1Ch] [ebp-68h]
  wchar_t *v41; // [esp-1Ch] [ebp-68h]
  DWORD CurrentProcessId; // [esp-18h] [ebp-64h]
  DWORD v43; // [esp-18h] [ebp-64h]
  DWORD v44; // [esp-18h] [ebp-64h]
  wchar_t *v45; // [esp-18h] [ebp-64h]
  DWORD CurrentThreadId; // [esp-14h] [ebp-60h]
  char *host_addr; // [esp-14h] [ebp-60h]
  DWORD v48; // [esp-14h] [ebp-60h]
  char *v49; // [esp-14h] [ebp-60h]
  DWORD v50; // [esp-14h] [ebp-60h]
  DWORD v51; // [esp-14h] [ebp-60h]
  DWORD LastError; // [esp-10h] [ebp-5Ch]
  int v53; // [esp-10h] [ebp-5Ch]
  DWORD v54; // [esp-10h] [ebp-5Ch]
  int v55; // [esp-10h] [ebp-5Ch]
  DWORD v56; // [esp-10h] [ebp-5Ch]
  DWORD v57; // [esp-10h] [ebp-5Ch]
  int v58; // [esp-Ch] [ebp-58h]
  int v59; // [esp-Ch] [ebp-58h]
  DWORD v60; // [esp-Ch] [ebp-58h]
  int v61; // [esp-8h] [ebp-54h]
  int v62; // [esp-8h] [ebp-54h]
  int v63; // [esp-8h] [ebp-54h]
  int v64; // [esp-4h] [ebp-50h]
  int v65; // [esp+0h] [ebp-4Ch] BYREF
  _DWORD v66[2]; // [esp+10h] [ebp-3Ch] BYREF
  _DWORD v67[4]; // [esp+18h] [ebp-34h] BYREF
  int v68; // [esp+28h] [ebp-24h] BYREF
  int v69; // [esp+2Ch] [ebp-20h]
  struct in_addr *v70; // [esp+34h] [ebp-18h]
  Outpop::Utility::Ref_Object *v71[2]; // [esp+38h] [ebp-14h] BYREF
  int v72; // [esp+48h] [ebp-4h]
  Outpop::Utility::Thread_Mutex *v73; // [esp+54h] [ebp+8h]
  Outpop::Utility::Lock *v74; // [esp+54h] [ebp+8h]
  Outpop::Utility::Thread_Mutex *v75; // [esp+54h] [ebp+8h]
  Outpop::Utility::Lock *v76; // [esp+54h] [ebp+8h]
  bool v77; // [esp+57h] [ebp+Bh]

  v71[1] = (Outpop::Utility::Ref_Object *)&v65;
  v72 = 0;
  InterlockedDecrement(this + 95);
  Outpop::IONetwork::Dgram_Connector::asynch_receive((Outpop::IONetwork::Dgram_Connector *)this, 0);
  if ( *((_DWORD *)a2 + 12) && *((_DWORD *)a2 + 6) )
  {
    sub_1002B5C0((int)a2, v71);
    LOBYTE(v72) = 2;
    Outpop::Utility::Stream_Base::move_write_pos(v71[0], *((_DWORD *)a2 + 6));
    v77 = *Outpop::Utility::Stream_Base::get_read_ptr(v71[0]) < 0;
    v70 = (struct in_addr *)((char *)a2 + 60);
    v68 = Outpop::IONetwork::INET_Addr::hash64((struct Outpop::IONetwork::Asynch_IO_Result *)((char *)a2 + 60));
    v69 = v4;
    if ( v77 )
    {
      v5 = (Outpop::Utility::Thread_Mutex *)(this + 58);
      v73 = (Outpop::Utility::Thread_Mutex *)(this + 58);
      if ( *((_BYTE *)this + 84) )
      {
        Outpop::Utility::Thread_Mutex::acquire(v5);
        sub_1002BBA0((_DWORD *)this + 64, v66, &v68);
        v67[3] = *((_DWORD *)this + 66);
        v67[2] = this + 65;
        if ( (unsigned __int8)sub_1004A7F0() )
        {
          Outpop::Utility::Thread_Mutex::release(v73);
          v6 = sub_10035EE0(v66);
          (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(**(_DWORD **)(v6 + 8) + 4))(
            *(_DWORD *)(v6 + 8),
            v71);
          goto LABEL_32;
        }
        Outpop::Utility::Thread_Mutex::release(v73);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
        {
          goto LABEL_32;
        }
        v74 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v74);
        LOBYTE(v72) = 3;
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
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
                340)
            + v9;
        v14 = ntohs(*((_WORD *)a2 + 37));
        v61 = v69;
        v58 = v68;
        v53 = v14;
        host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v70);
        sub_10007400(
          0xFFFF - v13,
          &log_buffer[v13],
          L"GXH ERROR Dgram_Connector::handle_read_stream  wait_channel_hash_map_ not found channel  ip is:%S,port is %d,a"
           "ddress_index is %lld",
          host_addr,
          v53,
          v58,
          v61);
      }
      else
      {
        Outpop::Utility::Thread_Mutex::acquire(v5);
        sub_1002BBA0((_DWORD *)this + 84, v66, &v68);
        v67[1] = *((_DWORD *)this + 86);
        v67[0] = this + 85;
        if ( (unsigned __int8)sub_1004A7F0() )
        {
          sub_10035EE0(v66);
          Outpop::Utility::Thread_Mutex::release(v73);
          sub_1003A5B0(v64, v65);
          goto LABEL_32;
        }
        Outpop::Utility::Thread_Mutex::release(v73);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
        {
          goto LABEL_32;
        }
        v74 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v74);
        LOBYTE(v72) = 4;
        v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v15);
        v16 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v54 = GetLastError();
        v48 = GetCurrentThreadId();
        v43 = GetCurrentProcessId();
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v40 = Outpop::Utility::Logger::make_tm(v17);
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v19 = Outpop::Utility::Logger::make_dt(v18);
        v20 = sub_10007400(
                0xFFFF - v16,
                &log_buffer[v16],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v19,
                v40,
                v43,
                v48,
                v54,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
                358)
            + v16;
        v21 = ntohs(*((_WORD *)a2 + 37));
        v62 = v69;
        v59 = v68;
        v55 = v21;
        v49 = Outpop::IONetwork::INET_Addr::get_host_addr(v70);
        sub_10007400(
          0xFFFF - v20,
          &log_buffer[v20],
          L"GXH ERROR Dgram_Connector::handle_read_stream  wait_simple_channel_hash_map_ not found channel  ip is:%S,port "
           "is %d,address_index is %lld",
          v49,
          v55,
          v59,
          v62);
      }
    }
    else
    {
      v75 = (Outpop::Utility::Thread_Mutex *)(this + 52);
      Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)(this + 52));
      sub_1002BBA0((_DWORD *)this + 74, v67, &v68);
      v66[1] = *((_DWORD *)this + 76);
      v66[0] = this + 75;
      if ( !sub_1002BF60(v67, v66) )
      {
        v30 = *(struct in_addr **)(sub_10035EE0(v67) + 8);
        v70 = v30;
        if ( v30 )
          Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)v30);
        LOBYTE(v72) = 6;
        Outpop::Utility::Thread_Mutex::release(v75);
        Outpop::IONetwork::Dgram_Channel::handle_read_stream((Outpop::IONetwork::Dgram_Channel *)v30, a2);
        LOBYTE(v72) = 2;
        if ( v30 )
          Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)v30);
        goto LABEL_32;
      }
      Outpop::Utility::Thread_Mutex::release(v75);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
        || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
      {
LABEL_32:
        LOBYTE(v72) = 0;
        if ( v71[0] )
          Outpop::Utility::Ref_Object::release(v71[0]);
        v72 = -1;
        return;
      }
      v74 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v74);
      LOBYTE(v72) = 5;
      v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v22);
      v23 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v56 = GetLastError();
      v50 = GetCurrentThreadId();
      v44 = GetCurrentProcessId();
      v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v41 = Outpop::Utility::Logger::make_tm(v24);
      v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v26 = Outpop::Utility::Logger::make_dt(v25);
      v27 = sub_10007400(
              0xFFFF - v23,
              &log_buffer[v23],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v26,
              v41,
              v44,
              v50,
              v56,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
              369)
          + v23;
      v63 = ntohs(*((_WORD *)a2 + 37));
      v28 = Outpop::IONetwork::INET_Addr::get_host_addr(v70);
      sub_10007400(
        0xFFFF - v27,
        &log_buffer[v27],
        L"ERROR Dgram_Connector::handle_read_stream channel_hash_map_ is not find channel.ip is %S,prot is %d",
        v28,
        v63);
    }
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", log_buffer);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v29);
    }
    LOBYTE(v72) = 2;
    Outpop::Utility::Lock::unlock(v74);
    goto LABEL_32;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v76 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v76);
    LOBYTE(v72) = 1;
    v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v32 = Outpop::Utility::Logger::get_log_buffer(v31);
    v33 = sub_10007400(0xFFFFu, v32, L"\n%s", L"LOG_ERROR");
    v60 = GetLastError();
    v57 = GetCurrentThreadId();
    v51 = GetCurrentProcessId();
    v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v45 = Outpop::Utility::Logger::make_tm(v34);
    v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v36 = Outpop::Utility::Logger::make_dt(v35);
    v37 = sub_10007400(
            0xFFFF - v33,
            &v32[v33],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v36,
            v45,
            v51,
            v57,
            v60,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
            311);
    sub_10007400(
      0xFFFF - (v37 + v33),
      &v32[v37 + v33],
      L"GXH ERROR Dgram_Connector::handle_read_stream(Asynch_IO_Result*  io_result),error code is:%d",
      *((_DWORD *)a2 + 13));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v32);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v38);
    }
    LOBYTE(v72) = 0;
    Outpop::Utility::Lock::unlock(v76);
  }
}
