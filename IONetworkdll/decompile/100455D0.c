/*
 * func-name: ?handle_time_result@P2P_Channel@IONetwork@Outpop@@QAEXPAVAsynch_Result@23@@Z
 * func-address: 0x100455d0
 * callers: 0x10048910
 * callees: 0x10007400, 0x10023ca0, 0x1003ba70, 0x100434b0, 0x100450a0, 0x100451f0, 0x100452b0, 0x10047730, 0x1004cc00
 */

void __thiscall Outpop::IONetwork::P2P_Channel::handle_time_result(
        struct in_addr *this,
        struct Outpop::IONetwork::Asynch_Result *a2)
{
  int S_addr; // ecx
  Outpop::Utility::Logger *v4; // eax
  wchar_t *log_buffer; // ebp
  int v6; // edi
  Outpop::Utility::Logger *v7; // eax
  Outpop::Utility::Logger *v8; // eax
  wchar_t *dt; // eax
  int v10; // edi
  struct in_addr *v11; // ebx
  char *v12; // eax
  Outpop::Utility::Logger *v13; // eax
  Outpop::Utility::Ref_Object *v14; // ecx
  int v15; // edi
  ULONG v16; // ecx
  Outpop::Utility::Logger *v17; // eax
  wchar_t *v18; // ebp
  int v19; // edi
  Outpop::Utility::Logger *v20; // eax
  Outpop::Utility::Logger *v21; // eax
  wchar_t *v22; // eax
  int v23; // edi
  struct in_addr *v24; // edx
  struct in_addr *v25; // eax
  Outpop::Utility::Logger *v26; // eax
  Outpop::Utility::Logger *v27; // eax
  wchar_t *v28; // ebp
  int v29; // edi
  Outpop::Utility::Logger *v30; // eax
  Outpop::Utility::Logger *v31; // eax
  wchar_t *v32; // eax
  int v33; // edi
  u_short v34; // bx
  char *v35; // eax
  struct in_addr *v36; // edx
  struct in_addr *v37; // ecx
  Outpop::Utility::Logger *v38; // eax
  Outpop::Utility::Logger *v39; // eax
  wchar_t *v40; // ebp
  int v41; // edi
  Outpop::Utility::Logger *v42; // eax
  Outpop::Utility::Logger *v43; // eax
  wchar_t *v44; // eax
  int v45; // edi
  struct in_addr *v46; // edx
  struct in_addr *v47; // eax
  Outpop::Utility::Logger *v48; // eax
  ULONG v49; // edx
  Outpop::Utility::Lock *v50; // ebx
  Outpop::Utility::Logger *v51; // eax
  wchar_t *v52; // ebp
  int v53; // edi
  Outpop::Utility::Logger *v54; // eax
  Outpop::Utility::Logger *v55; // eax
  wchar_t *v56; // eax
  int v57; // edi
  int v58; // eax
  Outpop::Utility::Logger *v59; // eax
  int v60; // ebx
  wchar_t *tm; // [esp-18h] [ebp-6Ch]
  wchar_t *v62; // [esp-18h] [ebp-6Ch]
  wchar_t *v63; // [esp-18h] [ebp-6Ch]
  wchar_t *v64; // [esp-18h] [ebp-6Ch]
  wchar_t *v65; // [esp-18h] [ebp-6Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-68h]
  DWORD v67; // [esp-14h] [ebp-68h]
  DWORD v68; // [esp-14h] [ebp-68h]
  DWORD v69; // [esp-14h] [ebp-68h]
  DWORD v70; // [esp-14h] [ebp-68h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-64h]
  DWORD v72; // [esp-10h] [ebp-64h]
  DWORD v73; // [esp-10h] [ebp-64h]
  DWORD v74; // [esp-10h] [ebp-64h]
  DWORD v75; // [esp-10h] [ebp-64h]
  DWORD LastError; // [esp-Ch] [ebp-60h]
  int v77; // [esp-Ch] [ebp-60h]
  DWORD v78; // [esp-Ch] [ebp-60h]
  DWORD v79; // [esp-Ch] [ebp-60h]
  DWORD v80; // [esp-Ch] [ebp-60h]
  DWORD v81; // [esp-Ch] [ebp-60h]
  struct in_addr *v82; // [esp+14h] [ebp-40h]
  Outpop::Utility::Lock *v83; // [esp+14h] [ebp-40h]
  Outpop::Utility::Ref_Object *v84; // [esp+18h] [ebp-3Ch] BYREF
  Outpop::Utility::Lock *v85; // [esp+1Ch] [ebp-38h]
  Outpop::Utility::Lock *v86; // [esp+20h] [ebp-34h]
  Outpop::Utility::Lock *v87; // [esp+24h] [ebp-30h]
  Outpop::Utility::Lock *v88; // [esp+28h] [ebp-2Ch]
  ULONG v89; // [esp+2Ch] [ebp-28h] BYREF
  ULONG v90; // [esp+30h] [ebp-24h]
  int v91; // [esp+34h] [ebp-20h] BYREF
  int v92; // [esp+38h] [ebp-1Ch]
  int v93; // [esp+3Ch] [ebp-18h]
  int v94; // [esp+40h] [ebp-14h]
  int v95; // [esp+50h] [ebp-4h]

