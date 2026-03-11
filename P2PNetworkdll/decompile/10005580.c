/*
 * func-name: ?OnCooperateConnect@Peer@P2P@Outpop@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVINET_Addr@IONetwork@3@1@Z
 * func-address: 0x10005580
 * callers: 0x10009bc0
 * callees: 0x100046c0, 0x10006b20, 0x100075d0, 0x10007d00, 0x100096f0, 0x1000a570
 */

void __thiscall Outpop::P2P::Peer::OnCooperateConnect(
        _DWORD *this,
        int a2,
        Outpop::IONetwork::INET_Addr *a3,
        Outpop::IONetwork::INET_Addr *a4)
{
  Outpop::Utility::Lock *v5; // edi
  Outpop::Utility::Logger *v6; // eax
  wchar_t *log_buffer; // edi
  int v8; // esi
  Outpop::Utility::Logger *v9; // eax
  Outpop::Utility::Logger *v10; // eax
  wchar_t *dt; // eax
  int v12; // esi
  int v13; // ebx
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Lock *v15; // eax
  Outpop::Utility::Ref_Object *v16; // edi
  Outpop::Utility::Ref_Object *v17; // ecx
  int v18; // eax
  Outpop::Utility::Logger *v19; // eax
  wchar_t *v20; // edi
  int v21; // esi
  Outpop::Utility::Logger *v22; // eax
  Outpop::Utility::Logger *v23; // eax
  wchar_t *v24; // eax
  int v25; // esi
  int v26; // ebx
  const char *host_addr; // eax
  Outpop::Utility::Logger *v28; // eax
  Outpop::Utility::Lock *v29; // ecx
  Outpop::Utility::Logger *v30; // eax
  wchar_t *v31; // edi
  int v32; // esi
  Outpop::Utility::Logger *v33; // eax
  Outpop::Utility::Logger *v34; // eax
  wchar_t *v35; // eax
  int v36; // esi
  const char *v37; // eax
  Outpop::Utility::Logger *v38; // eax
  wchar_t *tm; // [esp-18h] [ebp-8Ch]
  wchar_t *v40; // [esp-18h] [ebp-8Ch]
  wchar_t *v41; // [esp-18h] [ebp-8Ch]
  DWORD CurrentProcessId; // [esp-14h] [ebp-88h]
  DWORD v43; // [esp-14h] [ebp-88h]
  DWORD v44; // [esp-14h] [ebp-88h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-84h]
  DWORD v46; // [esp-10h] [ebp-84h]
  DWORD v47; // [esp-10h] [ebp-84h]
  DWORD LastError; // [esp-Ch] [ebp-80h]
  DWORD v49; // [esp-Ch] [ebp-80h]
  DWORD v50; // [esp-Ch] [ebp-80h]
  int port_number; // [esp-4h] [ebp-78h]
  int v52; // [esp-4h] [ebp-78h]
  Outpop::Utility::Ref_Object *v53; // [esp+14h] [ebp-60h]
  Outpop::Utility::Lock *v54; // [esp+18h] [ebp-5Ch] BYREF
  int v55; // [esp+1Ch] [ebp-58h]
  Outpop::Utility::Lock *v56; // [esp+20h] [ebp-54h] BYREF
  int v57; // [esp+24h] [ebp-50h] BYREF
  _BYTE v58[56]; // [esp+30h] [ebp-44h] BYREF
  int v59; // [esp+70h] [ebp-4h]
  char vars0; // [esp+74h] [ebp+0h]

  sub_10007D00(&v56, a2);
  v5 = (Outpop::Utility::Lock *)(this + 16);
  v55 = this[17];
  if ( !v56 || v56 != v5 )
    invalid_parameter_noinfo();
  if ( v57 != v55 )
  {
    if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
       || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
      && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
    {
      v54 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
      Outpop::Utility::Lock::lock(v54);
      v59 = 0;
      v6 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      log_buffer = Outpop::Utility::Logger::get_log_buffer(v6);
      v8 = sub_1000A570(log_buffer, L"\n%s", L"LOG_DEBUG");
      LastError = GetLastError();
      CurrentThreadId = GetCurrentThreadId();
      CurrentProcessId = GetCurrentProcessId();
      v9 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      tm = Outpop::Utility::Logger::make_tm(v9);
      v10 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
      dt = Outpop::Utility::Logger::make_dt(v10);
      v12 = sub_1000A570(
              &log_buffer[v8],
              L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
              dt,
              tm,
              CurrentProcessId,
              CurrentThreadId,
              LastError,
              L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
              709)
          + v8;
      if ( *(_DWORD *)(a2 + 24) < 0x10u )
        v13 = a2 + 4;
      else
        v13 = *(_DWORD *)(a2 + 4);
      sub_1000A570(&log_buffer[v12], L"Peer cooperateconnect peer %S already exits!", v13);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
        wprintf(L"%s", log_buffer);
      if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
      {
        v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
        Outpop::Utility::Logger::write_file(v14);
      }
      v59 = -1;
      Outpop::Utility::Lock::unlock(v54);
    }
    return;
  }
  if ( this[25] )
  {
    sub_10007D00(&v56, a2);
    v55 = this[17];
    if ( !v56 || v56 != v5 )
      invalid_parameter_noinfo();
    if ( v57 == v55 )
    {
      v15 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v16 = v15;
      v56 = v15;
      v59 = 1;
      if ( v15 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v15, 64);
        *(_DWORD *)v16 = &Outpop::Utility::Binary_Stream::`vftable';
        v17 = v16;
      }
      else
      {
        v17 = 0;
      }
      v59 = -1;
      v53 = v17;
      if ( v17 )
        Outpop::Utility::Ref_Object::addref(v17);
      v59 = 2;
      sub_100096F0();
      sub_100096F0();
      if ( Outpop::IONetwork::INET_Addr::get_ip_address(a3) == this[27] )
      {
        v18 = sub_100075D0(v58, a2, a3);
        vars0 = 3;
        sub_10006B20(this + 28, &v57, v18);
        vars0 = 2;
        sub_100046C0((int)v58);
        Outpop::IONetwork::P2PUdpBuilder::connect(this[25], &v54);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v54 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v54);
          LOBYTE(v59) = 4;
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v20 = Outpop::Utility::Logger::get_log_buffer(v19);
          v21 = sub_1000A570(v20, L"\n%s", L"LOG_DEBUG");
          v49 = GetLastError();
          v46 = GetCurrentThreadId();
          v43 = GetCurrentProcessId();
          v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v40 = Outpop::Utility::Logger::make_tm(v22);
          v23 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v24 = Outpop::Utility::Logger::make_dt(v23);
          v25 = sub_1000A570(
                  &v20[v21],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v24,
                  v40,
                  v43,
                  v46,
                  v49,
                  L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                  729)
              + v21;
          if ( *(_DWORD *)(a2 + 24) < 0x10u )
            v26 = a2 + 4;
          else
            v26 = *(_DWORD *)(a2 + 4);
          port_number = (unsigned __int16)Outpop::IONetwork::INET_Addr::get_port_number(a4);
          host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(a4);
          sub_1000A570(
            &v20[v25],
            L"Peer cooperate try to connect remote peer %S local address %S:%d",
            v26,
            host_addr,
            port_number);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v20);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v28 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v28);
          }
          LOBYTE(v59) = 2;
          v29 = v54;
LABEL_49:
          Outpop::Utility::Lock::unlock(v29);
        }
      }
      else
      {
        Outpop::IONetwork::P2PUdpBuilder::connect(this[25], &v54);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v56 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v56);
          LOBYTE(v59) = 5;
          v30 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v31 = Outpop::Utility::Logger::get_log_buffer(v30);
          v32 = sub_1000A570(v31, L"\n%s", L"LOG_DEBUG");
          v50 = GetLastError();
          v47 = GetCurrentThreadId();
          v44 = GetCurrentProcessId();
          v33 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v41 = Outpop::Utility::Logger::make_tm(v33);
          v34 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v35 = Outpop::Utility::Logger::make_dt(v34);
          v36 = sub_1000A570(
                  &v31[v32],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v35,
                  v41,
                  v44,
                  v47,
                  v50,
                  L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                  737)
              + v32;
          if ( *(_DWORD *)(a2 + 24) < 0x10u )
            v54 = (Outpop::Utility::Lock *)(a2 + 4);
          else
            v54 = *(Outpop::Utility::Lock **)(a2 + 4);
          v52 = (unsigned __int16)Outpop::IONetwork::INET_Addr::get_port_number(a4);
          v37 = Outpop::IONetwork::INET_Addr::get_host_addr(a4);
          sub_1000A570(&v31[v36], L"Peer cooperate try to connect remote peer %S external address %S:%d", v54, v37, v52);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", v31);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v38 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v38);
          }
          LOBYTE(v59) = 2;
          v29 = v56;
          goto LABEL_49;
        }
      }
      v59 = -1;
      if ( v53 )
        Outpop::Utility::Ref_Object::release(v53);
    }
  }
}
