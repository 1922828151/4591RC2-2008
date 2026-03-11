/*
 * func-name: ?handle_write_stream@Dgram_Acceptor@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x10028900
 * callers: 0x1002b810
 * callees: 0x100037d0, 0x10003890, 0x10007400, 0x1002b250, 0x1002b5c0, 0x1002bba0, 0x10035ee0, 0x1004a7f0
 */

void __thiscall Outpop::IONetwork::Dgram_Acceptor::handle_write_stream(
        Outpop::IONetwork::Dgram_Acceptor *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  int v4; // edx
  Outpop::Utility::Thread_Mutex *v5; // ebx
  Outpop::Utility::Thread_Mutex *v6; // ecx
  char *v7; // esi
  Outpop::Utility::Ref_Object *v8; // esi
  Outpop::Utility::Lock *v9; // ebx
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // edi
  int v12; // esi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *dt; // eax
  int v16; // eax
  Outpop::Utility::Logger *v17; // eax
  Outpop::Utility::Lock *v18; // ecx
  char *v19; // esi
  Outpop::Utility::Ref_Object *v20; // esi
  Outpop::Utility::Logger *v21; // eax
  int v22; // esi
  Outpop::Utility::Logger *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  wchar_t *v25; // eax
  int v26; // eax
  char *v27; // esi
  Outpop::Utility::Logger *v28; // eax
  wchar_t *v29; // edi
  int v30; // esi
  Outpop::Utility::Logger *v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *v33; // eax
  int v34; // esi
  u_short v35; // ax
  char *host_addr; // eax
  Outpop::Utility::Logger *v37; // eax
  Outpop::Utility::Logger *v38; // eax
  wchar_t *v39; // edi
  int v40; // esi
  Outpop::Utility::Logger *v41; // eax
  Outpop::Utility::Logger *v42; // eax
  wchar_t *v43; // eax
  int v44; // eax
  Outpop::Utility::Logger *v45; // eax
  wchar_t *tm; // [esp-18h] [ebp-60h]
  wchar_t *v47; // [esp-18h] [ebp-60h]
  wchar_t *v48; // [esp-18h] [ebp-60h]
  wchar_t *v49; // [esp-18h] [ebp-60h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-5Ch]
  DWORD v51; // [esp-14h] [ebp-5Ch]
  DWORD v52; // [esp-14h] [ebp-5Ch]
  DWORD v53; // [esp-14h] [ebp-5Ch]
  DWORD CurrentThreadId; // [esp-10h] [ebp-58h]
  DWORD v55; // [esp-10h] [ebp-58h]
  DWORD v56; // [esp-10h] [ebp-58h]
  DWORD v57; // [esp-10h] [ebp-58h]
  DWORD LastError; // [esp-Ch] [ebp-54h]
  DWORD v59; // [esp-Ch] [ebp-54h]
  DWORD v60; // [esp-Ch] [ebp-54h]
  int v61; // [esp-Ch] [ebp-54h]
  DWORD v62; // [esp-Ch] [ebp-54h]
  int v63; // [esp-8h] [ebp-50h]
  int v64; // [esp-4h] [ebp-4Ch]
  _DWORD v65[4]; // [esp+0h] [ebp-48h] BYREF
  _DWORD v66[2]; // [esp+10h] [ebp-38h] BYREF
  _DWORD v67[2]; // [esp+18h] [ebp-30h] BYREF
  int v68; // [esp+20h] [ebp-28h] BYREF
  int v69; // [esp+24h] [ebp-24h]
  char *v70; // [esp+2Ch] [ebp-1Ch]
  struct in_addr *v71; // [esp+30h] [ebp-18h]
  Outpop::Utility::Ref_Object *v72[2]; // [esp+34h] [ebp-14h] BYREF
  int v73; // [esp+44h] [ebp-4h]
  Outpop::Utility::Thread_Mutex *v74; // [esp+50h] [ebp+8h]
  Outpop::Utility::Lock *v75; // [esp+50h] [ebp+8h]
  Outpop::Utility::Lock *v76; // [esp+50h] [ebp+8h]
  bool v77; // [esp+53h] [ebp+Bh]

  v72[1] = (Outpop::Utility::Ref_Object *)v65;
  v73 = 0;
  if ( *((_DWORD *)a2 + 17) && *((_DWORD *)a2 + 6) )
  {
    sub_1002B5C0(a2, v72);
    LOBYTE(v73) = 2;
    v77 = *Outpop::Utility::Stream_Base::get_read_ptr(v72[0]) < 0;
    v71 = (struct in_addr *)((char *)a2 + 40);
    v68 = Outpop::IONetwork::INET_Addr::hash64((struct Outpop::IONetwork::Asynch_IO_Result *)((char *)a2 + 40));
    v69 = v4;
    if ( v77 )
    {
      v5 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 208);
      v6 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 208);
      if ( *((_BYTE *)this + 88) )
      {
        Outpop::Utility::Thread_Mutex::acquire(v6);
        sub_1002BBA0(v66, &v68);
        v7 = (char *)this + 292;
        v71 = (struct in_addr *)*((_DWORD *)v7 + 1);
        v70 = v7;
        if ( (unsigned __int8)sub_1004A7F0() )
        {
          v8 = *(Outpop::Utility::Ref_Object **)(sub_10035EE0() + 8);
          if ( v8 )
            Outpop::Utility::Ref_Object::addref(v8);
          LOBYTE(v73) = 3;
          Outpop::Utility::Thread_Mutex::release(v5);
          (*(void (__thiscall **)(Outpop::Utility::Ref_Object *, Outpop::Utility::Ref_Object **))(*(_DWORD *)v8 + 8))(
            v8,
            v72);
          LOBYTE(v73) = 2;
          Outpop::Utility::Ref_Object::release(v8);
          goto LABEL_41;
        }
        Outpop::Utility::Thread_Mutex::release(v5);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v9);
          LOBYTE(v73) = 4;
          v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
          v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
          LastError = GetLastError();
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
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                  381);
          sub_10007400(
            0xFFFF - (v16 + v12),
            &log_buffer[v16 + v12],
            L"Dgram_Acceptor::handle_write_stream(Asynch_IO_Result*  io_result),wait_channel_hash_map_ not fonud channel :%lld",
            v68,
            v69);
