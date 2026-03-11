/*
 * func-name: ?OnSAPGetPeerAddress@Peer@P2P@Outpop@@IAEXHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAVINET_Addr@IONetwork@3@1@Z
 * func-address: 0x100042e0
 * callers: 0x10009b90
 * callees: 0x100046c0, 0x10006b20, 0x100075d0, 0x10007d00, 0x100096f0, 0x1000a570
 */

void __thiscall Outpop::P2P::Peer::OnSAPGetPeerAddress(
        _DWORD *this,
        int a2,
        int a3,
        Outpop::IONetwork::INET_Addr *a4,
        Outpop::IONetwork::INET_Addr *a5)
{
  int v6; // edi
  Outpop::Utility::Lock *v7; // eax
  Outpop::Utility::Ref_Object *v8; // edi
  Outpop::Utility::Ref_Object *v9; // ecx
  int v10; // eax
  Outpop::Utility::Logger *v11; // eax
  wchar_t *log_buffer; // edi
  int v13; // esi
  Outpop::Utility::Logger *v14; // eax
  Outpop::Utility::Logger *v15; // eax
  wchar_t *dt; // eax
  int v17; // esi
  int v18; // ebx
  Outpop::Utility::Logger *v19; // eax
  int v20; // esi
  Outpop::Utility::Logger *v21; // eax
  Outpop::Utility::Logger *v22; // eax
  wchar_t *v23; // eax
  int v24; // esi
  int v25; // ebx
  Outpop::Utility::Logger *v26; // eax
  wchar_t *tm; // [esp-18h] [ebp-84h]
  wchar_t *v28; // [esp-18h] [ebp-84h]
  DWORD CurrentProcessId; // [esp-14h] [ebp-80h]
  DWORD v30; // [esp-14h] [ebp-80h]
  DWORD CurrentThreadId; // [esp-10h] [ebp-7Ch]
  DWORD v32; // [esp-10h] [ebp-7Ch]
  DWORD LastError; // [esp-Ch] [ebp-78h]
  DWORD v34; // [esp-Ch] [ebp-78h]
  const char *host_addr; // [esp-8h] [ebp-74h]
  const char *v36; // [esp-8h] [ebp-74h]
  int port_number; // [esp-4h] [ebp-70h]
  int v38; // [esp-4h] [ebp-70h]
  Outpop::Utility::Ref_Object *v39; // [esp+14h] [ebp-58h]
  Outpop::Utility::Lock *v40; // [esp+18h] [ebp-54h] BYREF
  int v41; // [esp+1Ch] [ebp-50h] BYREF
  _BYTE v42[56]; // [esp+28h] [ebp-44h] BYREF
  int v43; // [esp+68h] [ebp-4h]
  char vars0; // [esp+6Ch] [ebp+0h]

  if ( this[25] )
  {
    sub_10007D00(&v40, a3);
    v6 = this[17];
    if ( !v40 || v40 != (Outpop::Utility::Lock *)(this + 16) )
      invalid_parameter_noinfo();
    if ( v41 == v6 )
    {
      v7 = (Outpop::Utility::Lock *)Outpop::Utility::Binary_Stream::operator new(0x48u);
      v8 = v7;
      v40 = v7;
      v9 = 0;
      v43 = 0;
      if ( v7 )
      {
        Outpop::Utility::Binary_Stream::Binary_Stream(v7, 64);
        *(_DWORD *)v8 = &Outpop::Utility::Binary_Stream::`vftable';
        v9 = v8;
      }
      v43 = -1;
      v39 = v9;
      if ( v9 )
        Outpop::Utility::Ref_Object::addref(v9);
      v43 = 1;
      sub_100096F0();
      sub_100096F0();
      if ( Outpop::IONetwork::INET_Addr::get_ip_address(a4) == this[27] )
      {
        v10 = sub_100075D0(v42, a3, a4);
        vars0 = 2;
        sub_10006B20(this + 28, &v41, v10);
        vars0 = 1;
        sub_100046C0(v42);
        Outpop::IONetwork::P2PUdpBuilder::connect(this[25], &v40);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v40 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v40);
          LOBYTE(v43) = 3;
          v11 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v11);
          v13 = sub_1000A570(log_buffer, L"\n%s", L"LOG_DEBUG");
          LastError = GetLastError();
          CurrentThreadId = GetCurrentThreadId();
          CurrentProcessId = GetCurrentProcessId();
          v14 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          tm = Outpop::Utility::Logger::make_tm(v14);
          v15 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          dt = Outpop::Utility::Logger::make_dt(v15);
          v17 = sub_1000A570(
                  &log_buffer[v13],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  dt,
                  tm,
                  CurrentProcessId,
                  CurrentThreadId,
                  LastError,
                  L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                  412)
              + v13;
          if ( *(_DWORD *)(a3 + 24) < 0x10u )
            v18 = a3 + 4;
          else
            v18 = *(_DWORD *)(a3 + 4);
          port_number = (unsigned __int16)Outpop::IONetwork::INET_Addr::get_port_number(a5);
          host_addr = Outpop::IONetwork::INET_Addr::get_host_addr(a5);
          sub_1000A570(
            &log_buffer[v17],
            L"Peer try to connect remote peer %S local address %S:%d",
            v18,
            host_addr,
            port_number);
LABEL_25:
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 136) )
            wprintf(L"%s", log_buffer);
          if ( *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) )
          {
            v26 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
            Outpop::Utility::Logger::write_file(v26);
          }
          LOBYTE(v43) = 1;
          Outpop::Utility::Lock::unlock(v40);
        }
      }
      else
      {
        Outpop::IONetwork::P2PUdpBuilder::connect(this[25], &v40);
        if ( (*(_BYTE *)(Outpop::Utility::Logger::instance() + 136) == 1
           || *(_BYTE *)(Outpop::Utility::Logger::instance() + 137) == 1)
          && *(_BYTE *)(Outpop::Utility::Logger::instance() + 138) == 1 )
        {
          v40 = (Outpop::Utility::Lock *)(Outpop::Utility::Logger::instance() + 144);
          Outpop::Utility::Lock::lock(v40);
          LOBYTE(v43) = 4;
          v19 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          log_buffer = Outpop::Utility::Logger::get_log_buffer(v19);
          v20 = sub_1000A570(log_buffer, L"\n%s", L"LOG_DEBUG");
          v34 = GetLastError();
          v32 = GetCurrentThreadId();
          v30 = GetCurrentProcessId();
          v21 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v28 = Outpop::Utility::Logger::make_tm(v21);
          v22 = (Outpop::Utility::Logger *)Outpop::Utility::Logger::instance();
          v23 = Outpop::Utility::Logger::make_dt(v22);
          v24 = sub_1000A570(
                  &log_buffer[v20],
                  L" %s:%s PID:%d TID:%d EID:%d\n\tFILE:%s %d Line \n\tMessage:",
                  v23,
                  v28,
                  v30,
                  v32,
                  v34,
                  L"D:\\R3\\OutpopGameProject\\P2PNetwork\\Peer.cpp",
                  420)
              + v20;
          if ( *(_DWORD *)(a3 + 24) < 0x10u )
            v25 = a3 + 4;
          else
            v25 = *(_DWORD *)(a3 + 4);
          v38 = (unsigned __int16)Outpop::IONetwork::INET_Addr::get_port_number(a4);
          v36 = Outpop::IONetwork::INET_Addr::get_host_addr(a4);
          sub_1000A570(&log_buffer[v24], L"Peer try to connect remote peer %S external address %S:%d", v25, v36, v38);
          goto LABEL_25;
        }
      }
      v43 = -1;
      if ( v39 )
        Outpop::Utility::Ref_Object::release(v39);
    }
  }
}
