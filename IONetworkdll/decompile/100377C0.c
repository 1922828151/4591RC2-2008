/*
 * func-name: ?handle_write_stream@Dgram_Connector@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x100377c0
 * callers: 0x1003b640
 * callees: 0x10003890, 0x10007400, 0x1002b5c0, 0x1002bba0, 0x10035ee0, 0x1003aa70, 0x1004a7f0
 */

void __thiscall Outpop::IONetwork::Dgram_Connector::handle_write_stream(
        Outpop::IONetwork::Dgram_Connector *this,
        struct Outpop::IONetwork::Asynch_IO_Result *a2)
{
  int v4; // edx
  Outpop::Utility::Thread_Mutex *v5; // ebx
  Outpop::Utility::Thread_Mutex *v6; // ecx
  char *v7; // esi
  _DWORD *v8; // esi
  Outpop::Utility::Lock *v9; // ebx
  Outpop::Utility::Logger *v10; // eax
  wchar_t *log_buffer; // edi
  int v12; // esi
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Logger *v14; // eax
  wchar_t *v15; // eax
  int v16; // eax
  char *v17; // esi
  Outpop::Utility::Logger *v18; // eax
  int v19; // esi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *dt; // eax
  int v23; // esi
  Outpop::Utility::Thread_Mutex *v24; // ebx
  char *v25; // esi
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  Outpop::Utility::Logger *v28; // eax
  wchar_t *v29; // eax
  Outpop::Utility::Logger *v30; // eax
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // edi
  int v33; // esi
  Outpop::Utility::Logger *v34; // eax
  Outpop::Utility::Logger *v35; // eax
  wchar_t *v36; // eax
  int v37; // eax
  Outpop::Utility::Logger *v38; // eax
  wchar_t *v39; // [esp-28h] [ebp-70h]
  wchar_t *v40; // [esp-18h] [ebp-60h]
  wchar_t *tm; // [esp-18h] [ebp-60h]
  wchar_t *v42; // [esp-18h] [ebp-60h]
  wchar_t *v43; // [esp-18h] [ebp-60h]
  DWORD v44; // [esp-14h] [ebp-5Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-5Ch]
  DWORD v46; // [esp-14h] [ebp-5Ch]
  DWORD v47; // [esp-14h] [ebp-5Ch]
  DWORD v48; // [esp-10h] [ebp-58h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-58h]
  DWORD v50; // [esp-10h] [ebp-58h]
  DWORD v51; // [esp-10h] [ebp-58h]
  DWORD v52; // [esp-Ch] [ebp-54h]
  DWORD LastError; // [esp-Ch] [ebp-54h]
  DWORD v54; // [esp-Ch] [ebp-54h]
  DWORD v55; // [esp-Ch] [ebp-54h]
  _DWORD v56[4]; // [esp+0h] [ebp-48h] BYREF
  _DWORD v57[2]; // [esp+10h] [ebp-38h] BYREF
  _DWORD v58[4]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v59[2]; // [esp+28h] [ebp-20h] BYREF
  Outpop::Utility::Ref_Object *v60[2]; // [esp+34h] [ebp-14h] BYREF
  int v61; // [esp+44h] [ebp-4h]
  Outpop::Utility::Lock *v62; // [esp+50h] [ebp+8h]
  bool v63; // [esp+53h] [ebp+Bh]

  v60[1] = (Outpop::Utility::Ref_Object *)v56;
  v61 = 0;
  if ( *((_DWORD *)a2 + 17) && *((_DWORD *)a2 + 6) )
  {
    sub_1002B5C0((int)a2, v60);
    LOBYTE(v61) = 2;
    v63 = *Outpop::Utility::Stream_Base::get_read_ptr(v60[0]) < 0;
    v59[0] = Outpop::IONetwork::INET_Addr::hash64((struct Outpop::IONetwork::Asynch_IO_Result *)((char *)a2 + 40));
    v59[1] = v4;
    if ( v63 )
    {
      v5 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 232);
      v6 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 232);
      if ( !*((_BYTE *)this + 84) )
      {
        Outpop::Utility::Thread_Mutex::acquire(v6);
        sub_1002BBA0((_DWORD *)this + 84, v57, v59);
        v17 = (char *)this + 340;
        v58[1] = *((_DWORD *)v17 + 1);
        v58[0] = v17;
        if ( (unsigned __int8)sub_1004A7F0() )
        {
          sub_10035EE0(v57);
          Outpop::Utility::Thread_Mutex::release(v5);
          sub_1003AA70(v56[0], v56[1]);
          goto LABEL_29;
        }
        Outpop::Utility::Thread_Mutex::release(v5);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
        {
          goto LABEL_29;
        }
        v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v9);
        LOBYTE(v61) = 4;
        v18 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v18);
        v19 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v20);
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v21);
        v23 = sub_10007400(
                0xFFFF - v19,
                &log_buffer[v19],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
                262)
            + v19;
        sub_10007400(
          0xFFFF - v23,
          &log_buffer[v23],
          L"Error Dgram_Connector::handle_write_stream  wait_simple_channel_hash_map_  not found  write  packet's chanel2");