LABEL_13:
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v17);
          }
          LOBYTE(v73) = 2;
          v18 = v9;
LABEL_40:
          Outpop::Utility::Lock::unlock(v18);
        }
LABEL_41:
        LOBYTE(v73) = 0;
        if ( v72[0] )
          Outpop::Utility::Ref_Object::release(v72[0]);
        v73 = -1;
        return;
      }
      Outpop::Utility::Thread_Mutex::acquire(v6);
      sub_1002BBA0(v66, &v68);
      v19 = (char *)this + 332;
      v67[1] = *((_DWORD *)v19 + 1);
      v67[0] = v19;
      if ( !(unsigned __int8)sub_1004A7F0() )
      {
        Outpop::Utility::Thread_Mutex::release(v5);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
        {
          goto LABEL_41;
        }
        v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v9);
        LOBYTE(v73) = 6;
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v21);
        v22 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        v59 = GetLastError();
        v55 = GetCurrentThreadId();
        v51 = GetCurrentProcessId();
        v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v47 = Outpop::Utility::Logger::make_tm(v23);
        v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v25 = Outpop::Utility::Logger::make_dt(v24);
        v26 = sub_10007400(
                0xFFFF - v22,
                &log_buffer[v22],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v25,
                v47,
                v51,
                v55,
                v59,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                398);
        sub_10007400(
          0xFFFF - (v26 + v22),
          &log_buffer[v26 + v22],
          L"Dgram_Acceptor::handle_write_stream(Asynch_IO_Result*  io_result),wait_ch annel_hash_map_ not fonud channel :%lld",
          v68,
          v69);
        goto LABEL_13;
      }
      v20 = *(Outpop::Utility::Ref_Object **)(sub_10035EE0() + 8);
      if ( v20 )
        Outpop::Utility::Ref_Object::addref(v20);
      LOBYTE(v73) = 5;
      Outpop::Utility::Thread_Mutex::release(v5);
      sub_1002B250(v65[0], v65[1]);
      LOBYTE(v73) = 2;
      if ( !v20 )
        goto LABEL_41;
    }
    else
    {
      v74 = (Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184);
      Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Acceptor *)((char *)this + 184));
      sub_1002BBA0(v67, &v68);
      v27 = (char *)this + 252;
      v66[1] = *((_DWORD *)v27 + 1);
      v66[0] = v27;
      if ( !(unsigned __int8)sub_1004A7F0() )
      {
        Outpop::Utility::Thread_Mutex::release(v74);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
        {
          goto LABEL_41;
        }
        v75 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v75);
        LOBYTE(v73) = 8;
        v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v29 = Outpop::Utility::Logger::get_log_buffer(v28);
        v30 = sub_10007400(0xFFFFu, v29, L"\n%s", L"LOG_ERROR");
        v60 = GetLastError();
        v56 = GetCurrentThreadId();
        v52 = GetCurrentProcessId();
        v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v48 = Outpop::Utility::Logger::make_tm(v31);
        v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v33 = Outpop::Utility::Logger::make_dt(v32);
        v34 = sub_10007400(
                0xFFFF - v30,
                &v29[v30],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v33,
                v48,
                v52,
                v56,
                v60,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
                416)
            + v30;
        v35 = ntohs(*((_WORD *)a2 + 27));
        v64 = v69;
        v63 = v68;
        v61 = v35;
        host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(v71);
        sub_10007400(
          0xFFFF - v34,
          &v29[v34],
          L"Dgram handle_write_stream packet is not  find  match channel.ip is:%S, port is %d,addrindex is %lld",
          host_addr,
          v61,
          v63,
          v64);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v29);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v37 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v37);
        }
        LOBYTE(v73) = 2;
        v18 = v75;
        goto LABEL_40;
      }
      v20 = *(Outpop::Utility::Ref_Object **)(sub_10035EE0() + 8);
      v71 = (struct in_addr *)v20;
      if ( v20 )
        Outpop::Utility::Ref_Object::addref(v20);
      LOBYTE(v73) = 7;
      Outpop::Utility::Thread_Mutex::release(v74);
      LOBYTE(v73) = 2;
      if ( !v20 )
        goto LABEL_41;
    }
    Outpop::Utility::Ref_Object::release(v20);
    goto LABEL_41;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v76 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v76);
    LOBYTE(v73) = 1;
    v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v39 = Outpop::Utility::Logger::get_log_buffer(v38);
    v40 = sub_10007400(0xFFFFu, v39, L"\n%s", L"LOG_ERROR");
    v62 = GetLastError();
    v57 = GetCurrentThreadId();
    v53 = GetCurrentProcessId();
    v41 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v49 = Outpop::Utility::Logger::make_tm(v41);
    v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v43 = Outpop::Utility::Logger::make_dt(v42);
    v44 = sub_10007400(
            0xFFFF - v40,
            &v39[v40],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v43,
            v49,
            v53,
            v57,
            v62,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Acceptor.cpp",
            356);
    sub_10007400(
      0xFFFF - (v44 + v40),
      &v39[v44 + v40],
      L"Dgram_Acceptor::handle_write_stream(Asynch_IO_Result*  io_result),error code is:%d",
      *((_DWORD *)a2 + 19));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v39);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v45 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v45);
    }
    LOBYTE(v73) = 0;
    Outpop::Utility::Lock::unlock(v76);
  }
}
