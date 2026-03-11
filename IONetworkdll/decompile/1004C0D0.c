/*
 * func-name: ?handle_read_stream@P2PUdpBuilder@IONetwork@Outpop@@QAEXPAVAsynch_IO_Result@23@@Z
 * func-address: 0x1004c0d0
 * callers: 0x1004d930
 * callees: 0x100037d0, 0x10007400, 0x1002b5c0, 0x100440d0, 0x1004a7f0, 0x1004b970, 0x1004dcc0, 0x1004e510, 0x1004e861
 */

void __thiscall Outpop::IONetwork::P2PUdpBuilder::handle_read_stream(volatile LONG *this, struct in_addr *a2)
{
  Outpop::Utility::Lock *v2; // edi
  Outpop::Utility::Logger *v3; // eax
  wchar_t *log_buffer; // edi
  int v5; // esi
  Outpop::Utility::Logger *v6; // eax
  Outpop::Utility::Logger *v7; // eax
  wchar_t *dt; // eax
  int v9; // esi
  char *host_addr; // eax
  Outpop::Utility::Logger *v11; // eax
  int v12; // edi
  int v13; // esi
  Outpop::Utility::Lock *v14; // esi
  Outpop::Utility::Lock *v15; // ebx
  Outpop::Utility::Logger *v16; // eax
  wchar_t *v17; // edi
  int v18; // esi
  Outpop::Utility::Logger *v19; // eax
  Outpop::Utility::Logger *v20; // eax
  wchar_t *v21; // eax
  int v22; // esi
  _DWORD *v23; // eax
  Outpop::Utility::Logger *v24; // eax
  Outpop::Utility::Logger *v25; // eax
  wchar_t *v26; // edi
  int v27; // esi
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Logger *v29; // eax
  wchar_t *v30; // eax
  int v31; // eax
  Outpop::Utility::Logger *v32; // eax
  wchar_t *tm; // [esp-18h] [ebp-78h]
  wchar_t *v34; // [esp-18h] [ebp-78h]
  wchar_t *v35; // [esp-18h] [ebp-78h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-74h]
  DWORD v37; // [esp-14h] [ebp-74h]
  DWORD v38; // [esp-14h] [ebp-74h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-70h]
  DWORD v40; // [esp-10h] [ebp-70h]
  DWORD v41; // [esp-10h] [ebp-70h]
  DWORD LastError; // [esp-Ch] [ebp-6Ch]
  DWORD v43; // [esp-Ch] [ebp-6Ch]
  DWORD v44; // [esp-Ch] [ebp-6Ch]
  int v45; // [esp-4h] [ebp-64h]
  int v46; // [esp+0h] [ebp-60h] BYREF
  int v47; // [esp+14h] [ebp-4Ch] BYREF
  int v48; // [esp+18h] [ebp-48h]
  Outpop::Utility::Lock *v49; // [esp+1Ch] [ebp-44h]
  char *v50; // [esp+20h] [ebp-40h] BYREF
  Outpop::Utility::Lock *v51; // [esp+24h] [ebp-3Ch]
  Outpop::Utility::Ref_Object *v52; // [esp+28h] [ebp-38h] BYREF
  bool v53; // [esp+2Fh] [ebp-31h]
  _BYTE v54[4]; // [esp+30h] [ebp-30h] BYREF
  _DWORD v55[8]; // [esp+34h] [ebp-2Ch] BYREF
  int v56; // [esp+5Ch] [ebp-4h]

  v55[7] = &v46;
  v2 = (Outpop::Utility::Lock *)this;
  v51 = (Outpop::Utility::Lock *)this;
  v56 = 0;
  InterlockedDecrement(this + 49);
  Outpop::IONetwork::P2PUdpBuilder::PostAccept(v2, 0xFFDCu);
  if ( a2[12].S_un.S_addr && a2[6].S_un.S_addr )
  {
    sub_1002B5C0((int)a2, &v52);
    LOBYTE(v56) = 2;
    Outpop::Utility::Stream_Base::move_write_pos(v52, a2[6].S_un.S_addr);
    v53 = (*Outpop::Utility::Stream_Base::get_read_ptr(v52) & 1) != 0;
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v49 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v49);
      LOBYTE(v56) = 3;
      v3 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v3);
      v5 = sub_10007400(0xFFFFu, log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v6);
      v7 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v7);
      v9 = sub_10007400(
             0xFFFF - v5,
             &log_buffer[v5],
             L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
             dt,
             tm,
             CurrentProcessId,
             CurrentThreadId,
             LastError,
             L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
             284)
         + v5;
      v45 = ntohs(a2[18].S_un.S_un_w.s_w2);
      host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(a2 + 15);
      sub_10007400(
        0xFFFF - v9,
        &log_buffer[v9],
        L"GXH P2PUdpBuilder::handle_read_stream(Asynch_IO_Result*  io_result),bsys_byte is:%d,remote ip is %d,remote port %d",
        v53,
        host_addr,
        v45);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v11);
      }
      LOBYTE(v56) = 2;
      Outpop::Utility::Lock::unlock(v49);
      v2 = v51;
    }
    if ( v53 )
    {
      if ( *((_DWORD *)v2 + 2) )
        (*(void (__thiscall **)(_DWORD, Outpop::Utility::Ref_Object **, struct in_addr *))(**((_DWORD **)v2 + 2) + 4))(
          *((_DWORD *)v2 + 2),
          &v52,
          a2 + 15);
    }
    else
    {
      Outpop::Utility::Stream_Base::move_read_pos(v52, 1);
      std::string::string(v54);
      LOBYTE(v56) = 4;
      sub_1004E510(v54);
      v49 = (Outpop::Utility::Lock *)((char *)v2 + 168);
      Outpop::Utility::Thread_Mutex::acquire((Outpop::Utility::Lock *)((char *)v2 + 168));
      sub_1004DCC0(&v47, v54);
      v51 = (Outpop::Utility::Lock *)*((_DWORD *)v2 + 53);
      v50 = (char *)v2 + 208;
      if ( sub_1004A7F0(&v47, &v50) )
      {
        v12 = v47;
        if ( !v47 )
          invalid_parameter_noinfo();
        v13 = v48;
        if ( v48 == *(_DWORD *)(v12 + 4) )
          invalid_parameter_noinfo();
        v14 = *(Outpop::Utility::Lock **)(v13 + 36);
        v51 = v14;
        if ( v14 )
          Outpop::Utility::Ref_Object::addref(v14);
        LOBYTE(v56) = 5;
        Outpop::Utility::Thread_Mutex::release(v49);
        Outpop::IONetwork::P2P_Channel::handle_read_stream(v14, (struct Outpop::IONetwork::Asynch_IO_Result *)a2);
        LOBYTE(v56) = 4;
        if ( v14 )
          Outpop::Utility::Ref_Object::release(v14);
      }
      else
      {
        Outpop::Utility::Thread_Mutex::release(v49);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 140) == 1 )
        {
          v15 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          v51 = v15;
          Outpop::Utility::Lock::lock(v15);
          LOBYTE(v56) = 6;
          v16 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v17 = Outpop::Utility::Logger::get_log_buffer(v16);
          v18 = sub_10007400(0xFFFFu, v17, L"\n%s", L"LOG_ERROR");
          v43 = GetLastError();
          v40 = GetCurrentThreadId();
          v37 = GetCurrentProcessId();
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v34 = Outpop::Utility::Logger::make_tm(v19);
          v20 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v21 = Outpop::Utility::Logger::make_dt(v20);
          v22 = sub_10007400(
                  0xFFFF - v18,
                  &v17[v18],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v21,
                  v34,
                  v37,
                  v40,
                  v43,
                  L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
                  312)
              + v18;
          v23 = (_DWORD *)v55[0];
          if ( v55[5] < 0x10u )
            v23 = v55;
          sub_10007400(
            0xFFFF - v22,
            &v17[v22],
            L"P2PUdpBuilder::handle_read_stream  peer_channel_map_  not found!  name is  %S",
            v23);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v17);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v24 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v24);
          }
          LOBYTE(v56) = 4;
          Outpop::Utility::Lock::unlock(v15);
        }
      }
      LOBYTE(v56) = 2;
      std::string::~string(v54);
    }
    LOBYTE(v56) = 0;
    if ( v52 )
      Outpop::Utility::Ref_Object::release(v52);
    v56 = -1;
  }
  else if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
          || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
         && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
  {
    v51 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
    Outpop::Utility::Lock::lock(v51);
    LOBYTE(v56) = 1;
    v25 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v26 = Outpop::Utility::Logger::get_log_buffer(v25);
    v27 = sub_10007400(0xFFFFu, v26, L"\n%s", L"LOG_DEBUG");
    v44 = GetLastError();
    v41 = GetCurrentThreadId();
    v38 = GetCurrentProcessId();
    v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v35 = Outpop::Utility::Logger::make_tm(v28);
    v29 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
    v30 = Outpop::Utility::Logger::make_dt(v29);
    v31 = sub_10007400(
            0xFFFF - v27,
            &v26[v27],
            L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
            v30,
            v35,
            v38,
            v41,
            v44,
            L"D:\\R3\\OutpopGameProject\\IONetwork\\P2PUdpBuilder.cpp",
            271);
    sub_10007400(
      0xFFFF - (v31 + v27),
      &v26[v31 + v27],
      L"GXH ERROR P2PUdpBuilder::handle_read_stream(Asynch_IO_Result*  io_result),error code is:%d",
      a2[13].S_un.S_addr);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
      wprintf(L"%s", v26);
    if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
    {
      v32 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      Outpop::Utility::Logger::write_file(v32);
    }
    LOBYTE(v56) = 0;
    Outpop::Utility::Lock::unlock(v51);
  }
}