  Outpop::Utility::Time_Value::gettimeofday(&v89);
  v95 = 0;
  S_addr = this[154].S_un.S_addr;
  if ( !this[175].S_un.S_un_b.s_b1 )
  {
    if ( S_addr > 3 )
    {
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v85 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v85);
        LOBYTE(v95) = 1;
        v4 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        log_buffer = Outpop::Utility::Logger::get_log_buffer(v4);
        v6 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
        LastError = GetLastError();
        CurrentThreadId = GetCurrentThreadId();
        CurrentProcessId = GetCurrentProcessId();
        v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        tm = Outpop::Utility::Logger::make_tm(v7);
        v8 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        dt = Outpop::Utility::Logger::make_dt(v8);
        v10 = sub_10007400(
                0xFFFF - v6,
                &log_buffer[v6],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                dt,
                tm,
                CurrentProcessId,
                CurrentThreadId,
                LastError,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
                680)
            + v6;
        if ( this[172].S_un.S_addr < 0x10 )
          v82 = this + 167;
        else
          v82 = (struct in_addr *)this[167].S_un.S_addr;
        if ( this[165].S_un.S_addr < 0x10 )
          v11 = this + 160;
        else
          v11 = (struct in_addr *)this[160].S_un.S_addr;
        v77 = ntohs(this[23].S_un.S_un_w.s_w2);
        v12 = inet_ntoa(this[24]);
        sub_10007400(
          0xFFFF - v10,
          &log_buffer[v10],
          L"P2P_Channel::handle_time_result  this->login_stream_packet_count_ > 3  handle-close,remote_ip is %s, port is %"
           "d,localname is %S,remotename  is %S",
          v12,
          v77,
          v11,
          v82);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", log_buffer);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v13 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v13);
        }
        LOBYTE(v95) = 0;
        Outpop::Utility::Lock::unlock(v85);
      }
      Outpop::IONetwork::P2PUdpBuilder::erase_channel_from_map(&this[166]);
      Outpop::IONetwork::P2P_Channel::cancel_timer((Outpop::IONetwork::P2P_Channel *)this);
      v14 = (Outpop::Utility::Ref_Object *)this[45].S_un.S_addr;
      v15 = *((_DWORD *)v14 + 28);
      v84 = v14;
      if ( v14 )
        Outpop::Utility::Ref_Object::addref(v14);
      LOBYTE(v95) = 2;
      (*(void (__thiscall **)(int, int, struct in_addr *, struct in_addr *, Outpop::Utility::Ref_Object **))(*(_DWORD *)v15 + 24))(
        v15,
        -1,
        this + 20,
        this + 174,
        &v84);
      LOBYTE(v95) = 0;
      if ( v84 )
        Outpop::Utility::Ref_Object::release(v84);
      goto LABEL_89;
    }
    v85 = (Outpop::Utility::Lock *)Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)&this[176]);
    if ( Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)&v89) - (int)v85 > 30 )
    {
      v16 = v90;
      this[176].S_un.S_addr = v89;
      this[177].S_un.S_addr = v16;
      if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
         || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
        && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
      {
        v83 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
        Outpop::Utility::Lock::lock(v83);
        LOBYTE(v95) = 3;
        v17 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v18 = Outpop::Utility::Logger::get_log_buffer(v17);
        v19 = sub_10007400(0xFFFFu, v18, L"\n%s", L"LOG_DEBUG");
        v78 = GetLastError();
        v72 = GetCurrentThreadId();
        v67 = GetCurrentProcessId();
        v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v62 = Outpop::Utility::Logger::make_tm(v20);
        v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        v22 = Outpop::Utility::Logger::make_dt(v21);
        v23 = sub_10007400(
                0xFFFF - v19,
                &v18[v19],
                L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                v22,
                v62,
                v67,
                v72,
                v78,
                L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
                696)
            + v19;
        if ( this[172].S_un.S_addr < 0x10 )
          v24 = this + 167;
        else
          v24 = (struct in_addr *)this[167].S_un.S_addr;
        if ( this[165].S_un.S_addr < 0x10 )
          v25 = this + 160;
        else
          v25 = (struct in_addr *)this[160].S_un.S_addr;
        sub_10007400(
          0xFFFF - v23,
          &v18[v23],
          L"P2P_Channel::handle_time_result  !bchannel_build_  resend_test_packet  count  is   %d,localname is %S,remotename  is %S",
          this[154].S_un.S_addr,
          v25,
          v24);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
          wprintf(L"%s", v18);
        if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
        {
          v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          Outpop::Utility::Logger::write_file(v26);
        }
        LOBYTE(v95) = 0;
        Outpop::Utility::Lock::unlock(v83);
      }
      Outpop::IONetwork::P2P_Channel::resend_test_packet((volatile LONG *)this);
      goto LABEL_89;
    }
    goto LABEL_69;
  }
  if ( S_addr <= 10 )
  {
    v86 = (Outpop::Utility::Lock *)Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)&v89);
    if ( (int)v86 - Outpop::Utility::Time_Value::sec((Outpop::Utility::Time_Value *)&this[151]) <= 10 )
    {
LABEL_69:
      v92 = 0;
      v93 = 0;
      v94 = 0;
      LOBYTE(v95) = 6;
      if ( !(unsigned __int8)sub_10047730(&this[68], &v91) )
        goto LABEL_70;
      if ( v92 && (v93 - v92) >> 2 )
      {
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v50 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v88 = v50;
          Outpop::Utility::Lock::lock(v50);
          LOBYTE(v95) = 7;
          v51 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v52 = Outpop::Utility::Logger::get_log_buffer(v51);
          v53 = sub_10007400(0xFFFFu, v52, L"\n%s", L"LOG_DEBUG");
          v81 = GetLastError();
          v75 = GetCurrentThreadId();
          v70 = GetCurrentProcessId();
          v54 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v65 = Outpop::Utility::Logger::make_tm(v54);
          v55 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v56 = Outpop::Utility::Logger::make_dt(v55);
          v57 = sub_10007400(
                  0xFFFF - v53,
                  &v52[v53],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v56,
                  v65,
                  v70,
                  v75,
                  v81,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
                  736)
              + v53;
          if ( v92 )
            v58 = (v93 - v92) >> 2;
          else
            v58 = 0;
          sub_10007400(
            0xFFFF - v57,
            &v52[v57],
            L"Dgram_Channel::handle_time_out  reliable_container  have resend pakcet,num is:%d",
            v58);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v52);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v59 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v59);
          }
          LOBYTE(v95) = 6;
          Outpop::Utility::Lock::unlock(v50);
        }
        Outpop::IONetwork::P2P_Channel::send_unite_quence((char *)this, (int)&v91);
      }
      if ( (signed int)++this[157].S_un.S_addr % 100 )
        goto LABEL_88;
      Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Thread_Mutex *)&this[81]);
      v60 = this[90].S_un.S_addr;
      Outpop::Utility::Thread_Mutex::release((Outpop::Utility::Thread_Mutex *)&this[81]);
      if ( v60 < 200 )
        Outpop::IONetwork::Comminute_Container::check_stream_conminute((Outpop::IONetwork::Comminute_Container *)&this[51]);
      else