LABEL_24:
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v30);
        }
        LOBYTE(v61) = 2;
        Outpop::Utility::Lock::unlock(v9);
        goto LABEL_29;
      }
      Outpop::Utility::Thread_Mutex::acquire(v6);
      sub_1002BBA0((_DWORD *)this + 64, v57, v59);
      v7 = (char *)this + 260;
      v58[3] = *((_DWORD *)v7 + 1);
      v58[2] = v7;
      if ( (unsigned __int8)sub_1004A7F0() )
      {
        v8 = (_DWORD *)(sub_10035EE0(v57) + 8);
        Outpop::Utility::Thread_Mutex::release(v5);
        (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **))(*(_DWORD *)*v8 + 8))(*v8, v60);
LABEL_29:
        LOBYTE(v61) = 0;
        if ( v60[0] )
          Outpop::Utility::Ref_Object::release(v60[0]);
        v61 = -1;
        return;
      }
      Outpop::Utility::Thread_Mutex::release(v5);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
        || *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) != 1 )
      {
        goto LABEL_29;
      }
      v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v9);
      LOBYTE(v61) = 3;
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v10);
      v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_ERROR");
      v52 = GetLastError();
      v48 = GetCurrentThreadId();
      v44 = GetCurrentProcessId();
      v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v40 = Outpop::Utility::Logger::make_tm(v13);
      v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v15 = Outpop::Utility::Logger::make_dt(v14);
      v16 = sub_10007400(
              0xFFFF - v12,
              &log_buffer[v12],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v15,
              v40,
              v44,
              v48,
              v52,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
              245);
      v39 = L"Error Dgram_Connector::handle_write_stream wait_channel_hash_map_  not found  write  packet's chanel1";
    }
    else
    {
      v24 = (Outpop::IONetwork::Dgram_Connector *)((char *)this + 208);
      Outpop::Utility::Thread_Mutex::acquire((Outpop::IONetwork::Dgram_Connector *)((char *)this + 208));
      sub_1002BBA0((_DWORD *)this + 74, v58, v59);
      v25 = (char *)this + 300;
      v57[1] = *((_DWORD *)v25 + 1);
      v57[0] = v25;
      if ( (unsigned __int8)sub_1004A7F0() )
      {
        sub_10035EE0(v58);
        Outpop::Utility::Thread_Mutex::release(v24);
        goto LABEL_29;
      }
      Outpop::Utility::Thread_Mutex::release(v24);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) != 1
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) != 1
        || *(_BYTE *)(Outpop::Utility::Logger::instance() + 139) != 1 )
      {
        goto LABEL_29;
      }
      v9 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v9);
      LOBYTE(v61) = 5;
      v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v26);
      v12 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_WARNING");
      v54 = GetLastError();
      v50 = GetCurrentThreadId();
      v46 = GetCurrentProcessId();
      v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v42 = Outpop::Utility::Logger::make_tm(v27);
      v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v29 = Outpop::Utility::Logger::make_dt(v28);
      v16 = sub_10007400(
              0xFFFF - v12,
              &log_buffer[v12],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v29,
              v42,
              v46,
              v50,
              v54,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
              280);
      v39 = L"Error Dgram_Connector::handle_write_stream not found  write  packet's chanel2";
    }
    sub_10007400(0xFFFF - (v16 + v12), &log_buffer[v16 + v12], v39);
    goto LABEL_24;
  }
  if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
     || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
    && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
  {
    v62 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v62);
    LOBYTE(v61) = 1;
    v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v32 = Outpop::Utility::Logger::get_log_buffer(v31);
    v33 = sub_10007400(0xFFFFu, v32, L"\n%s", L"LOG_ERROR");
    v55 = GetLastError();
    v51 = GetCurrentThreadId();
    v47 = GetCurrentProcessId();
    v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v43 = Outpop::Utility::Logger::make_tm(v34);
    v35 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v36 = Outpop::Utility::Logger::make_dt(v35);
    v37 = sub_10007400(
            0xFFFF - v33,
            &v32[v33],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v36,
            v43,
            v47,
            v51,
            v55,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\Dgram_Connector.cpp",
            222);
    sub_10007400(
      0xFFFF - (v37 + v33),
      &v32[v37 + v33],
      L"GXH ERROR Dgram_Connector::handle_write_stream(Asynch_IO_Result*  io_result),error code is:%d",
      *((_DWORD *)a2 + 19));
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v32);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v38);
    }
    LOBYTE(v61) = 0;
    Outpop::Utility::Lock::unlock(v62);
  }
}