LABEL_70:
        (*(void (__thiscall **)(struct in_addr *))(this->S_un.S_addr + 24))(this);
LABEL_88:
      LOBYTE(v95) = 0;
      sub_1003BA70(&v91);
      goto LABEL_89;
    }
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v87 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v87);
      LOBYTE(v95) = 5;
      v39 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v40 = Outpop::Utility::Logger::get_log_buffer(v39);
      v41 = sub_10007400(0xFFFFu, v40, L"\n%s", L"LOG_DEBUG");
      v80 = GetLastError();
      v74 = GetCurrentThreadId();
      v69 = GetCurrentProcessId();
      v42 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v64 = Outpop::Utility::Logger::make_tm(v42);
      v43 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v44 = Outpop::Utility::Logger::make_dt(v43);
      v45 = sub_10007400(
              0xFFFF - v41,
              &v40[v41],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v44,
              v64,
              v69,
              v74,
              v80,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
              716)
          + v41;
      if ( this[172].S_un.S_addr < 0x10 )
        v46 = this + 167;
      else
        v46 = (struct in_addr *)this[167].S_un.S_addr;
      if ( this[165].S_un.S_addr < 0x10 )
        v47 = this + 160;
      else
        v47 = (struct in_addr *)this[160].S_un.S_addr;
      sub_10007400(
        0xFFFF - v45,
        &v40[v45],
        L"P2P_Channel::handle_time_result  bchannel_build_  resend_test_packet  count  is   %d,localname is %S,remotename  is %S",
        this[154].S_un.S_addr,
        v47,
        v46);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v40);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v48 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v48);
      }
      LOBYTE(v95) = 0;
      Outpop::Utility::Lock::unlock(v87);
    }
    v49 = v90;
    this[151].S_un.S_addr = v89;
    this[152].S_un.S_addr = v49;
    Outpop::IONetwork::P2P_Channel::resend_test_packet((volatile LONG *)this);
  }
  else
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v86 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v86);
      LOBYTE(v95) = 4;
      v27 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v28 = Outpop::Utility::Logger::get_log_buffer(v27);
      v29 = sub_10007400(0xFFFFu, v28, L"\n%s", L"LOG_DEBUG");
      v79 = GetLastError();
      v73 = GetCurrentThreadId();
      v68 = GetCurrentProcessId();
      v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v63 = Outpop::Utility::Logger::make_tm(v30);
      v31 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      v32 = Outpop::Utility::Logger::make_dt(v31);
      v33 = sub_10007400(
              0xFFFF - v29,
              &v28[v29],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              v32,
              v63,
              v68,
              v73,
              v79,
              L"D:\\R3\\OutpopGameProject\\IONetwork\\P2P_Channel.cpp",
              706)
          + v29;
      v34 = ntohs(this[23].S_un.S_un_w.s_w2);
      v35 = inet_ntoa(this[24]);
      if ( this[172].S_un.S_addr < 0x10 )
        v36 = this + 167;
      else
        v36 = (struct in_addr *)this[167].S_un.S_addr;
      if ( this[165].S_un.S_addr < 0x10 )
        v37 = this + 160;
      else
        v37 = (struct in_addr *)this[160].S_un.S_addr;
      sub_10007400(
        0xFFFF - v33,
        &v28[v33],
        L"P2P_Channel::handle_time_result   this->login_stream_packet_count_ > 10  localname is %S,remotename  is %S  hand"
         "le-close,remote_ip is %s, port is %d",
        v37,
        v36,
        v35,
        v34);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", v28);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v38);
      }
      LOBYTE(v95) = 0;
      Outpop::Utility::Lock::unlock(v86);
    }
    Outpop::IONetwork::P2PUdpBuilder::erase_channel_from_map(&this[166]);
    Outpop::IONetwork::P2P_Channel::handler_close((Outpop::IONetwork::P2P_Channel *)this);
  }
LABEL_89:
  v95 = -1;
  Outpop::Utility::Time_Value::~Time_Value((Outpop::Utility::Time_Value *)&v89);
}
